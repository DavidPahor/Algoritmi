#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

float opseg(float r) {
	float o = 2 * r * 3.14;
	return o;
}

float povr(float r) {
	float p = pow(r, 2) * 3.14;
	return p;

}

float x1(float a, float b, float c) {
	float xj = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	return xj;
}

float x2(float a, float b, float c) {
	float xj = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	return xj;
}

float otp(float r1, float r2) {
	float ot = (r1 * r2) / (r1 + r2);
	return ot;
}

float str(float u, float R) {
	float I = u / R;
	return I;
}

bool prosti(int br) {
	bool pro = true;
	for (int i = 2; i < br; i++)
	{
		if (br % i == 0)
		{
			pro = false;
			break;
		}
	}
	return pro;
}
int fakt(int br2) {
	int faktor = 1;
	for (int i = br2; i > 0; i--) {
		faktor *= i;
	}
	return faktor;
}

int main() {
	float r, a, b, c, r1, r2, R, u;
	int br, br2;
	cout << "Upisi radijus:";
	cin >> r;
	cout << "Opseg je; " << opseg(r) << endl;
	cout << "Povrsina je; " << povr(r) << endl;
	cout << "Upisi a:";
	cin >> a;
	cout << "Upisi b:";
	cin >> b;
	cout << "Upisi c:";
	cin >> c;
	cout << "Prvo rjesenje je; " << x1(a, b, c) << endl;
	cout << "Drugo je; " << x2(a, b, c) << endl;
	cout << "Upisi prvi otpornik:";
	cin >> r1;
	cout << "Upisi drugi otpornik:";
	cin >> r2;
	cout << "Ukupni otpor je; " << otp(r1, r2) << endl;
	cout << "Upisi napon :";
	cin >> u;
	cout << "Upisi otpor:";
	cin >> R;
	cout << "Struja je; " << str(u, R) << endl;
	cout << "Upisi broj:";
	cin >> br;
	cout << "Broj je: " << prosti(br) << endl;
	cout << "Upisi broj:";
	cin >> br2;
	cout << "Broj je: " << fakt(br2) << endl;
	return 0;
}