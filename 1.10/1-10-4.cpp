#include<stdio.h>

typedef struct 
{ 
	char name[50]; int age; 
} Person;

int main() 
{ 
	Person people[] = { {"li-ming", 18}, {"wang-hua", 19}, {"zhang-ping", 20} };

	int max_age = -1; 
	int max_index = 0; 
	for (int i = 0; i < 3; i++) 
	{
		if (people[i].age > max_age) 
		{
			max_age = people[i].age;
			max_index = i;
		}
	}

	printf("%s,%d\n", people[max_index].name, people[max_index].age);

	return 0;
}