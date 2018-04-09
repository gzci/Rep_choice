#include<stdio.h>
void avgStuScore(float scores[][11], int m, int n);
void avgCourseScore(float scores[][11], int m, int n);
void findHighestScore(float scores[][11], int m, int n);
float std(float scores[][11], int m, int n);
int main() {
	int i, j, m, n;
	float scores[101][11];
	printf("请输入学生的人数：");
	scanf("%d", &m);
	printf("请输入学生的科目：");
	scanf("%d", &n);
	//数据输入 
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {

			scanf("%f", &scores[i][j]);

		}
	}
	avgStuScore(scores, m, n);
	avgCourseScore(scores, m, n);

	for (i = 0; i < n + 1; i++) {
		for (j = 0; j < m + 1; j++) {
				printf("学生%d ",j+i);
			printf("%f  ", scores[i][j]);

		}
		printf("\n");
	}
	findHighestScore(scores, m, n);
	std(scores, m, n);
	return 0;

}
void avgStuScore(float scores[][11], int m, int n) {
	float sum = 0;
	int j, i;
	for (j = 0; j < m; j++) {
		sum = 0;

		for (i = 0; i < n; i++) {
			sum = sum + scores[i][j];

		}
		scores[n][j] = sum / n;
	}
}
void avgCourseScore(float scores[][11], int m, int n) {
	float sum;
	int j, i;
	for (j = 0; j < n; j++) {
		sum = 0;

		for (i = 0; i < m; i++) {
			sum = sum + scores[j][i];

		}
		scores[j][m] = sum / m;
	}
}

void findHighestScore(float scores[][11], int m, int n) {
	int j, i, k, x;
	int t = 0;
	for (j = 0; j < n; j++) {
		for (i = 0; i < m; i++) {
			if (scores[j][i] > t) {

				t = scores[j][i];
				k = i;
				x = j;
			}

		}

	}
	printf("学生：%d  课程：%d", x, k);
	printf("\n");

}

float std(float scores[][11], int m, int n) {

	int sum = 0;
	int i;

	float pingjunk, kechaf, sum1 = 0, pingjunx, sum2 = 0, xchaf;
	for (i = 0; i < n; i++) {
		sum = sum + scores[i][m];

	}
	pingjunk = sum / n;
	for (i = 0; i < n; i++) {
		sum1 = sum1 + (scores[i][m] - pingjunk) * (scores[i][m] - pingjunk);

	}
	kechaf = sum1;
	sum = 0;
	for (i = 0; i < m; i++) {
		sum = sum + scores[n][i];
	}
	pingjunx = sum / m;
	for (i = 0; i < n; i++) {
		sum2 = sum2 + (scores[n][i] - pingjunx) * (scores[n][i] - pingjunx);

	}
	xchaf = sum2;
	printf("学生平均分方差：%d,课程平均分方差：%d", xchaf, kechaf);
	printf("\n");

}
