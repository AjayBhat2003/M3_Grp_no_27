#include "MyStm32f407xx.h"
#include<stdio.h>
#define MAX 5

#define BTN_PRESSED ENABLE

void windowstatus();
void alarmststus();
void batteryinfo();
void doorstatus();

void delay(void)
{
	for(unsigned long i=0;i<1000000000;i++);
}

void delay_1(void)
{
	for(unsigned long k=0;k<100000000;k++);
}


void windowstatus()
{
	while(1)
		{
			if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
			{
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
				//printf("LOCK\n");
				delay();
			}
		}
}

void batteryinfo()
{
	while(1)
	{
		if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
		{
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
				delay_1();
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
				delay_1();
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
				delay_1();
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
				//printf("print alram\n");
				delay();
		}
	}
}

void alarmstatus()
{
	while(1)
		{
			if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
			{
					
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
				delay();
			}
		}
}

void doorstatus()
{
	while(1)
		{
			if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
			{
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
					delay_1();
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
					delay_1();
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
					delay_1();
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
					//printf("print alram\n");
					delay();
			}
		}
}

int main(void)
{
	GPIO_Handle_t GpioLed, GPIOBtn;															// handle
	GpioLed.pGPIOx = GPIOD;                    										        // port used

	// LEDs Configuration
	/*pin configuration*/
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;

	/* clock  */
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);


	/*pin configuration*/
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;

	/* clock  */
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

	/*pin configuration*/
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;

	/* clock  */
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

	/*pin configuration*/
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;

	/* clock  */
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);
	// LEDs Configured


	GPIOBtn.pGPIOx = GPIOA;
	GPIOBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
	GPIOBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GPIOBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GPIOBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_Init(&GPIOBtn);


	for(int button=0;button<5;button++)
	{
	switch(button)
	{
	case 1: windowstatus();
		break;
	case 2: alarmstatus();
		break;
	case 3: batteryinfo();
		break;
	case 4: doorstatus();
		break;
	default:
		//printf("invalid choice\n");
		break;
	}
	}
}