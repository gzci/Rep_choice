#include <stdio.h>
int main() {
        void T(int mat[][5], int n);
        int mat[5][5]={6,7,8,9,10,1,3,2,4,5,11,12,13,14,15,21,22,23,24,25,16,17,18,19,20};
        int i, j;
		printf("Please input 5*5 array:\n");
       // for (i = 0;i < 5;i++)
        //        for (j = 0;j < 5;j++)
         //               scanf("%d", &mat[i][j]);
        T(mat, 5);
		printf("Output:\nThe new array is:\n");
        for (i = 0;i < 5;i++) {
                for (j = 0;j < 5;j++)
                        printf("%4d", mat[i][j]);
                printf("\n");
        }
        return 0;
}
/* 矩阵处理函数 */
void T(int mat[][5], int n) {
        int i, j, temp;
        int *a, *b, *c, *d, *max;
        /* 设置4个最小元素以及最大元素指针的初始值 */
        a = &mat[0][0];
        b = &mat[0][0];
        c = &mat[0][0];
        d = &mat[0][0];
        max = &mat[0][0];
        for (i = 0;i < 5;i++) {
                for (j = 0;j < 5;j++) {
                        if (mat[i][j] < *a) {
                             //   d = c; c = b; b = a;
                                a = &mat[i][j];
                        } else if (mat[i][j] < *b) {
                              //  d = c; c = b;
                                b = &mat[i][j];
                        } else if (mat[i][j] < *c) {
                              //  d = c;
                                c = &mat[i][j];
                        } else if (mat[i][j] < *d) {
                                d = &mat[i][j];
                        }
                        if (mat[i][j] > *max)
                                max = &mat[i][j];
                }
        }
        /* 依次替换4个最小元素以及最大的元素 */
        temp = mat[0][0]; mat[0][0] = *a; *a = temp;
        temp = mat[0][4]; mat[0][4] = *b; *b = temp;
        temp = mat[4][0]; mat[4][0] = *c; *c = temp;
        temp = mat[4][4]; mat[4][4] = *d; *d = temp;
        temp = mat[2][2]; mat[2][2] = *max; *max = temp;
}
