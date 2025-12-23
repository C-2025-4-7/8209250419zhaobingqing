//1.
////#include<iostream>
////#include<algorithm>
////using namespace std;
////int yue(int a, int b) {
////	if (a > b)swap(a, b);
////	for (int i = a; i > 0; i--) {
////		if (b % i == 0 && a % i == 0) {
////			return i;
////		}
////	}
////}
////int bei(int a, int b) {
////	int y = yue(a, b);
////	int res = a * b / y;
////	return res;
////}
////int main() {
////	int x, y;
////	cin >> x >> y;
////	cout << yue(x, y) << " " << bei(x, y) << endl;
////	return 0;
////}

//2.
//#include<iostream>
//#include<vector>
//using namespace std;
//bool is_prime(int num) {
//	if (num == 2||num==3) {
//		return true;
//	}
//	for (int i = 2; i  < num; i++) {
//		if (num % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//int main() {
//	int cnt = 0;
//	int x = 2;
//	vector<int>ans;
//	while (cnt < 200) {
//		if (is_prime(x)) {
//			ans.push_back(x);
//			cnt++;
//		}
//		x++;
//	}
//	for (int i = 0; i < 20; i++) {
//		for (int j = 0; j < 10; j++) {
//			cout << ans[i*10+j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

////4.
//#ifndef mytriangle_h
//#define mytriangle_h  
// 
//bool is_valid(double side1, double side2, double side3);
//
//double area(double side1, double side2, double side3);
//
//#endif  
//#include "mytriangle.h"  
//#include <cmath>   
//
//bool is_valid(double side1, double side2, double side3) {
//    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
//        return false;
//    }
//    return (side1 + side2 > side3) &&
//        (side1 + side3 > side2) &&
//        (side2 + side3 > side1);
//} 
//double area(double side1, double side2, double side3) {
//    double s = (side1 + side2 + side3) / 2;
//    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
//}
//#include <iostream>  
//#include "mytriangle.h"  
//using namespace std;
//int main() {
//    double a, b, c;
//    cout << "请输入三角形的三条边长: ";
//    cin >> a >> b >> c;
//    if (is_valid(a, b, c)) {
//        cout << "这三条边能构成三角形，面积为: "
//            << area(a, b, c) << endl;
//    }else {
//        cout << "错误: 这三条边不能构成有效的三角形" << endl;
//    }
//    return 0;
//}



////5.
//#include<iostream>
//using namespace std;
//int eat(int left,int day) {
//	day = day - 1;
//	if (day == 1) {
//		return (left+1)*2;
//	}
//	left = (left + 1) * 2;
//	return eat(left, day);
//}
//int main() {
//	int l = 1;
//	int d = 10;
//	cout << eat(l, d) << endl;
//	return 0;
//}



