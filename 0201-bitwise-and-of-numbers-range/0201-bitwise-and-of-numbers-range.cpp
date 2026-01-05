class Solution {
public:
double logg(double a, double b)
{
	return log2(a) / log2(b);
}
int rangeBitwiseAnd(int left, int right) {
    
	if (left == 0 || right == 0)
		return 0;

	int ans = 0;
	while (left && right && (int)logg(left,2) == (int)logg(right,2)) {
	ans |= (1 << (int)logg(left, 2));
	left ^= (1 << (int)(logg(left, 2)));
	right ^= (1 << (int)(logg(right, 2)));
}
	return ans;
}
};