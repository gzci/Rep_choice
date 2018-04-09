#include  <stdio.h>
#include<conio.h>
#include<iostream>
int  main()
{
        int  d[9][9]  ={0},x=0,y=0;//定义地图与坐标
        d[x][y]=1;//定义小人
  
        for(int  i  =  0;i<9;i++)//显示地图
        {
                for(int  k  =  0;k<9;k++)
                        printf("%d  ",d[i][k]);
                printf("\n");
        }
  
        while(char  c  =  getch())//阻塞方式获取键盘按下的值
        {
                switch(c)//判断按下的是哪个键并分别作处理
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
  
                system("cls");//清空<a class="baidu-highlight" href="https://www.baidu.com/s  wd=%E6%8E%A7%E5%88%B6%E5%8F%B0&tn=44039180_cpr&fenlei=mv6quAkxTZn0IZRqIHckPjm4nH00T1d9PHc4nAmduj--P1KhnW630ZwV5Hcvrjm3rH6sPfKWUMw85HfYnjn4nH6sgvPsT6KdThsqpZwYTjCEQLGCpyw9Uz4Bmy-bIi4WUvYETgN-TLwGUv3EPHmznjfzrHD1nHbLrHczrj0Y" target="_blank">控制台</a>输出
  
                for(int  i  =  0;i<9;i++)//更新地图显示
                {
                        for(int  k  =  0;k<9;k++)
                                printf("%d  ",d[i][k]);
                        printf("\n");
                }
        }
}
