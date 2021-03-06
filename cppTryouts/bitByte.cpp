#include <iostream>
#include <stdio.h>
#include <bitset>

typedef  unsigned char byte;
/* Print n as a binary number */
inline void printBits(unsigned int num)
{
   
    for(int bit=0;bit<(sizeof(unsigned int) * 8); bit++)
    {
        printf("%i ", num & 0x01);
        num = num >> 1;
    }
    std::cout << "\n";
}

/* Print n as a binary number */
inline void printBits(unsigned char n)
{
   
        unsigned char i;
        i = 1<<(sizeof(n) * 8 - 1);

        while (i > 0) {
                if (n & i)
                        printf("1 ");
                else
                        printf("0 ");
                i >>= 1;
        }
printf("\n");
}


unsigned char reverse_byte (byte num)
{
	byte bit;
	byte output;
	
   for(int count=1;count<=8;count++)
	{ 
		bit = num & 0x01;
		num = num>>1;
		output = output<<1; 
		if(bit==1) 
		output = output+1;
	}


    return output;
}

void printbitfloat(float f){
    float *fp = &f;
    int i = *(reinterpret_cast<int*>(fp));
    std::cout << std::bitset<32>(i)<<"\t\t"<<f<<"\n";
}
