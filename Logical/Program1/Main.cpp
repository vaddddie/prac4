
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

// amount of memory to be allocated for heap storage must be specified for every ANSI C++ program with the bur_heap_size variable
unsigned long bur_heap_size = 0xFFFF; 

void _INIT ProgramInit(void)
{
	led1 = 0;
	led2 = 0;
	led3 = 0;
	led4 = 0;
	state = 0;
	i=0;

}

void _CYCLIC ProgramCyclic(void)
{
	state = butts[4];
	if (state==0){
		led1=butts[0];
		led2=butts[1];
		led3=butts[2];
		led4=butts[3];
	}
	else{
		led1 = ((i%2)==0);
		led2 = ((i%3)==0);
		led3 = ((i%4)==0);
		led4 = ((i%5)==0);
	}
	i++;

}

void _EXIT ProgramExit(void)
{
	// Insert code here 

}
