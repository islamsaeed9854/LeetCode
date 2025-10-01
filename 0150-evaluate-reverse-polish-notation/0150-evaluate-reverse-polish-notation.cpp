class Solution {
public:
    int evalRPN(vector<string>& tokens) {
	stack<int>stk;
	for (int i = 0; i < tokens.size(); i++) {
		if (tokens[i] == "+") {
			int fr = stk.top();
			stk.pop();
			int sc = stk.top();
			stk.pop();
			stk.push(fr + sc);
		}
		else if (tokens[i] == "-") {
			int fr = stk.top();
			stk.pop();
			int sc = stk.top();
			stk.pop();
			stk.push(sc-fr);
		}
		else if (tokens[i] == "*") {
			int fr = stk.top();
			stk.pop();
			int sc = stk.top();
			stk.pop();
			stk.push(fr * sc);
		}
		else if (tokens[i] == "/") {
			int fr = stk.top();
			stk.pop();
			int sc = stk.top();
			stk.pop();
			stk.push(sc/fr);
		}
		else {
			stk.push(stoi(tokens[i]));
		}
	}
	return stk.top();
}
};