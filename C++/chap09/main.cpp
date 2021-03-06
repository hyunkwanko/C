#include <iostream>
#define PI 3.14
using namespace std;

//class CCircle {
//protected:
//    int x, y;
//    double Radius;
//
//public:
//    CCircle(int a, int b, double r) : x(a), y(b), Radius(r) {}
//    double GetArea() { return (PI * Radius * Radius); }
//};
//
//class CSphere : public CCircle {
//private:
//    int z;
//
//public:
//    CSphere(int a, int b, int c, double r) : CCircle(a, b, r), z(c) {}
//    double GetArea() { return (4 * PI * Radius * Radius); }
//    double GetVolume() { return ((4.0/3.0) * PI * Radius * Radius * Radius); }
//};
//
//int main(){
//    CSphere Sph(1, 1, 1, 1);
//    CCircle &Cir = Sph;
//
//    cout << "표면적 : " << Cir.GetArea() << endl;
//
//    return 0;
//};

/* 9장 - 17 */
class base{
private:
    int x;
public:
    void func1() { cout << "base::func1" << endl; }
    virtual void func2() { cout << "base::func2" << endl; }
    virtual void func3() { cout << "base::func3" << endl; }
};

class derived : public base{
private:
    int y;
public:
    void func2() { cout << "derived::func2" << endl; }
};

int main(){
    base *pBase1 = new base();
    base *pBase2 = new derived();

    pBase2->func1();
    pBase2->func2();
    pBase2->func3();

    delete pBase1;
    delete pBase2;

    return 0;
}

//class CString {
//private :
//    char *pStr;
//    int len;
//public :
//    CString(char *str){
//        len=strlen(str);
//        pStr= new char[len+1];
//        strcpy(pStr, str);
//        cout << "CString 생성자" << endl;
//    }
//    virtual ~CString() { delete [] pStr; cout << "CString 소멸자" << endl; }
//};
//
//class CMyString : public CString {
//private :
//    char *pMyStr;
//    int MyLen;
//public :
//    CMyString(char *str1, char *str2) : CString(str1) {
//        MyLen = strlen(str2);
//        pMyStr = new char[MyLen + 1];
//        strcpy(pMyStr, str2);
//        cout << "CMyString 생성자" << endl;
//    }
//
//    ~CMyString() {
//        delete[] pMyStr;
//        cout << "CMyString 소멸자" << endl;
//    }
//};
//
//int main(void) {
//    CString *pStr = new CMyString("CString", "CMyString");
//    delete pStr;
//    return 0;
//}












