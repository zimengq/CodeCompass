# Knowledge System for Software Engineering

## knowledge based search engine for software development
- search C/C++ components (class/function) by keywords
- present structural information, like associations among code blocks   
- present developer information of lines of code
- present pr information of lines of code

## Whole Picture
- requirement (scenario with natural language)
- feature set (hooks for requirement)
- metrics (function, robustness, reliability, complexity)
- set of mapping
- profiles (semantic and syntax)
- declarations (hooks for source code)
- source code, excluding dead code

## Syntax and Semantic Profile
An example:
```
Class mail(){
	func receivedMail(){
		…
	}
	func sendMail(){
		…
	}
}
```

For this code, syntax profile is:
![img](pic_url)

semantic profile is:
![img](pic_url)

## Metrics and Implementing Profiles
### Metrics
function, robustness, reliability, complexity.

### Profiles
source code (including comment), developer, bug report.

### Relationships between profiles and code section
- source code -> semantic profile -> declaration -> code section
- source code -> syntax profile -> declaration -> code section
- developer -> commit history -> code piece -> semantic profile -> declaration -> code section
- developer -> commit history -> code piece -> syntax profile -> declaration -> code section
- bug code piece -> semantic profile -> declaration -> code section
- bug description -> syntax profile -> declaration -> code section

### Relationships between profiles and metrics
- source code -> complexity and function
- developer -> reliability
- bug - robustness
