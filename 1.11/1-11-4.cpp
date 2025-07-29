#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *in,*out;
	char ch,infile[10],outfile[10];
	printf("Please enter the infile name:\n");
	scanf("%s",infile);
	printf("Please enter the out file name:\n");
	scanf("%s",outfile);
	if((in=fopen (infile,"r"))==NULL)
	{
		printf("Cannot open infile.\n");
		exit(0);

	}
	while(!feof(in))
		fputc(fgetc(in),out);
	fclose(in);
	fclose(out);
}