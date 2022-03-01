#include <stdio.h>
#include <stdlib.h>
#include "sha256.h"
#include <string.h>
#include "nproc.h"

typedef unsigned char byte;

//byte ddd2[66] = "6e340b9cffb37a989ca544e6bb780a2c78901d3fb33738768511a30617afa01d"; // 1

int tryone()
{
    //printf("Linux \n");
    SHA256_CTX shactx;
       int p =1;
		    byte * testdado = (byte *) malloc(p);
        for (int d =0; d < p; d++)
            testdado[d] = 0;

        byte ddd1[66];
        SHA256_Init(&shactx);
        SHA256_Update(&shactx, testdado, p);
        SHA256_Final(ddd1, &shactx);

		char Gwiji[66];
        sprintf(Gwiji, "%02x%02x%02x%02x%02x%02x%02x%02x%02x"
                        "%02x%02x%02x%02x%02x%02x%02x%02x%02x"
                        "%02x%02x%02x%02x%02x%02x%02x%02x%02x"
                        "%02x%02x%02x%02x%02x\n", 
                        ddd1[0],ddd1[1],ddd1[2],ddd1[3],ddd1[4], 
                        ddd1[5],ddd1[6],ddd1[7],ddd1[8],ddd1[9],ddd1[10],
                        ddd1[11],ddd1[12],ddd1[13],ddd1[14],ddd1[15], 
                        ddd1[16],ddd1[17],ddd1[18],ddd1[19],ddd1[20],
                        ddd1[21],ddd1[22],ddd1[23],ddd1[24],ddd1[25],
                        ddd1[26],ddd1[27],ddd1[28],ddd1[29],ddd1[30],
                        ddd1[31]);

		if (strncmp(Gwiji, ddd2, 64) == 0) 
		    return p;
}

int main()
{
    int jaribu = tryone();

    printf("This is the thing %d\n", jaribu);
    return 0;
}





