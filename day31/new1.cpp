///*
//	�����Ҵ���� ũ�⸦ �Է¹ް� ���Ҹ� �����Ͽ� ����Ͻÿ� -c���
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//    int size, i, num;
//    int* ps;  
//
//    printf("�޸� ũ�⸦ �Է��Ͻÿ�: ");
//    scanf("%d", &size);
//
//	ps = (int*)malloc(sizeof(int)*size);   //. �� ������ �ϳ��� int Ÿ�� ���� �޸𸮸� ������ �� �ֽ��ϴ�.
//    // �����Ҵ�
//    for (i = 0; i < size; i++) {
//        
//        scanf(" %d", &num);
//        *(ps+i) = num;  // �Է¹��� �� ����    ps[i] = num;
//       
//    }
//
//    // �� ����ϱ�
//    for (i = 0; i < size; i++) {
//        printf("%d\t", ps[i]);  // ����� ���� ���
//       
//    }
//    free(ps);  // �޸� ����
//    return 0;
//}
