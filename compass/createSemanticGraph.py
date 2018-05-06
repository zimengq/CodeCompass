from semantic import semantic_analysis as sa

analyzer = sa.SemanticAnalysis("/home/kakaiu/testDataForCompass/AST.json", "/home/kakaiu/testDataForCompass/graph")
parsedAST = analyzer.convert_ast("/home/kakaiu/testDataForCompass/parsed_ast.json")

analyzer.get_graph(parsedAST)
analyzer.check()
analyzer.saveNode("/home/kakaiu/testDataForCompass/node.json")
analyzer.saveEdge("/home/kakaiu/testDataForCompass/edge.json")