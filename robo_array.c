#include <stdio.h>


int main()
{

	char x[7][5];
	char check[2];
	int countA = 0;
	int countB = 0;
	int countC = 4;
	int drehen = 0; 
	int richtung = 1; 

	setbuf(stdout, NULL);
	
		for(int c = 0 ; c < 7; c++)
		{
			for(int r = 0 ; r < 5; r++)
			{
				x[c][r] = '-';

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

			

			if(check[0] == 'd')
			{
				drehen = 1;
				
			}	
			if(check[0] != 'd')
			{
				drehen = 0;
			}

			
			if(drehen == 1)
			{
				if(richtung <= 4)
				{
					richtung++;
				}
				else
				{
					richtung = 1;
				}
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
				}

			}

			scanf("%s", &check);

		}
		while(check[0] == 'w' || check[0] == 'd' || check[0] == 'a' || check[0] == 's');

}
