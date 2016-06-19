#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>

using namespace std;

#define MAX_BITS 32
#define MAX 4294967295 

//http://stackoverflow.com/questions/2589096/find-most-significant-bit-left-most-that-is-set-in-a-bit-array
unsigned int Msb32(unsigned int v)
{
	static const unsigned int bval[] =
	{ 0,1,2,2,3,3,3,3,4,4,4,4,4,4,4,4 };

	unsigned int r = 0;
	if (v & 0xFFFF0000) { r += 16 / 1; v >>= 16 / 1; }
	if (v & 0x0000FF00) { r += 16 / 2; v >>= 16 / 2; }
	if (v & 0x000000F0) { r += 16 / 4; v >>= 16 / 4; }
	return r + bval[v];
}
/*
5
12 8 9 11 14
*/
vector<bitset<MAX_BITS>> bits;
vector<unsigned int> arr, l, r;
unsigned int v, ma = 0, mi = MAX;
int n;

void SetLeftAndRight() {

	l = vector<unsigned int>();
	r = vector<unsigned int>();

	for (int j = ma - 1; j >= 0; j--)
	{
		bool bit = bits[0][j];
		for (int i = 0; i < n; i++) {

			if (bits[i][j] ^ bit) {

				for (int k = 0; k < n; k++) {

					if (bits[k][j] ^ bit) {
						l.push_back(arr[k]);
					}
					else {
						r.push_back(arr[k]);
					}

				}
				return;
			}

		}
	}
}

int main() {
	cin >> n;
	bits = vector<bitset<MAX_BITS>>(n);
	arr = vector<unsigned int>(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v;
		arr[i] = v;
		bits[i] = bitset<MAX_BITS>(v);
		ma = max(Msb32(v), ma);
	}
	SetLeftAndRight();

	for (int i = 0; i < l.size(); i++) {
		for (int j = 0; j < r.size(); j++) {
			mi = min(mi, l[i] ^ r[j]);
		}
	}
	cout << (mi == MAX ? 0 : mi) << endl;
	return EXIT_SUCCESS;
}
