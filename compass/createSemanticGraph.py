from semantic import semantic_analysis as sa

analyzer = sa.SemanticAnalysis("/home/user0/testDataForCompass/AST.json", "/home/user0/testDataForCompass/graph")
parsedAST = analyzer.convert_ast("/home/user0/testDataForCompass/parsed_ast.json")

analyzer.get_graph(parsedAST)
analyzer.check()
analyzer.save_node("/home/user0/testDataForCompass/nodes.json")
analyzer.save_edge("/home/user0/testDataForCompass/edges.json")
