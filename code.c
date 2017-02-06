#include <stdio.h>
#include <string.h>


void permutation (char []);							//Permutation function. Argument is a string


char copy[20][20];									// this 2d-strings makes a copy of the argument string in each reccursion.This is because C dosen't support passing strings by values.

char out[20];										//The output string. Will be printed each time the permutation process is complete.


int k=-1,num=0;										// k is the place holder for output string. num is serial number.

int main()
{
	char a[20];
	
	printf ("Enter the string :\n");
	scanf ("%[^\n]%*c",a);
	printf("\n\n");
	
	permutation (a);
	
	return 0;
}




void permutation (char x[])
{
	++k;
	int i,j,m;										// i,j are for loops.
	m=k;											// place holder is assigned to m.This is because the value of k changes in each reccursion.
		
	if (x[0]=='\0'){ 
		++num;
		printf ("%d)\t%s\n",num,out);				//printing of the output string.
		return;
		
	}
		
		
	else{
		
		for (i=0;x[i]!='\0';++i){
			out[m]=x[i];
			strcpy (copy[m],x);
													//shorten copy[m]
			for (j=i;copy[m][j]!='\0';j++){
				copy[m][j]=copy[m][j+1];
			}
					
			permutation (copy[m]);					//reccursion , passing copy[m] as argument.
			--k;
			
		}
		
		return;	
			
	}
	
}