//1.
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main() {
//	vector<int>a;
//	for (int i = 0; i < 10; i++) {
//		int x;
//		cin >> x;
//		auto it = find(a.begin(), a.end(), x);
//		if (it == a.end()) {
//			a.push_back(x);
//		}
//	}
//	for (int i = 0; i < a.size(); i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}
// 
//真正用数组？？
//#include<iostream>
//using namespace std;
//int a[10];
//int main() {
//	for (int i = 0; i < 10; i++) {
//		bool flag = true;
//		cin >> a[i];
//		for (int j = 0; j < i; j++) {
//			if (a[j] == a[i]) {
//				flag = false;
//				break;
//			}
//		}
//		if (flag) {
//			cout << a[i] << " ";
//		}
//	}
//	cout << endl;
//	return 0;
//}


//2.
//#include<iostream>
//#include<algorithm>
//using namespace std;
//double a[11];
//void paixv(double a[],int n) {
//	bool flag = true;
//	do {
//		flag = false;
//		for (int i = 1; i < n; i++) {
//			if (a[i] > a[i + 1]) {
//				swap(a[i], a[i + 1]);
//				flag = true;
//			}
//		}
//		n--;
//	} while (flag);
//}
//int main() {
//	for (int i = 1; i <= 10; i++) {
//		cin >> a[i];
//	}
//	paixv(a, 10);
//	for (int i = 1; i <= 10; i++) {
//		cout << a[i] << " ";
//	}
//	return 0;
//}

//3.
//#include<iostream>
//using namespace std;
//int main() {
//	bool guizi[100] = {false};
//	for (int i = 1; i <= 100; i++) {
//		for (int j = 0; j < 100; j += i) {
//			guizi[j] = !guizi[j];
//		}
//	}
//	for (int i = 1; i <= 100; i++) {
//		if (guizi[i]) {
//			cout << i << " ";
//		}
//	}
//	cout << endl;
//	return 0;
//}


//4.
//#include<iostream>
//using namespace std;
//int n, m;
//int list1[80], list2[80],list3[160];
//void sort(int list1[], int n, int list2[], int m, int list3[]) {
//	int i = 0, j = 0, k = 0;
//	while (i < n && j < m) {
//		if (list1[i] < list2[j]) {
//			list3[k++] = list1[i++];
//		}
//		else {
//			list3[k++] = list2[j++];
//		}
//	}
//	while (i < n) {
//		list3[k++] = list1[i++];
//	}
//	while (j < m) {
//		list3[k++] = list2[j++];
//	}
//}
//int main() {
//	cin >> n ;
//	for (int i = 0; i < n; i++) {
//		cin >> list1[i];
//	}
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> list2[i];
//	}
//	sort(list1, n, list2, m, list3);
//	for (int i = 0; i < n + m; i++) {
//		cout << list3[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}


////5.
//#include<iostream>
//#include<cstring>
//#include <string>
//using namespace std;
//char s1[100],s2[100];
//int index(char s1[], char s2[]) {
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 > len2) {
//		return -1;
//	}
//	for (int i = 0; i <= len2 - len1; i++) {
//		bool flag = true;
//		for (int j = 0; j < len1; j++) {
//			if (s1[j] != s2[i+j]) {
//				flag = false;
//				break;
//			}
//		}
//		if (flag) {
//			return i;
//		}
//	}
//	return -1;
//}
//int main() {
//	cin.getline(s1, 100);
//	cin.getline(s2, 100);
//	cout << index(s1, s2) << endl;
//	return 0;
//}

//6.
//#include<iostream>
//#include<cctype>
//using namespace std;
//void count(char s[], int cnt[]) {
//	for (int i = 0; i < 26; i++) {
//		cnt[i] = 0;
//	}
//	for (int i = 0; s[i] != '\0'; i++) {
//		char c = tolower(s[i]);
//		if (c >= 'a' && c <= 'z') {
//			cnt[c - 'a']++;
//		}
//	}
//}
//int main() {
//	char a[1000];
//	int cnt[26] = { 0 };
//	cin.getline(a, 1000);
//	count(a, cnt);
//	for (int i = 0; i < 26; i++) {
//		if (cnt[i]) {
//			cout << static_cast<char>('a' + i) << ":" << cnt[i] << " times;" << endl;
//		}
//	}
//	return 0;
//}

//1.
//#include<iostream>
//using namespace std;
//int main() {
//	int i, j, * pi, * pj;
//	pi = &i;
//	pj = &j;
//	i = 5, j = 7;
//	cout << i << '\t' << j << '\t' << pi << "\t" << pj << endl;
//	cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j << endl;
//	return 0;
//}

//2.
//#include<iostream>
//using namespace std;
//int main() {
//	int a[] = { 1,2,3 };
//	int* p, i;
//	p = a;
//	for (i = 0; i < 3; i++) {
//		printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));
//	}
//	return 0;
//}


//3.
//#include<iostream>
//using namespace std;
//void f(char* st, int i) {
//	st[i] = '\0';
//	cout << st;
//	if (i > 1) {
//		f(st, i - 1);
//	}
//}
//int main() {
//	char st[] = "abcd";
//	f(st, 4);
//	return 0;
//}

//4.
//#include<iostream>
//using namespace std;
//int* f() {
//	int* list = new int[4] {1, 2, 3, 4};
//	return list;
//}
//int main() {
//	int* p = f();
//	cout << p[0] << endl;
//	cout << p[1] << endl;
//	delete[]p;
//	return 0;
//}

//1.
//#include<iostream>
//#include<cstring>
//#include <string>
//using namespace std;
//char s1[100],s2[100];
//int index(char s1[], char s2[]) {
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 > len2) {
//		return -1;
//	}
//	for (int i = 0; i <= len2 - len1; i++) {
//		bool flag = true;
//		for (int j = 0; j < len1; j++) {
//			if (s1[j] != s2[i+j]) {
//				flag = false;
//				break;
//			}
//		}
//		if (flag) {
//			return i;
//		}
//	}
//	return -1;
//}
//int main() {
//	cin.getline(s1, 100);
//	cin.getline(s2, 100);
//	cout << index(s1, s2) << endl;
//	return 0;
//}

//2
//#include <iostream>  
//#include <cctype>
//#include <cstring> 
//using namespace std;
//int parseHex(const char* const hexString);
//int main() {
//    const char* test1 = "A5";
//    const char* test2 = "FF";
//    const char* test3 = "100";
//    const char* test4 = "1F4"; // 500  
//
//    cout << "测试结果:" << endl;
//    cout << test1 << " -> " << parseHex(test1) << endl;   
//    cout << test2 << " -> " << parseHex(test2) << endl;   
//    cout << test3 << " -> " << parseHex(test3) << endl; 
//    cout << test4 << " -> " << parseHex(test4) << endl;  
//    char input[100];
//    cout << "\n请输入一个十六进制数(不带0x前缀): ";
//    cin >> input;
//    cout << input << " -> " << parseHex(input) << endl;
//
//    return 0;
//}
//
//int parseHex(const char* const hexString) {
//    int decimalValue = 0;
//    int length = strlen(hexString);
//
//    for (int i = 0; i < length; i++) {
//        char currentChar = toupper(hexString[i]);
//        int digitValue;
//        if (currentChar >= '0' && currentChar <= '9') {
//            digitValue = currentChar - '0';
//        }else if (currentChar >= 'A' && currentChar <= 'F') {
//            digitValue = 10 + (currentChar - 'A');
//        }else {
//            cerr << "错误: 非法十六进制字符 '" << currentChar << "'" << endl;
//            return -1;
//        }
//        decimalValue = decimalValue * 16 + digitValue;
//    }
//
//    return decimalValue;
//}

//3
//#include <iostream>  
//using namespace std;
//void sortArray(int* arr, int size);
//int main() {
//    int size;
//    cout << "请输入数组元素个数: ";
//    cin >> size;
// 
//    int* arr = new int[size];
// 
//    cout << "请输入" << size << "个整数:" << endl;
//    for (int i = 0; i < size; i++) {
//        cin >> arr[i];
//    }
//
//    cout << "\n调试信息:" << endl;
//    cout << "数组指针地址: " << arr << endl;
//    for (int i = 0; i < size; i++) {
//        cout << "元素" << i << ": 地址=" << (arr + i)
//            << ", 值=" << *(arr + i) << endl;
//    }
//
//    sortArray(arr, size);
// 
//    cout << "\n排序后的数组:" << endl;
//    for (int i = 0; i < size; i++) {
//        cout << *(arr + i) << " "; 
//    }
//    cout << endl;
//
//    delete[] arr;
//
//    return 0;
//}
//void sortArray(int* arr, int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size - i - 1; j++) {
//            if (*(arr + j) > *(arr + j + 1)) {
//                int temp = *(arr + j);
//                *(arr + j) = *(arr + j + 1);
//                *(arr + j + 1) = temp;
//            }
//        }
//    }
//}
