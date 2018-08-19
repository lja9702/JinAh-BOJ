//민석이 코드
#include<iostream>
#include<complex>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;
using C = complex<double>;
using polynomial = vector<C>;

class FFT {
public:

	using polynomial = vector<C>;
	using ll = long long;

	static void DFT(polynomial& dst, const C& w) {
		int N = dst.size();
		if (N == 1)
			return;

		vector<C> even(N / 2), odd(N / 2);
		for (int i = 0; i < N; i += 2) {
			even[i>>1] = dst[i];
			odd[i>>1] = dst[i + 1];
		}

		DFT(even, w * w);
		DFT(odd, w * w);

		C wi(1, 0);

		for (int i = 0; i < N / 2; i++, wi *= w) {
			dst[i] = even[i] + wi * odd[i];
			dst[i + N / 2] = even[i] - wi * odd[i];
		}
	}

	// size of p should be power of 2
	static void DFT(polynomial& p, bool reverse = false) {
		int N = p.size();
		double base = (2 * acos(-1)) / N;
		if (reverse)
			base *= -1;
		C w(cos(base), sin(base));

		DFT(p, w);

		if (reverse)
			for (int i = 0; i < N; i++)
				p[i] /= (double)N;
	}

	static void mul(polynomial& a, polynomial& b, polynomial& res) {
		int N = 1;
		for (; N <= max(a.size(), b.size()); N <<= 1);
		a.resize(N), b.resize(N), res.resize(N);

		DFT(a), DFT(b);

		for (int i = 0; i < N; i++)
			res[i] = a[i] * b[i];

		DFT(res, true);
	}

	static long long get_integer(const C& c) {
		return (long long)(c.real() + 0.5);
	}
};

int main(void)
{
	cin.sync_with_stdio(false); cin.tie(NULL);
	int N;	cin >> N;
	int val;
	polynomial a(N << 1, 0), b(N, 0);
	polynomial res;

	for (int i = 0; i < N; i++) {
		cin >> val;
		a[i + N] = a[i] = val;
	}

	for (int i = 0; i < N; i++) {
		cin >> val;

		b[N-1 - i] = val;
	}

	long long resl = 0;

	FFT::mul(a, b, res);

	for (int i = N - 1; i < 2 * N - 1; i++)
		resl = max(resl , FFT::get_integer(res[i]));

	cout << resl << endl;
}
