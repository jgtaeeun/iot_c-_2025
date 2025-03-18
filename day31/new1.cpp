///*
//	동적할당받을 크기를 입력받고 원소를 저장하여 출력하시오 -c언어
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//    int size, i, num;
//    int* ps;  
//
//    printf("메모리 크기를 입력하시오: ");
//    scanf("%d", &size);
//
//	ps = (int*)malloc(sizeof(int)*size);   //. 이 변수는 하나의 int 타입 동적 메모리만 저장할 수 있습니다.
//    // 동적할당
//    for (i = 0; i < size; i++) {
//        
//        scanf(" %d", &num);
//        *(ps+i) = num;  // 입력받은 값 저장    ps[i] = num;
//       
//    }
//
//    // 값 출력하기
//    for (i = 0; i < size; i++) {
//        printf("%d\t", ps[i]);  // 저장된 값을 출력
//       
//    }
//    free(ps);  // 메모리 해제
//    return 0;
//}
