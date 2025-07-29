#include<stdio.h>
enum Season
{
	spring,summer=100,fall=96,winter
};
typedef enum
{
	Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,sunday
}Weekday;
void main()
{
	int x;
	Season mySeason;
	printf("%d\n",spring);
	printf("%d,%c\n",summer,summer);
	printf("%d\n",fall+winter);
	mySeason=winter;
	if(mySeason==winter)
		printf("mySeason is winter.\n");
	x=100;
	if(x==summer)
		printf("x is equal to summer.\n");
	Weekday today=Saturday;
	Weekday tomorrow;
	tomorrow=(Weekday)(today+1);
	printf("%d\n",tomorrow);
}