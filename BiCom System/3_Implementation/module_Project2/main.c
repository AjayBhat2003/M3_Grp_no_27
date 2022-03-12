#include "MyStm32f407xx.h"
#include <stdint.h>

#define BTN_PRESSED ENABLE

void windowstatus(void);
void alarmstatus(void);
void batterystatus(void);
void doorstatus(void);
void case1(void);
void case2(void);
void case3(void);
void case4(void);

void delay(void)
{
	for(uint32_t i=0; i<10000000; i++);
}

int main(void)
{

	GPIO_Handle_t GpioLed, GPIOBtn; 							//Initialising variables for led and blue switch

	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12 ;	//Green Led
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

 	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;		//Orange Led
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;		//Red Led
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;		//Blue Led
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);
	
	GPIOBtn.pGPIOx = GPIOA;
    GPIOBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
	GPIOBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GPIOBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GPIOBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_Init(&GPIOBtn);

	while(1)
	{
		case1();				//encryption for window function

		case2();				//encryption for alarm function

		case3();				//encryption for car_battery function

		case4();				//encryption for door function

	}

}
//encryption for window status
void case1(void)
{
	button1:if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)== BTN_PRESSED)
	{
		windowstatus();
	}
	else
		goto button;

}

// encryption for alarm status
void case2(void)
{
	uint32_t i=0, button_count = 1;
	for(i=0;i<2;i++)
	{
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)== BTN_PRESSED)
		button_count++;
	else
		i=0;
	}
	if(button_count==2)
		{

			alarmstatus();

		}
}
//encryption for battery status
void case3(void)
{
	uint32_t i=0, button_count = 1;
	for(i=0;i<3;i++)
	{
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)== BTN_PRESSED)
		button_count++;
	else
		i=0;
	}
	if(button_count==3)
		{

			batterystatus();

		}
}
// encryption for door status
void case4(void)
{
	uint32_t i=0, button_count = 1;
	for(i=0;i<4;i++)
	{
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)== BTN_PRESSED)
		button_count++;
	else
		i=0;
	}
	if(button_count==4)
		{

			doorstatus();

		}
}




/**
 * @brief window function for window status
 *
 */
void windowstatus(void)
{
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
}
/**
 * @brief alarm function for alarm status
 *
 */
void alarmstatus(void)
{
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
}
/**
 * @brief battery status
 *
 */
void batterystatus(void)
{
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
}
/**
 * @brief door functionality
 *
 */
void doorstatus(void)
{
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
}
