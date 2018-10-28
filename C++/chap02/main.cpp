#include <iostream>
using namespace std;
//using std::cout;
//using std::endl;

//int main(){
//    int iVar;
//    double dVar;
//    char str[20];
//
//    printf("int, double, 문자열 입력 : ");
//    scanf("%d %lf %s", &iVar, &dVar, str);
//
//    printf("%d %f %s", iVar, dVar, str);
//    return 0;
//}

//int main(){
//    int iVar;
//    double dVar;
//    char str[20];
//
//    cout << "int, double, 문자열 값 입력 : ";
//    cin >> iVar >> dVar;
//    cin >> str;
//
//    cout << iVar << " " << dVar << str;
//
//    return 0;
//}

//namespace Microsoft {
//    int g_MVar;
//    int Plus(int x, int y){
//        return (x + y);
//    };
//    int Minus(int x, int y){
//        return (x - y);
//    };
//}
//
//namespace Samsung {
//    int g_SVar;
//    int Plus(int x, int y){
//        return (x + y);
//    };
//    int Minus(int x, int y);
//}
//
//int Samsung::Minus(int x, int y) {
//    return (x - y);
//}
//
//int main(){
//    Microsoft::g_MVar = Microsoft::Minus(5, 2);
//    cout << Microsoft::g_MVar << endl;
//
//    Samsung::g_SVar = Samsung::Plus(5, 4);
//    cout << Samsung::g_SVar;
//
//    return 0;
//}

//namespace CompanyA{
//    void func1(){
//        cout << "CompanyA::func1" << endl;
//    }
//    void func2(){
//        cout << "CompanyA::func2" << endl;
//    }
//}
//
//namespace CompanyB{
//    using namespace CompanyA;
//    void func1(){
//        cout << "CompanyB::func1" << endl;
//    }
//
//    namespace DeptC{
//        void func1(){
//            cout << "CompanyB::DeptC::func1" << endl;
//        }
//    }
//}
//
//int main(){
//    CompanyB::func1();
//    CompanyB::func2();
//    CompanyB::DeptC::func1();
//
//    return 0;
//}

//char square(char c){
//    return (c * c);
//}
//
//long square(long val){
//    return (val * val);
//}
//
//int main(){
//    cout << square(3) << endl; // call to 'square' is ambiguous
//
//    return 0;
//}

//int power(int x){
//    return (x * x);
//}
//
//int power(int x, int y){
//    int i;
//    int result = 1;
//
//    for (i = 0; i < y; i++)
//        result *= x;
//    return result;
//}
//
//int main(){
//    cout << power(2) << endl; // 모호성 주의
//    cout << power(3, 4) << endl;
//
//    return 0;
//}

//int main(){
//    int *p = new int(100);
//
//    cout << "포인터 변수의 주소 : " << &p << endl;
//    cout << "포인터 변수의 값 : " << p << endl;
//    cout << "동적 변수의 값 : " << *p << endl;
//
//    delete p;
//
//    return 0;
//}

//int main(){
//    int i;
//    int *p = new int[5]; // int형 변수 5개 동적 할당
//
//    for(i = 0; i < 5; i++)
//        p[i] = i;
//
//    for(i = 0; i < 5; i++)
//        cout << p[i] << " ";
//    cout << endl;
//
//    delete [] p;
//
//    return 0;
//}

//int main() {
//    int **p;
//    int i, j;
//    p = new int *[100];
//
//    for (i = 0; i < 100; i++)
//        p[i] = new int[500];
//
//    for (i = 0; i < 100; i++) {
//        for (j = 0; j < 500; j++) {
//            p[i][j] = i + j;
//        }
//    }
//
//    for (i = 0; i < 100; i++) {
//        for (j = 0; j < 500; j++) {
//            cout << p[i][j] << "\t";
//        }
//        cout << endl;
//    }
//
//    for (i = 0; i < 100; i++)
//        delete [] p[i];
//    delete [] p;
//
//    return 0;
//}








































