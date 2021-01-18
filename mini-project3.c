#include <stdio.h>		//included header files
#include <stdlib.h>

#define MAXADDNUM 20		//maximum number of addresses

int main(int argc, char *argv[]) {		//main
	unsigned int n, m, v[MAXADDNUM];	//initialization of variables
	int count = 0;
	unsigned char offset[4], page[4], virAdd[MAXADDNUM][16];
	FILE *file = fopen("part1input.txt", "r");		//file stream opened
	
	printf("PROGRAM STARTING\n");		//program starting output

	if(file == NULL) {			//check for file existence
		printf("File Error. Exiting!");
		exit(1);
	}

	if(fgets(offset, sizeof(offset), file) != NULL)	//get the number of offset bits
		n = strtoul(offset, NULL, 10);
	if(fgets(page, sizeof(page), file) != NULL)		//get the number of page bits
		m = strtoul(page, NULL, 10);
	
	while(fgets(virAdd[count], (sizeof(virAdd[count]) + 2), file) != NULL) {	//get the virtual addresses
		v[count] = strtoul(virAdd[count], NULL, 2);
		count++;
	}

	for(int i = 0; i < count; i++) {		//for each address
		unsigned int p = v[i] >> n;			//extract page number
		unsigned int d = v[i] & ~(~0U << n);	//extract the offset

		// another way of getting the offset
		// unsigned int d = v[i] << (m + 16) >> (m + 16);

		printf("The virtual address v%d is in page number %d and offset %d\n", (i+1), p, d);	//output the page number and offset to console
	}
	fclose(file);		//close file stream
	printf("GOODBYE");	//program end message
	exit(0);	//exit program
}	//end main
