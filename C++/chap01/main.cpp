#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main(){
//    int Num1, Num2; // 변수 선언
//    int Sum = 0; // 변수 선언 및 초기화
//    int i;
//
//    printf("2개의 정수 입력: "); // 출력
//    scanf("%d %d", &Num1, &Num2); // 입력
//
//    for(i = Num1; i <= Num2; i++)
//        Sum += i;
//
//    printf("%d부터 %d까지의 합 : %d\n", Num1, Num2, Sum);
//    return 0;
//}

//int main(){
//    int Ary[5][5];
//    int i, j;
//
//    for (i = 0; i < 5; i++) {
//        for (j = 0; j < 5; j++) {
//            if (i >= j)
//                Ary[i][j] = i + 1;
//            else
//                Ary[i][j] = 0;
//        }
//    }
//
//    for (i = 0; i < 5; i++) {
//        for (j = 0; j < 5; j++) {
//            printf("%d ", Ary[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main(){
//    int num = 5;
//    printf("변수의 주소 : %d", &num);
//
//    return 0;
//}

//int main(){
//    int num;
//    int *pNum = &num;
//    // pNum과 &num이 같다.
//    printf("%d\n", &num);
//    printf("%d\n", pNum);
//
//    // num과 *pNum이 같다.
//    printf("%d\n", num);
//    printf("%d\n", *pNum);
//
//    *pNum = 5;
//    printf("%d\n", num);
//    printf("%d", *pNum);
//
//    return 0;
//}

//int main(){
//    int i, ary[10], *p;
//
//    srand((unsigned) time(NULL));
//
//    for (i = 0; i < 10; i++)
//        ary[i] = rand();
//
//    p = (int *)malloc(sizeof(int) * 10);
//
//    for(i = 0; i < 10; i++)
//        p[i] = ary[i];
//    printf("index\tary\tp\n");
//    for(i=0;i<10;i++)
//        printf("%d\t%d\t%d\n", i, ary[i], p[i]);
//
//    free(p);
//    return 0;
//}

//int main(){
//    int var1 = 1;
//    int var2 = 2;
//
//    const int *p1; // num의 상수화
//    int * const p2 = &var1; // p2의 상수화
//
//    // *p2 = 1이되고 p2가 var1의 주소값이 된다.
//
//    // p1에 var1의 주소값 대입
//    p1 = &var1;
//    // p1에 var2의 주소값 대입
//    p1 = &var2;
//
//    //*p1 = 5; //포인터를 통해 값 변경 불가
//    var2 = 4;
//
//    *p2 = 3;
//    //p2 = &var2; //다른 변수로 변경 불가
//
//    printf("var1 : %d\n", var1);
//    printf("var2 : %d\n", var2);
//
//    return 0;
//}

//struct Point{
//    int x, y;
//};
//
//struct Point Sum(struct Point P1, struct Point *P2){
//    struct Point Po;
//    Po.x = P1.x + P2->x;
//    Po.y = P1.y + P2->y;
//
//    return Po;
//}
//
//int main(){
//    struct Point A = { 1, 2 };
//    struct Point B = { 3, 4 };
//    struct Point C;
//    C = Sum(A, &B);
//
//    printf("%d %d\n", C.x, C.y);
//    return 0;
//}

struct Node {
    int data;
    struct Node *next;
};

int main(){
    struct Node *pStart = NULL;
    struct Node *pEnd = NULL;
    struct Node *Current;

    for (int i = 1; i <= 5; i++){
        Current = (struct Node *)malloc(sizeof(struct Node));
        Current->data = i * i * 10;
        Current->next = NULL;

        if (pStart == NULL){
            pStart = pEnd = Current;
        }
        else {
            pEnd->next = Current;
            pEnd = Current;
        }
        printf("%d ", i);
        printf("%d ", pStart);
        printf("(%d, %d) / ", pStart->data, pStart->next);
        printf("%d ", pEnd);
        printf("(%d, %d) / ", pEnd->data, pEnd->next);
        printf("%d ", Current);
        printf("(%d, %d)\n", Current->data, Current->next);
    }

//    while(pStart != NULL){
//        printf("%d\n", pStart->data);
//        pStart = pStart->next;
//    }
    return 0;
}

























