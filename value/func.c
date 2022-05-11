#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//extern int countA;

void checkForWindow(int fenster, char check, int countA)
{

			if(countA == 0 && check == 'a')
			{
				fenster++;

				if(fenster == 1) 
				{
					printf("Achtung!!! Auf dieser Seite sind offene Fenster.\n");
				}
				else if(fenster == 2)
				{
					printf("Du bist leider aus dem Fenster gefallen. Schön blöd.\n");
					exit(1);	
				}
			}
}


