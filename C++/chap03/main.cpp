#include <iostream>
using namespace std;

/*
 <매크로 인수가 괄호 속에 있는 이유>
 인수가 상수나 변수일 수도 있지만 복잡한 수식일 수도 있는데, 이 경우 인수 수식 자체가 먼저 평가되어야 하기 때문이다.
*/

//#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))
//
//int main(){
//    cout << MIN(6, 5) << endl;
//
//    return 0;
//}

//#define MULTI(X, Y) (X * Y)
//
//inline int MULTI(int X, int Y) { return (X * Y); }
//
//
//int main(){
//    cout << MULTI(3, 6);
//    return 0;
//}

//inline int Fact(int n){
//    return ((n <= 1) ? 1 : n * Fact(n-1));
//}
//
//int main(){
//    cout << Fact(5);
//
//    return 0;
//}

//int main(){
//    int var1 = 3;
//    int var2 = 5;
//    int &ref = var1; // ref 와 var1은 동일한 변수
//
//    ref = 7;
//    cout << "var1: " << var1 << ", var2: "
//        << var2 << ", ref: " << ref << endl;
//
//    ref = var2;
//    cout << "var1: " << var1 << ", var2: "
//        << var2 << ", ref: " << ref << endl;
//
//    return 0;
//}

//int main(){
//    int var = 2;
//    int &ref1 = var; // ref1과 var는 동일
//    int &ref2 = ref1; // ref2와 ref1이 동일
//    // 결과적으로 다 동일
//
//    ref1 = 2;
//
//    cout << "var : " << var << endl;
//    cout << "ref1 : " << ref1 << endl;
//    cout << "ref2 : " << ref2 << endl;
//
//    return 0;
//}

//int sum(int x, int y){
//    return x + y;
//}
//
//int main(){
//    int (*pSum)(int, int); // 함수 포인터
//    pSum = sum;
//    // int (*pSum)(int, int) = sum; // 함수에 대한 참조
//    cout << pSum(3, 4) << endl;
//
//    return 0;
//}

//int sum(int x, int y){
//    return x + y;
//}
//
//int main(){
//    int a;
//    int &b = a; // a = b
//    int *p = &b; // b = *p
//    int &c = b; // c = b
//
//    // 따라서, a = b = c = *p이다.
//
//    a = 4;
//
//    cout << "a : " << a << endl;
//    cout << "b : " << b << endl;
//    cout << "*p : " << *p << endl;
//    cout << "c : " << c << endl;
//
//    int (&rSum)(int, int) = sum;
//    cout << rSum(c, 5) << endl;
//
//    int ary[3] = { 0 }; // 배열을 0으로 초기화
//
//    int (&rAry)[3] = ary; // rAry[] = ary[]
//    rAry[2] = c;
//    cout << ary[0] << " " << ary[1] << " " << ary[2] << endl;
//
//    return 0;
//}

//void swap(int *x, int *y){ // 포인터 활용
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//int main(){
//    int a = 3, b = 4;
//    swap(&a, &b);
//
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//
//    return 0;
//}

//void swap(int &x, int &y){ // 참조와 함수
//    int temp = x;
//    x = y;
//    y = temp;
//}
//
//int main(){
//    int a = 3, b = 4;
//    swap(a, b);
//
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//
//    return 0;
//}

//int sum(int x, int y){
//    int z = x + y;
//    return z;
//}
//
//int main(){
//    int a = 3, b = 4;
//    int result = sum(a, b);
//    cout << result;
//
//    return 0;
//}

//int sum(int x, int y){
//    int z = x + y;
//    int &refZ = z;
//    return refZ;
//}
//
//int main(){
//    int a = 3, b = 4;
//    int result = sum(a, b);
//    cout << result;
//
//    return 0;
//}

//int &sum(int x, int y){
//    int z = x + y;
//    return z;
//}
//
//int main(){
//    int a = 3, b = 4;
//    int result = sum(a, b);
//    cout << result;
//
//    return 0;
//}

//int &min(int &x, int &y){
//    return ((x < y) ? x : y);
//}
//
//int main(){
//    int a = 3, b = 4;
//    min(a, b) = 5; // 값이 작은 a에 5 대입 -> a = 5와 동일
//
//    cout << "a = " << a << endl;
//    cout << "b = " << b;
//
//    return 0;
//}

int &GetArray(int *ary, int index){
    return ary[index];
}

int main(){
    int i;
    int ary[5];

    for(i = 0; i < 5; i++)
        GetArray(ary, i) = i * i; // ary[i] = i * i와 동일

    for(i = 0; i < 5; i++)
        cout << "arr[" << i << "] " << GetArray(ary, i) << endl;

    return 0;
}

//int &GetVar(void){
//    int var = 5;
//    return var;
//}
//
//int main(){
//    int &value = GetVar();
//    value = 3;
//
//    cout << value << endl;
//
//    return 0;
//}



















