#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"




void main(void){
	
	int n [5];
	printf("input  integers :");
	scanf(" %d %d %d %d %d",n,n+1,n+2,n+3,n+4);
	
//	int i=0;
//	for(i=0;i<5;i++)
//		printf(" %d ",n[i]);

 
	
	insertDataToTail(n[0]);
		insertDataToTail(n[1]);
			insertDataToTail(n[2]);
				insertDataToTail(n[3]);
					insertDataToTail(n[4]);
					
					print_list();
					
					print_node(2);
					
					return 0;
	}
