#include <iostream>
using namespace std;
    int Max(int a, int b, int c)  
	{  
	    if(a>b&&a>c)  
	        return a;  
	    else if(b>a&&b>c)  
	        return b;  
	    else  
	        return c;   
	}
	 int MaxSubSum( int A[], int Left, int Right)  
	{  
	    int MaxLeftSum,MaxRightSum;  
	    int MaxLeftBorderSum,MaxRightBorderSum;  
	    int LeftBorderSum,RightBorderSum;  
	    int Center,i;  
	      
	    if(Left == Right)  
	    {  
	        if(A[Left] > 0)  
	            return A[Left];  
	        else  
	            return 0;  
	    }  
	    
	    Center = (Left + Right)/2;  
	    MaxLeftSum = MaxSubSum(A,Left,Center);  
	    MaxRightSum = MaxSubSum(A,Center+1,Right);  
	      
	    MaxLeftBorderSum = 0;  
	    LeftBorderSum = 0;  
	    for(i = Center;i >= Left;i--)  
	    {  
	        LeftBorderSum += A[i];  
	        if(LeftBorderSum > MaxLeftBorderSum)  
	            MaxLeftBorderSum = LeftBorderSum;  
	    }  
	      
	    MaxRightBorderSum = 0;  
	    RightBorderSum = 0;  
	    for(i = Center+1;i <= Right;i++)  
	    {  
	        RightBorderSum += A[i];  
	        if(RightBorderSum > MaxRightBorderSum)  
	            MaxRightBorderSum = RightBorderSum;  
	    }     
	      
	    return Max(MaxLeftSum,MaxRightSum,MaxLeftBorderSum + MaxRightBorderSum);  
	}   
	  



int main(void)
{
    int K,j=0;
    int a,max;
    int num[100000];
        
        scanf("%d", &K);
      
        for (a = 0; a < K; a++) {
            scanf("%d", &num[a]);
            if (num[a] < 0)
                j++;
        }
        if (j == K)
            printf("%d",num[0]);
        else {
           
         
            max = MaxSubSum(num,0,K);
         
            cout<<max; 
        }

}

