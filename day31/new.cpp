///*
//	동적할당받을 크기를 입력받고 원소를 저장하여 출력하시오 -c언어
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//    int size, i, num;
//    int* ps[100];  // 포인터 배열을 사용하여 각 원소의 동적 메모리 할당 ,배열의 각 원소가 포인터 변수이므로 여러 개의 int 타입 동적 메모리를 저장할 수 있습니다.
//
//    printf("메모리 크기를 입력하시오: ");
//    scanf("%d", &size);
//
//    // 동적할당
//    for (i = 0; i < size; i++) {
//        ps[i] = (int*)malloc(sizeof(int));  // 동적 메모리 할당
//        if (ps[i] == NULL) {  // 메모리 할당 실패 체크
//            printf("메모리 할당 실패\n");
//            return 1;  // 프로그램 종료
//        }
//        scanf(" %d", &num);
//        *(ps[i]) = num;  // 입력받은 값 저장
//    }
//
//    // 값 출력하기
//    for (i = 0; i < size; i++) {
//        printf("%d\t", *(ps[i]));  // 저장된 값을 출력
//        free(ps[i]);  // 메모리 해제
//    }
//
//    return 0;
//}
