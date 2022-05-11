#include <stdio.h>

void checkForWindow();

char check[2];
int countA = 0;
int fenster;

int main()
{

	char x[7][5];
	//char check[2];
	//int countA = 0;
	int countB = 0;
	//int fenster= 0; 
	int stuhl= 0;

	setbuf(stdout, NULL);
	
		for(int c = 0 ; c < 7; c++)
		{
			for(int r = 0 ; r < 5; r++)
			{
				x[c][r] = '-';

				if(r == 0 && c == 0) 
				{
					x[c][r] = '0'; 
				}


				if(c >= 1 && c <=5)
				{
					if(r >= 1 && r <= 3)
					{
						x[c][r] = '=';
					}
				}
			}
		}
	


		for(int c = 0 ; c < 7; c++)
		{
			for(int r = 0 ; r < 5; r++)
			{
				
				printf("%c" ,x[c][r]);
				
				if(r == 4)
				{
					printf("\n");
				}

				if(c == 3 && r == 4)
				{
					x[3][4] = '8';
				}

			}

		}

		


		
		do
		{
		
			for(int k = 0; k < 30; k++)
			{
				printf("\n");
			}

			
			


			if(check[0] == 'd' )
			{
				if(countB == 0 || countB == 6) 
				{
					if(countA != 4) 
					{	
						x[countB][countA] = '-';
						countA++;
						x[countB][countA] = '0';
					}
				}
			}
			else if(check[0] == 's') 
			{
				if(countA == 0 || countA == 4) 
				{
					if(countB != 6)
					{
						x[countB][countA] = '-';
						countB++;
						x[countB][countA] = '0';
					}
					

					int countExtra = countB + 1; 
					if(x[countExtra][countA] == '8')
					{
						printf("Vor dir steht ein Stuhl! Laufe weiter um dich hinzusetzen.\n");
						printf("Du kannst mit der Taste 'j' auch über diesen hinweg springen.\n");
						stuhl = 1; 

					}

					
					if(x[3][4] == '-')
					{
						x[3][4] = '8';
					}


					
				}
			}
			else if(check[0] == 'a')
			{
				if(countB == 0 || countB == 6) 
				{
					if(countA != 0) 
					{
						x[countB][countA] = '-';
						countA--; 
						x[countB][countA] = '0'; 
					}
				}

			}
			else if(check[0] == 'w')
			{	
				if(countA == 0 || countA == 4) 
				{
					if(countB != 0) 
					{
					x[countB][countA] = '-';
					countB--; 
					x[countB][countA] = '0'; 
					}

					
					int countExtra = countB - 1; 
					if(x[countExtra][countA] == '8')
					{
						printf("Vor dir steht ein Stuhl! Laufe weiter um dich hinzusetzen.\n");
						printf("Du kannst mit der Taste 'j' auch über diesen hinweg springen.\n");
						stuhl = 2; 
					}

					
					if(x[3][4] == '-')
					{
						x[3][4] = '8';
					}
				}	
			}
			else if(check[0] == 'j')
			{
				if(stuhl == 1)
				{
					x[countB][countA] = '-'; 
					countB = countB + 2;
					x[countB][countA] = '0'; 
				}
				else if(stuhl == 2) 
				{
					x[countB][countA] = '-';
					countB = countB - 2;
					x[countB][countA] = '0';
				}

			}
			
/*			if(countA == 0 && check[0] == 'a')
			{
				fenster++;
				if(fenster == 1) 
				{
				printf("Achtung!!! Auf dieser Seite sind offene Fenster.\n");
				}
				else if(fenster == 2)
				{
					printf("Du bist leider aus dem Fenster gefallen. Schön blöd.\n");
					break;
				}
			}

*/

			checkForWindow();

			for(int c = 0 ; c < 7; c++)
			{
				for(int r = 0 ; r < 5; r++)
				{	
				
					printf("%c" ,x[c][r]);
				
					if(r == 4)
					{
						printf("\n");
					}
				}

			}

			scanf("%s", check);

		}
		while(check[0] == 'w' || check[0] == 'd' || check[0] == 'a' || check[0] == 's' || check[0] == 'j');

}
