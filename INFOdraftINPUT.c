#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include<time.h> 
void delay(int number_of_seconds) 
{ 
	// Converting time into milli_seconds 
	int milli_seconds = 100 * number_of_seconds; 

	// Storing start time 
	clock_t start_time = clock(); 

	// looping till required time is not achieved 
	while (clock() < start_time + milli_seconds) 
		; 
} 

int main()
{
HANDLE hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
system("CLS");
delay(1);
char name[20];
char character;



//Print NAME
//First line
SetConsoleTextAttribute(hConsole, 14);
printf("           @@    @   @@@   @@@   @@@  @@@@    @@@@@@            \n");
delay(1);
//Second line
SetConsoleTextAttribute(hConsole, 14);
printf("           @ @   @  @   @  @  @ @  @  @       @@   @@           \n");
delay(1);
//Third line
SetConsoleTextAttribute(hConsole, 14);
printf("           @  @  @  @   @  @   @   @  @@@@         @@           \n");
delay(1);
//Forth line
SetConsoleTextAttribute(hConsole, 14);
printf("           @   @ @  @@@@@  @       @  @            @@           \n");
delay(1);
//Fifth line
SetConsoleTextAttribute(hConsole, 14);
printf("           @    @@  @   @  @       @  @            @@           \n");
delay(1);
//Sixth line
SetConsoleTextAttribute(hConsole, 14);
printf("           @    @@  @   @  @       @  @@@@       @@             \n");
delay(1);
//Seventh line
printf("                                                 @@             \n");
delay(1);
//Eighth line
SetConsoleTextAttribute(hConsole, 15);
printf("          +++++++++++++++++++++++++++++++++                     \n");
delay(1);
//Nineth line
SetConsoleTextAttribute(hConsole, 14);
printf("                                                 @@             \n");
delay(1);
printf("          ---> ");
delay(1);
scanf("%s", &name[0]);
printf("\n");

//Print CHAR
//First line
SetConsoleTextAttribute(hConsole, 3);
printf("           @@@@@@  @   @   @@@    @@@@@      @@@@@@            \n");
delay(1);
//Second line
SetConsoleTextAttribute(hConsole, 3);
printf("           @       @   @  @   @   @   @      @@   @@           \n");
delay(1);
//Third line
SetConsoleTextAttribute(hConsole, 3);
printf("           @       @   @  @   @   @   @           @@           \n");
delay(1);
//Forth line
SetConsoleTextAttribute(hConsole, 3);
printf("           @       @@@@@  @@@@@   @@@@            @@           \n");
delay(1);
//Fifth line
SetConsoleTextAttribute(hConsole, 3);
printf("           @       @   @  @   @   @   @           @@           \n");
delay(1);
//Sixth line
SetConsoleTextAttribute(hConsole, 3);
printf("           @@@@@@  @   @  @   @   @    @        @@             \n");
delay(1);
//Seventh line
printf("                                                @@             \n");
delay(1);
//Eighth line
SetConsoleTextAttribute(hConsole, 15);
printf("          +++++++++++++++++++++++++++++++++                     \n");
delay(1);
//Nineth line
SetConsoleTextAttribute(hConsole, 3);
printf("                                                @@             \n");
delay(1);
printf("          ---> ");
delay(1);
scanf("%s", &character);
return 0;
}

