//#include <iostream>
//using namespace std;

/* 예제 1 */
//class CPoint {
//private:
//    int x,y;
//public:
//    CPoint(int a = 0, int b = 0) : x(a), y(b) {}
//    CPoint Sum(const CPoint &Po) { return CPoint(x + Po.x, y + Po.y); }
//    void Print() { cout << "(" << x << ", " << y << ")" << endl; }
//};
//
//int main(void){
//    CPoint P1(1, 1);
//    CPoint P2(2, 2);
//    CPoint P3 = P1.Sum(P2); // Sum 함수 호출
//
//    P3.Print();
//
//    return 0;
//}

/* 예제 2 */
//class CPoint {
//private:
//    int x,y;
//public:
//    CPoint(int a = 0, int b = 0) : x(a), y(b) {}
//    CPoint operator+(const CPoint &Po) { return CPoint(x + Po.x, y + Po.y); }
//    void Print() { cout << "(" << x << ", " << y << ")" << endl; }
//};
//
//int main(void){
//    CPoint P1(1, 1);
//    CPoint P2(2, 2);
//    CPoint P3 = P1 + P2; // Sum 함수 호출
//
//    P3.Print();
//
//    return 0;
//}

/* 예제 3 */
//class CPoint {
//private:
//    int x,y;
//public:
//    CPoint(int a = 0, int b = 0) : x(a), y(b) {}
//    void Print() { cout << "(" << x << ", " << y << ")" << endl; }
//
//    friend CPoint operator+(const CPoint &Po1, const CPoint &Po2);
//};
//
//CPoint operator+(const CPoint &Po1, const CPoint &Po2){
//    return CPoint(Po1.x + Po2.x, Po1.y + Po2.y);
//}
//
//int main(void){
//    CPoint P1(1, 1);
//    CPoint P2(2, 2);
//    CPoint P3 = P1 + P2; // Sum 함수 호출
//
//    P3.Print();
//
//    return 0;
//}

/* 예제 4 */
//class CPoint {
//private :
//    int x, y;
//public :
//    CPoint(int a = 0,int b = 0):x(a),y(b){}
//    CPoint operator+(const CPoint &Po) { return CPoint(x + Po.x, y + Po.y); }
//    CPoint operator+(int a) { return CPoint(x + a, y + a); }
//    CPoint operator-(const CPoint &Po) { return CPoint(x - Po.x, y - Po.y); }
//    CPoint operator-(int a) { return CPoint(x - a, y - a); }
//    CPoint operator*(int a) { return CPoint(x * a, y * a); }
//    CPoint operator/(int a) { return CPoint(x / a, y / a); }
//    void Print(CPoint Po = CPoint(0, 0)){ cout << "(" << x << "," << y << ")" << endl; }
//};
//
//int main(void){
//    CPoint P1(2, 2), P2(4, 4);
//    int a = 2;
//    (P1 + P2).Print();
//    (P1 + a).Print();
//    (P1 - P2).Print();
//    (P1 - a).Print();
//    (P1 * a).Print();
//    (P1 / a).Print();
//    return 0;
//}

/* 예제 5 */
//class CPoint {
//private :
//    int x, y;
//public :
//    CPoint(int a = 0, int b = 0) : x(a), y(b) {}
//    CPoint operator-() { return CPoint(-x, -y); } // - 부호연산자
////    CPoint operator-() { x = -x; y = -y; return CPoint(x, y); } // 응용 : 음수 부호(-) 연산자의 의미 변경
//    void Print(){ cout << "(" << x << "," << y << ")" << endl; }
//};
//
//int main(void) {
//    CPoint P1(2, 2);
//    CPoint P2 = -P1;
//    CPoint P3 = -(-P1);
//
//    P1.Print();
//    P2.Print();
//    P3.Print();
//    return 0;
//}

/* 예제 6 */
//class CPoint { // 위의 예제 해결 방안 -> 참조 반환
//private :
//    int x; int y;
//public :
//    CPoint(int a = 0, int b = 0): x(a), y(b) {}
//    CPoint &operator-() { x = -x; y = -y; return (*this); }
//    void Print(){ cout << "(" << x << "," << y << ")" << endl; }
//};
//
//int main(void) {
//    CPoint P1(2, 2);
//    CPoint P2 = -(-P1); // P1(2,2) 두 번 변함, P2(2,2)
//    P1.Print();
//    P2.Print();
//    return 0;
//}

/* 예제 7 */
//class CPoint {
//private :
//    int x, y;
//public :
//    CPoint(int a = 0, int b = 0): x(a), y(b) {}
//    CPoint &operator++() { x++; y++; return (*this); }// 전위 증가 연산자
//    void Print(){ cout << "(" << x << "," << y << ")" << endl; }
//};
//int main(void) {
//    CPoint P1(1, 1);
//    CPoint P2 = ++P1; // P1 (2, 2), P2 (2, 2)
//    CPoint P3 = ++(++P1); // P1 (4, 4), P3 (4, 4)
//    P1.Print();
//    P2.Print();
//    P3.Print();
//    return 0;
//}

/* 예제 8 */
#include <cstdio>
using namespace std;

char *endl = "\n";
char *tab = "\t";

class ostream {
public :
    ostream &operator<<(int val) { // int 값에 대한 출력 연산자(<<) 오버로딩
        printf("%d", val);
        return (*this);
    }
    ostream &operator<<(char *str) {// char * 값에 대한 << 연산자 오버로딩
        printf("%s", str);
        return (*this);
    }
};

class istream {
public :
    istream &operator>>(int &val) { // int 값에 대한 >> 연산자 오버로딩
        scanf("%d", &val);
        return (*this);
    }
    istream &operator>>(char *str) {// char * 값에 대한 >> 연산자 오버로딩
        scanf("%s", str);
        return (*this);
    }
};

ostream cout;
istream cin;

int main(void)
{
    int a = 5;

    char str[] = "C++ Programming";

    cout << a << tab << str << endl;

    cout << "입력 : ";
    cin >> a >> str;
    cout << a << tab << str << endl;
    return 0;
}
