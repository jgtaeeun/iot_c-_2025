//#include <stdio.h>
//
//int main(void) {
//
//	int  i, j;
//	int ary[100][100] , ary2[100][100];
//	int row, col;
//
//	// row, col 입력
//	scanf_s(" %d%d", &row, &col);
//
//	// 요소 입력
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++) {
//			scanf_s(" %d", &ary[i][j]);
//		}
//	}
//
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++) {
//			scanf_s(" %d", &ary2[i][j]);
//		}
//	}
//
//	// 합 출력
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++) {
//			printf("%d\t", ary[i][j] +ary2[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}