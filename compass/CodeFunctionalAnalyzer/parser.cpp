#include <clang/AST/ASTConsumer.h>
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/FrontendAction.h"
#include "clang/Tooling/Tooling.h"


using namespace clang;
using namespace clang::tooling;
class FuncNameVisitor
  : public RecursiveASTVisitor<FuncNameVisitor> {

public:
  explicit FuncNameVisitor(ASTContext *Context)
    : Context(Context) {}
  
  bool VisitFunctionDecl(FunctionDecl *Declaration) {
      FullSourceLoc FullLocation = Context->getFullLoc(Declaration->getLocStart());
      if (FullLocation.isValid())
        llvm::outs() << "Found "
                     << Declaration->getNameInfo()
                     << " at "
                     << FullLocation.getSpellingLineNumber() << ":"
                     << FullLocation.getSpellingColumnNumber() << "\n";
      return true;
  }

private:
  ASTContext *Context;
};

class FuncNameConsumer : public ASTConsumer {
public:
  explicit FuncNameConsumer(ASTContext *Context)
    : Visitor(Context) {}
  
  virtual void HandleTranslationUnit(ASTContext &Context) {
    Visitor.TraverseDecl(Context.getTranslationUnitDecl());
  }
private:
  // A RecursiveASTVisitor implementation.
  FuncNameVisitor Visitor;
};

class FuncNameAction : public ASTFrontendAction
{
  public:
    virtual std::unique_ptr<ASTConsumer> CreateASTConsumer(
        CompilerInstance &Compiler, llvm::StringRef InFile)
    {
        return std::unique_ptr<ASTConsumer>(
            new FuncNameConsumer(&Compiler.getASTContext()));
    }
};

int main(int argc, char **argv) {
  if (argc > 1) {
    runToolOnCode(new FuncNameAction, argv[1]);
  }
}