#include "stdio.h"
#include "stdlib.h"
int main(void){
    FILE *fin,*ftp;
    char a[1000];
    char n;
    scanf("%c",&n);
    
    fin=fopen("123.txt","r");//����ԭ�ļ�123.txt
    ftp=fopen("tmp.txt","w");//д����ʱ�ļ�tmp.txt
    if(fin==NULL || ftp==NULL){
        printf("Open the file failure...\n");
        exit(0);
    }
    while(fgets(a,1000,fin))//��ԭ�ļ���ȡһ��
        if(a[0]!=n)//������Ҫɾ��������?
            fputs(a,ftp);//��������һ��д����ʱ�ļ�tmp.txt
    fclose(fin);
    fclose(ftp);
    remove("123.txt");//ɾ��ԭ�ļ�
    rename("tmp.txt","123.txt");//����ʱ�ļ�����Ϊԭ�ļ���
    return 0;
}
