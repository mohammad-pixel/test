#include<stdio.h>

#define SIZE 1000001
 
int main()
{
	unsigned int n, i, j, k;
	
	scanf("%u",&n);
	
	getchar();
	
	for(i=0; i<n; i++)
	{
		char A[SIZE], B[SIZE];
		
		flag=1;
		
		gets(A);
		
		gets(B);
		
		for(j=0, k=0; A[j]!='\0'; k++)
		
		{
			
			if(A[j]==B[k])
			
			{
				
				j++;
				
				continue;
			}
			
			else
			
			{
				
				if(B[k]==B[k-1])
				
				{
					
					continue;
				}
				
				else
				
				{
					
					flag=0;
					
					break;
				}
			}
		}
		
		for(k; B[k]!='\0'; k++)
		
		{
			
			if(B[k]!=B[k-1])
			
			{
				
				flag=0;
				
				break;
			}
		}
		
		if(flag)
		
		{
			
			printf("YES\n");
		}
		
		else
		
		{
			
			printf("NO\n");
		}	
	}
	
	
}
