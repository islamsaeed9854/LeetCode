class Solution {
public:
    string simplifyPath(string path) {
	stack<string>stk;
	string cur_str = "";
	path +='/';
	for (int i = 0; i < path.size(); i++) {
		if (path[i] == '/')
		{
			if (cur_str == ".."){
				if(!stk.empty())
				stk.pop();
			}	
			else if (cur_str!= "." && cur_str.size())
				stk.push(cur_str);
			cur_str = "";
		}
		else 
		cur_str += path[i];
	}
	string result = "/";
	vector<string> vec;
	while (stk.size()) {
		vec.push_back(stk.top());
		stk.pop();
	}
	for (int i = vec.size() - 1; i >= 0; i--)
	{
		result += vec[i];
		if(i!=0)
		result += '/';
	}
	return result;
}
};