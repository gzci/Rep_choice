#include<stdio.h>
#include "stdlib.h"

struct chengji {
	int yuwen;
	int shuxue;
	int yinyu;
	int cyuyan;
	int tiyu;
};
typedef struct student {
	int xuehao;
	char name[20];
	char sex;
	int clas;
	struct chengji wukefenshu;
} stu;
void duqu();
void luru(int n);
void del(char n);
void edit();
int main() {

//	luru(2);
//	duqu();

//	edit();
//	del('0');

	return 0;

}
void duqu() {
	FILE *p;
	char ch;
	p = fopen("jilu.txt", "r");
	if (p == NULL) {
		printf("Open the file failure...\n");
		exit(0);
	}
	while (!feof(p)) {
		ch = fgetc(p);
		putchar(ch);

	}
	fclose(p);

}
void luru(int n) {
	FILE *p;
	int i;
	stu s[20];
	p = fopen("jilu.txt", "w");
	printf("������ѧ��������Ϣ��˳����ѧ�ţ��������Ա𣬰༶");
	for (i = 0; i < n; i++) {
		scanf("%d", &s[i].xuehao);
		scanf("%s", &s[i].name);
		fflush(stdin);

		scanf("%c", &s[i].sex);
		scanf("%d", &s[i].clas);
		printf("������ѧ�������ųɼ���˳�������ģ���ѧ��Ӣ�C���ԣ��������ÿո�ָ�");

		scanf("%d", &s[i].wukefenshu.yuwen);
		scanf("%d", &s[i].wukefenshu.shuxue);
		scanf("%d", &s[i].wukefenshu.yinyu);
		scanf("%d", &s[i].wukefenshu.cyuyan);
		scanf("%d", &s[i].wukefenshu.tiyu);

	}
	for (i = 0; i < n; i++) {
		fprintf(p, "%dѧ�ţ�%d ������%s �Ա�%c �༶��%d ���ģ�%d ��ѧ��%d Ӣ�%d C���ԣ�%d ������%d ",
				i, s[i].xuehao, s[i].name, s[i].sex, s[i].clas,
				s[i].wukefenshu.yuwen, s[i].wukefenshu.shuxue,
				s[i].wukefenshu.yinyu, s[i].wukefenshu.cyuyan,
				s[i].wukefenshu.tiyu);
		fprintf(p, "\n");
	}
}
void del(char n) {
	FILE *fin, *ftp;
	char a[1000];

	fin = fopen("jilu.txt", "r");
	ftp = fopen("tmp.txt", "w");
	if (fin == NULL || ftp == NULL) {
		printf("Open the file failure...\n");
		exit(0);
	}
	while (fgets(a, 1000, fin))
		if (a[0] != n)
			fputs(a, ftp);
	fclose(fin);
	fclose(ftp);
	remove("jilu.txt");
	rename("tmp.txt", "jilu.txt");

}
void edit() {
	FILE *fin, *ftp;
	char a[1000];
	char n;
	stu s1;
	fin = fopen("jilu.txt", "r");
	ftp = fopen("tmp.txt", "w");
	if (fin == NULL || ftp == NULL) {
		printf("Open the file failure...\n");
		exit(0);
	}
	printf("�������޸ĵ�ѧ�ţ�");
	fflush(stdin);

	scanf("%c", &n);
	printf("������ѧ��������Ϣ��˳����ѧ�ţ��������Ա𣬰༶");

	scanf("%d", &s1.xuehao);
	scanf("%s", &s1.name);
	fflush(stdin);

	scanf("%c", &s1.sex);
	scanf("%d", &s1.clas);
	printf("������ѧ�������ųɼ���˳�������ģ���ѧ��Ӣ�C���ԣ��������ÿո�ָ�");

	scanf("%d", &s1.wukefenshu.yuwen);
	scanf("%d", &s1.wukefenshu.shuxue);
	scanf("%d", &s1.wukefenshu.yinyu);
	scanf("%d", &s1.wukefenshu.cyuyan);
	scanf("%d", &s1.wukefenshu.tiyu);

	while (fgets(a, 1000, fin))

		if (a[0] == n) {
			fprintf(ftp,
					"%cѧ�ţ�%d ������%s �Ա�%c �༶��%d ���ģ�%d ��ѧ��%d Ӣ�%d C���ԣ�%d ������%d ",
					n, s1.xuehao, s1.name, s1.sex, s1.clas, s1.wukefenshu.yuwen,
					s1.wukefenshu.shuxue, s1.wukefenshu.yinyu,
					s1.wukefenshu.cyuyan, s1.wukefenshu.tiyu);
			fprintf(ftp, "\n");
		} else
			fputs(a, ftp);

	fclose(fin);
	fclose(ftp);
    remove("jilu.txt");
    rename("tmp.txt","jilu.txt");
}
