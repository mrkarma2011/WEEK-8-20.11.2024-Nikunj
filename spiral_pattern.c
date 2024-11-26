#include<stdio.h>
int main(){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	
	int a[n][n];
	int k=1;
	int i,j,r,q,p;
	for(i=0; i<(n+1)/2;i++)
	{
		for(j=i;j<=n-i-1;j++ )//left to right
		a[i][j]=k++;
		
		for(p=i+1; p<=n-1-i; p++) // top to bottom
		a[p][n-1-i]=k++;
		
		for(q=n-i-2; q>=i;q--) // right to left
		a[n-1-i][q]=k++;
		
		for(r=n-i-2; r>=i+1; r--) // bottom to top
		a[r][i]= k++;
	}
	
	printf("Spiral pattern: \n");
	for(i=0; i<n;i++)
	{
	for(j=0; j<n; j++)
	printf("%2d  ", a[i][j]);
	
	printf("\n");}
}
