#include <stdio.h>


int main()
{

	char x[7][5];
	char check[2];
	int countA = 4;
	int countB = 0;
	int countC = 4;
	
	setbuf(stdout, NULL);
	
		for(int c = 0 ; c < 7; c++)
		{
			for(int r = 0 ; r < 5; r++)
			{
				x[c][r] = '-';
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

		


		
		do
		{
		
			for(int k = 0; k < 30; k++)
			{
				printf("\n");
			}

			if(countA != 0 && countB == 0) 
			{
				if(x[0][countA] == '-')
				{
					x[0][4] = '0';
				}
				else
				{
					x[0][countA] = '-';
					countA--;
					x[0][countA] = '0';
				}
			}
			else if(countA == 0 && countB != 6) 
			{
				x[countB][0] = '-';
				countB++;
				x[countB][0] = '0';

			}
			else if(countB == 6 && countA != 6) 
			{
				x[countB][countA] = '-';
				countA++;
				x[countB][countA] = '0';
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
		while(check[0] != 'y');

}
