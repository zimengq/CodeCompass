from semantic import semantic_analysis as sa

analyzer = sa.SemanticAnalysis("~/PycharmProjects/Code-Compass/testDataForCompass/AST.json", "~/PycharmProjects/Code-Compass/testDataForCompass/graph")
parsedAST = analyzer.convert_ast("~/PycharmProjects/Code-Compass/testDataForCompass/parsed_ast.json")

analyzer.get_graph(parsedAST)
analyzer.check()
analyzer.save_node("~/PycharmProjects/Code-Compass/testDataForCompass/nodes.json")
analyzer.save_edge("~/PycharmProjects/Code-Compass/testDataForCompass/edges.json")
