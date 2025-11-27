//#include<iostream>
//using namespace std;
//int main() {
//	int k;
//	cin >> k;
//	int i = k + 1;
//	cout << i++ << endl;
//	 i = 1;
//	 cout << i++ << endl;
//	 cout << "welcome to c++" << endl;
//	 return 0;
//}


//#include<iostream>
//using namespace std;
//const double PII = 3.14;
//int main() {
//	double r, d;
//	cin >> r >> d;
//	cout << 1 / 3.0 * PII * r * r * d << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main() {
//	cout << "char length:" << sizeof(char) << endl;
//	cout << "int length:" << sizeof(int) << endl;
//
//	return 0;
//}


//#include <iostream>  
//#include <iomanip>                                  
//using namespace std;
//int main()
//{
//	unsigned int testUnint = 65534;
//	cout << "output in unsigned int  type:" << testUnint << endl;     
//	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
//	cout << "output in short type:" << static_cast<short>(testUnint) << endl;
//	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
//	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
//	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
//	cout << "output in Hex unsigned int type:" << hex << testUnint << endl;                                      
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main() {
//	double t;
//	cin >> t;
//	double res;
//	res = (t - 32) * 5 / 9;
//	printf("%.2f\n", res);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main() {
//	char a;
//	cin >> a;
//	if (islower(a)) {
//		/*a = toupper(a);*/a -= 32;
//		cout << a;
//	}
//	else {
//		char b;
//		b = a + 1;
//		cout << b;
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main() {
//	float x;
//	cin >> x;
//	if (x > 0 && x < 1)cout << 3 - 2 * x << endl;
//	if (x >= 1 && x < 5)cout << 1.0 / 2 * x + 1 << endl;
//	else if (x >= 5 && x < 10)cout << x * x << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main() {
//	double a, b, c;
//	cin >> a >> b >> c;
//	if (a + b <c || a + c < b || b + c < a)cout << "false" << endl;
//	else {
//		double C = a + b + c;
//		cout << C << endl;
//		if (a == b || b == c || a == c) {
//			cout << "等腰" << endl;
//		}
//	}
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//int sum(int a, int b) {
//	return a + b;
//}
//int jian(int a, int b) {
//	return a - b;
//}
//int cheng(int a, int b) {
//	return a * b;
//}
//double chu(int a, double b) {
//	return a / b;
//}
//int mo(int a, int b) {
//	return a % b;
//}
//int main() {
//	string str;
//	int a, b;
//	cin >>a>> str>>b;
//
//	if (str.find('+'))sum(a, b);
//	if (str.find('-'))jian(a, b);
//	if (str.find('*'))cheng(a, b);
//	if (str.find('/'))chu(a, b);
//	if (str.find('%'))mo(a, b);
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//#include<unordered_map>
//using namespace std;
//int main() {
//	string str;
//	getline(cin, str);
//	unordered_map<char, int>cnt(4);
//	for (auto& c : str) {
//		int ascll = int(c);
//		if (ascll >= 65 && ascll <= 90 || ascll >= 97 && ascll <= 122) {
//			cnt[1]++;
//		}
//		if (ascll >= 48 && ascll <= 57) {
//			cnt[2]++;
//		}
//		if (ascll == 32)cnt[3]++;
//		else {
//			cnt[4]++;   
//		}
//		
//	}
//	for (int i = 1; i <= 4; i++) {
//		cout << cnt[i] << " ";
//	}
//	return 0;
//}
//cn/*t[4]好像有问题*/


//#include<iostream>
//using namespace std;
//typedef long long ll;
//int main() {
//	int a, b;
//	cin >> a >> b;
//	int res1;
//	for (int i = 1; i <= a ; i++) {
//		if (a % i == 0 && b % i == 0) {
//			res1 = i;
//		}
//	}
//	ll res2 = a * b/res1;
//	cout << res1 << " " << res2 << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main() {
//	for (int i = 1; i <= 5; i++) {
//		for (int j = 1; j <= 5-i; j++) {
//			cout << " ";
//		}
//		for (int k = 1; k <= i; k++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main() {
//	double a, x1, x0;
//	cin >> a;
//	if (a < 0)return;
//	 x1 = pow(a, 1 / 2.0);
//	while (x1-x0>=1e-5) {
//		x0 = x1;
//		x1 = (x0 + a / x0) / 2;
//	}
//	cout << x1;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main() {
//	double r = 0.8;
//	int num = 2;
//	int tot = 1.6;
//	int sum = 1;
//	int sum_apple = 2;
//	while (sum_apple <= 100) {
//		num *= 2;
//		sum_apple += num;
//		sum ++;
//		tot += num * r;
//	}
//	double pingjun = tot / (double)sum;
//	cout << pingjun << endl;
//	return 0;
//}