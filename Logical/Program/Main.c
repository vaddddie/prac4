
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	speed = 100;
	EVIRD.ENABLE=1;

}

void _CYCLIC ProgramCyclic(void)
{
	speed = SPD;
	DRIVE(&EVIRD);

}

void _EXIT ProgramExit(void)
{

}
