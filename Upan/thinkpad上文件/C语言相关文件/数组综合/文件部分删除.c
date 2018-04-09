#include "stdio.h"
#include "stdlib.h"
int main(void){
    FILE *fin,*ftp;
    char a[1000];
    char n;
    scanf("%c",&n);
    
    fin=fopen("123.txt","r");//读打开原文件123.txt
    ftp=fopen("tmp.txt","w");//写打开临时文件tmp.txt
    if(fin==NULL || ftp==NULL){
        printf("Open the file failure...\n");
        exit(0);
    }
    while(fgets(a,1000,fin))//从原文件读取一行
        if(a[0]!=n)//检验是要删除的行吗?
            fputs(a,ftp);//不是则将这一行写入临时文件tmp.txt
    fclose(fin);
    fclose(ftp);
    remove("123.txt");//删除原文件
    rename("tmp.txt","123.txt");//将临时文件名改为原文件名
    return 0;
}
