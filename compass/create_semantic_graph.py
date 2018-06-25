from semantic import semantic_analysis as sa
from git_tool.pull_request import get_pull_request as gpr
from git_tool.pull_request import get_pr_code as gpc

repo_dict = [
    {"owner": "openvswitch", "repo": "ovs"},
    {"owner": "ceph", "repo": "ceph"}
]


def create_sentiment_graph(target_dir):
    analyzer = sa.SemanticAnalysis(target_dir + "AST.json", target_dir + "graph")
    parsed_ast = analyzer.convert_ast(target_dir + "parsed_ast.json")

    analyzer.get_graph(parsed_ast)
    analyzer.check()
    analyzer.save_node(target_dir + "nodes.json")
    analyzer.save_edge(target_dir + "edges.json")


def fetch_pr(repo_dict, target_dir):
    for repo in repo_dict:
        pr = gpr.get_pull_request(repo["owner"], repo["repo"], page=1)
        gpr.insert_to_json(pr, target_dir, "pull_request.json")
    diff, code = gpc.load_pr_info(target_dir + "pull_request.json")
    gpc.save_json(diff, target_dir + "pr_code.json")
    gpc.save_json(code, target_dir + "code2pr.json")
