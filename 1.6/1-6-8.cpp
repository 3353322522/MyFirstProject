#include <stdio.h>
void main()
{
	int i,j,row,col,min;
	int a[3][4]={{1,2,3,4},{9,8,7,6},{-1,-2,0,5}};
	min=a[0][0];
	row=col=0;
	for(i=1;i<3;i++)
		for(j=1;j<4;j++)
			if(a[i][j-1]>a[i][j])
			{
				min=a[i][j];
			    row=i;
			    col=j;
			}
			printf("min=%d,row=%d,col=%d",min,row,col);
}
