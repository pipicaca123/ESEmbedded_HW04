#include "blink.h"

int main(void)
{
	while(1){
		for(int i=0;i<100000;i++)
			;
		if(input_pin())
			blink(LED_BLUE);
	}
	
}
