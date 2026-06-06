#include <stdio.h>

typedef struct {
	struct
	{
		char _0 : 2;
		char _1 : 2;
		char _2 : 2;
		char _3 : 2;
		char _4 : 2;
		char _5 : 2;
		char _6 : 2;
		char _7 : 2;
		char _8 : 2;
		char _9 : 2;
		char _10 : 2;
		char _11 : 2;
		char _12 : 2;
		char _13 : 2;
		char _14 : 2;
		char _15 : 2;
	} MODER;
	struct
	{
		char _0 : 2;
		char _1 : 2;
		char _2 : 2;
		char _3 : 2;
		char _4 : 2;
		char _5 : 2;
		char _6 : 2;
		char _7 : 2;
		char _8 : 2;
		char _9 : 2;
		char _10 : 2;
		char _11 : 2;
		char _12 : 2;
		char _13 : 2;
		char _14 : 2;
		char _15 : 2;
	} OTYPER;

	struct
	{
		char _0 : 2;
		char _1 : 2;
		char _2 : 2;
		char _3 : 2;
		char _4 : 2;
		char _5 : 2;
		char _6 : 2;
		char _7 : 2;
		char _8 : 2;
		char _9 : 2;
		char _10 : 2;
		char _11 : 2;
		char _12 : 2;
		char _13 : 2;
		char _14 : 2;
		char _15 : 2;
	} OSPEEDR;

	struct
	{
		char _0 : 2;
		char _1 : 2;
		char _2 : 2;
		char _3 : 2;
		char _4 : 2;
		char _5 : 2;
		char _6 : 2;
		char _7 : 2;
		char _8 : 2;
		char _9 : 2;
		char _10 : 2;
		char _11 : 2;
		char _12 : 2;
		char _13 : 2;
		char _14 : 2;
		char _15 : 2;
	} PUPDR;
	struct
	{
		char _0 : 1;
		char _1 : 1;
		char _2 : 1;
		char _3 : 1;
		char _4 : 1;
		char _5 : 1;
		char _6 : 1;
		char _7 : 1;
		char _8 : 1;
		char _9 : 1;
		char _10 : 1;
		char _11 : 1;
		char _12 : 1;
		char _13 : 1;
		char _14 : 1;
		char _15 : 1;
		unsigned short Reserved;
	} IDR;

	struct
	{
		char _0 : 1;
		char _1 : 1;
		char _2 : 1;
		char _3 : 1;
		char _4 : 1;
		char _5 : 1;
		char _6 : 1;
		char _7 : 1;
		char _8 : 1;
		char _9 : 1;
		char _10 : 1;
		char _11 : 1;
		char _12 : 1;
		char _13 : 1;
		char _14 : 1;
		char _15 : 1;
		unsigned short Reserved;
	} ODR;

}GPIO_t;


void main()
{
	GPIO_t* GPIOA = (GPIO_t*)0x40020000;
	GPIOA->MODER._0 = 0b01;
	GPIOA->OTYPER._0 = 0b10;




}