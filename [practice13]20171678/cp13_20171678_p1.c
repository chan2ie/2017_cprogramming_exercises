#include <stdio.h>
#include <string.h>

enum Day{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

struct Calendar{
	int year, month, date;
	enum Day day;
	char *dayString;
};

struct Calendar c;

enum Day getDay(int y, int m, int d){
	enum Day currDate = (y + y / 4 - y / 100 + y/400 + (13 * m + 8) / 5 + d) % 7;

	return currDate;
}

char* getStringDay(enum Day currDate){
	switch(currDate){
		case 0 : return "Sunday"; 
		case 1 : return "Monday"; 
		case 2 : return "Tuesday"; 
		case 3 : return "Wednesday"; 
		case 4 : return "Thursday"; 
		case 5 : return "Friday"; 
		case 6 : return "Saterday"; 
	}
}


int main(){
	
	printf("What year?\n");
	scanf("%d",&c.year);
	printf("What month?\n");
	scanf("%d",&c.month);
	printf("What date?\n");
	scanf("%d",&c.date);

	c.dayString = getStringDay(getDay(c.year, c.month, c.date));

	printf("The day is %s\n",c.dayString);

	return 0;
}
