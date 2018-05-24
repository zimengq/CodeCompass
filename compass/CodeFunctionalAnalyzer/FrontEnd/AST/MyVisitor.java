package AST;

import SegAndLemmatization.Segment;

public class MyVisitor extends CBaseVisitor<Integer> implements CVisitor<Integer> {
    @Override
    public Integer visitFunctionDefinition(CParser.FunctionDefinitionContext ctx) {
        String type = "";
        for (CParser.DeclarationSpecifierContext current_type : ctx.declarationSpecifiers().declarationSpecifier()) {
            String type_segment = current_type.getText();
            if (type_segment.contains("static") || type_segment.contains("NORETURN") || type_segment.contains("inline")) {
                continue;
            }
            if (type_segment.startsWith("struct")) {
                type_segment = "struct " + type_segment.substring(6);
            }
            if (type_segment.startsWith("union")) {
                type_segment = "union" + type_segment.substring(5);
            }
            type = type.concat(type_segment + " ");
        }
        String name = ctx.declarator().directDeclarator().directDeclarator().getText();
        Integer lineno = ctx.getStart().getLine() ;
        System.out.println("type:"+type+" name:"+name+" line:"+lineno);
        Segment full_name = new Segment(name);
        System.out.println("name expension:"+full_name);
        return super.visitFunctionDefinition(ctx);
    }
}
