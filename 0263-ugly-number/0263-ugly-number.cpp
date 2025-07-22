class Solution {
public:
    bool is_prime(int x) {
	if (x == 1|| x==0)
		return 0;
	if (x == 2)
		return 1;
	for (int i =  2; i <= sqrt(x); i++) {
		if (x % i == 0)
			return 0;
	}
	return 1;
}

bool isUgly(int n) {
	if (n <= 0)
		return 0;
	for (int i = 1; i <= sqrt(n); i++) {

		if (n % i == 0) {
			int fr = i ,sc = n/i ;

			if (fr != 2 && fr != 3 && fr != 5 && is_prime(fr))
				return 0;
			if (sc != 2 && sc != 3 && sc != 5 && is_prime(sc))
				return 0;
		}
	}
	return 1;
}
};