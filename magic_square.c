#include <stdio.h>

int main() {
    // Magic square
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int a[n][n];
	int i,j;
    // Initialize to 0
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            a[i][j] = 0;

    // start by 1
    a[n/2][n-1] = 1;
    int k=2;
    int p=n/2, q=n-1;

    while (k<=n*n) 
	{
        // basic move
        p=p-1;
        q=q+1;

        // out of bounds check
        if(p==-1 && q==n)
        {
        	p=0;
        	q=n-2;
		}
        while(p<0) 
		p=n-1; 
        while(q==n) 
		dq=0;    

        // already occupied
        while (a[p][q] != 0) 
		{
            p=p+1;
            q=q-2; 
        }


        a[p][q] = k;
        k++;
    }

    
    printf("Magic Square of size %d:\n", n);
    for (i=0;i<n;i++) 
	{
    	for (j=0;j<n;j++) 
    	printf("%2d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
