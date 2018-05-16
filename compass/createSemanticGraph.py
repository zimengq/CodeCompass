from semantic import semantic_analysis as sa

analyzer = sa.SemanticAnalysis("/home/kakaiu/testDataForCompass/AST.json", "/home/kakaiu/testDataForCompass/graph")
parsedAST = analyzer.convert_ast("/home/kakaiu/testDataForCompass/parsed_ast.json")

analyzer.get_graph(parsedAST)
analyzer.check()
analyzer.save_node("/home/kakaiu/testDataForCompass/nodes.json")
analyzer.save_edge("/home/kakaiu/testDataForCompass/edges.json")