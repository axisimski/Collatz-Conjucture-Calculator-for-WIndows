#include <iostream>

#include <iostream>

//A.sim
//August 9th 2017
//Colaz Sequence Generator

#include<stdio.h>
#include<math.h> 
#include<cstdio>
#include<fstream>
#include<iostream>

using namespace std;

void generateSequence()
{
		
unsigned long long int	 x=0;
unsigned long long int	 s=0;
unsigned long long int	 z;
int i=0;
	
	
	printf("Please enter a number between 1 and 1,000,000,000 to generate a sequence for;\n");
	scanf("%d",&z);

do	{
	if (z%2==0){
					
			z=z/2;		
		}
		
		else{	
				
			z=z*3;
			z++;
		}
		i++;
	
	 	printf("Step number; %d; %lli\n", i, z);	
	 	
			
	}while(z!=1);
	
	
}


int main(int argc, char** argv) {
	
		while(1){	
	
			generateSequence();			
		
	}
	return 0;
}
