///*
//	�����Ҵ���� ũ�⸦ �Է¹ް� ���Ҹ� �����Ͽ� ����Ͻÿ� -c���
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//    int size, i, num;
//    int* ps[100];  // ������ �迭�� ����Ͽ� �� ������ ���� �޸� �Ҵ� ,�迭�� �� ���Ұ� ������ �����̹Ƿ� ���� ���� int Ÿ�� ���� �޸𸮸� ������ �� �ֽ��ϴ�.
//
//    printf("�޸� ũ�⸦ �Է��Ͻÿ�: ");
//    scanf("%d", &size);
//
//    // �����Ҵ�
//    for (i = 0; i < size; i++) {
//        ps[i] = (int*)malloc(sizeof(int));  // ���� �޸� �Ҵ�
//        if (ps[i] == NULL) {  // �޸� �Ҵ� ���� üũ
//            printf("�޸� �Ҵ� ����\n");
//            return 1;  // ���α׷� ����
//        }
//        scanf(" %d", &num);
//        *(ps[i]) = num;  // �Է¹��� �� ����
//    }
//
//    // �� ����ϱ�
//    for (i = 0; i < size; i++) {
//        printf("%d\t", *(ps[i]));  // ����� ���� ���
//        free(ps[i]);  // �޸� ����
//    }
//
//    return 0;
//}
