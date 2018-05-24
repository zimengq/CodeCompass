import AST.CLexer;
import AST.CParser;
import AST.CVisitor;
import AST.MyVisitor;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CommonTokenStream;

public class Kernel {

    public static void main(String args[]) throws Exception{
        String text = "# define<ctdio>\n" +
                "int MongoDB(int argc, char **argv) {\n" +
                "  if (argc > 1) {\n" +
                "    return 1;\n" +
                "  }\n" +
                "}";
        
        CLexer lexer = new CLexer(CharStreams.fromString(text));
        //CLexer lexer = new CLexer(CharStreams.fromStream(System.in));
        //CLexer lexer = new CLexer(CharStreams.fromFileName("FrontEnd/diff.c"));
        CParser parser = new CParser(new CommonTokenStream(lexer));
        CVisitor<Integer> visitor = new MyVisitor();
        visitor.visit(parser.compilationUnit());
    }
}
