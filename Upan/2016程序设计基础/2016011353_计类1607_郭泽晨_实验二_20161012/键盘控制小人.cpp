#include  <stdio.h>
#include<conio.h>
#include<iostream>
int  main()
{
        int  d[9][9]  ={0},x=0,y=0;//�����ͼ������
        d[x][y]=1;//����С��
  
        for(int  i  =  0;i<9;i++)//��ʾ��ͼ
        {
                for(int  k  =  0;k<9;k++)
                        printf("%d  ",d[i][k]);
                printf("\n");
        }
  
        while(char  c  =  getch())//������ʽ��ȡ���̰��µ�ֵ
        {
                switch(c)//�жϰ��µ����ĸ������ֱ�������
                {
                        case  'w':
                                if(x-1>=0  &&  x-1<9)
                                {
                                        d[x][y]=0;
                                        d[--x][y]=1;
                                }
                                break;
                        case  'a':
                                if(y-1>=0  &&  y-1<9)
                                {
                                        d[x][y]=0;
                                        d[x][--y]=1;
                                }
                                break;
                        case  's':
                                if(x+1>=0  &&  x+1<9)
                                {
                                        d[x][y]=0;
                                        d[++x][y]=1;
                                }
                                break;
                        case  'd':
                                if(y+1>=0&&y+1<9)
                                {
                                        d[x][y]=0;
                                        d[x][++y]=1;
                                }
                                break;
                }
  
                system("cls");//���<a class="baidu-highlight" href="https://www.baidu.com/s  wd=%E6%8E%A7%E5%88%B6%E5%8F%B0&tn=44039180_cpr&fenlei=mv6quAkxTZn0IZRqIHckPjm4nH00T1d9PHc4nAmduj--P1KhnW630ZwV5Hcvrjm3rH6sPfKWUMw85HfYnjn4nH6sgvPsT6KdThsqpZwYTjCEQLGCpyw9Uz4Bmy-bIi4WUvYETgN-TLwGUv3EPHmznjfzrHD1nHbLrHczrj0Y" target="_blank">����̨</a>���
  
                for(int  i  =  0;i<9;i++)//���µ�ͼ��ʾ
                {
                        for(int  k  =  0;k<9;k++)
                                printf("%d  ",d[i][k]);
                        printf("\n");
                }
        }
}
