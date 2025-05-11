/*
 * Memorey_Addresses.h
 *
 *  Created on: May 10, 2025
 *      Author: Kalyanapu Srihari
 *      Mail ID: kalyanapusrihari1999@gmail.com
 */

#ifndef MEMORY_ADDRESS_H_
#define MEMORY_ADDRESS_H_

//SOURCE: Datasheet "Stm32f103c8t6_datasheet" page number: 50
typedef enum
{
    // FSMC
    FSMC_BASE_ADDR             = 0xA0000000,
    FSMC_END_ADDR              = 0xA0000FFF,

    // USB OTG FS
    USB_OTG_FS_BASE_ADDR       = 0x50000000,
    USB_OTG_FS_END_ADDR        = 0x5003FFFF,

    // Ethernet
    ETHERNET_BASE_ADDR         = 0x40028000,
    ETHERNET_END_ADDR          = 0x40029FFF,

    // CRC
    CRC_BASE_ADDR              = 0x40023000,
    CRC_END_ADDR               = 0x400233FF,

    // Flash memory interface
    FLASH_IF_BASE_ADDR         = 0x40022000,
    FLASH_IF_END_ADDR          = 0x400223FF,

    // Reset and clock control (RCC)
    RCC_BASE_ADDR              = 0x40021000,
    RCC_END_ADDR               = 0x400213FF,

    // DMA2
    DMA2_BASE_ADDR             = 0x40020400,
    DMA2_END_ADDR              = 0x400207FF,

    // DMA1
    DMA1_BASE_ADDR             = 0x40020000,
    DMA1_END_ADDR              = 0x400203FF,

    // SDIO
    SDIO_BASE_ADDR             = 0x40018000,
    SDIO_END_ADDR              = 0x400183FF,

    // TIM11
    TIM11_BASE_ADDR            = 0x40015400,
    TIM11_END_ADDR             = 0x400157FF,

    // TIM10
    TIM10_BASE_ADDR            = 0x40015000,
    TIM10_END_ADDR             = 0x400153FF,

    // TIM9
    TIM9_BASE_ADDR             = 0x40014C00,
    TIM9_END_ADDR              = 0x40014FFF,

    // ADC3
    ADC3_BASE_ADDR             = 0x40013C00,
    ADC3_END_ADDR              = 0x40013FFF,

    // USART1
    USART1_BASE_ADDR           = 0x40013800,
    USART1_END_ADDR            = 0x40013BFF,

    // TIM8
    TIM8_BASE_ADDR             = 0x40013400,
    TIM8_END_ADDR              = 0x400137FF,

    // SPI1
    SPI1_BASE_ADDR             = 0x40013000,
    SPI1_END_ADDR              = 0x400133FF,

    // TIM1
    TIM1_BASE_ADDR             = 0x40012C00,
    TIM1_END_ADDR              = 0x40012FFF,

    // ADC2
    ADC2_BASE_ADDR             = 0x40012800,
    ADC2_END_ADDR              = 0x40012BFF,

    // ADC1
    ADC1_BASE_ADDR             = 0x40012400,
    ADC1_END_ADDR              = 0x400127FF,

    // GPIO Port G
    GPIOG_BASE_ADDR            = 0x40012000,
    GPIOG_END_ADDR             = 0x400123FF,

    // GPIO Port F
    GPIOF_BASE_ADDR            = 0x40011C00,
    GPIOF_END_ADDR             = 0x40011FFF,

    // GPIO Port E
    GPIOE_BASE_ADDR            = 0x40011800,
    GPIOE_END_ADDR             = 0x40011BFF,

    // GPIO Port D
    GPIOD_BASE_ADDR            = 0x40011400,
    GPIOD_END_ADDR             = 0x400117FF,

    // GPIO Port C
    GPIOC_BASE_ADDR            = 0x40011000,
    GPIOC_END_ADDR             = 0x400113FF,

    // GPIO Port B
    GPIOB_BASE_ADDR            = 0x40010C00,
    GPIOB_END_ADDR             = 0x40010FFF,

    // GPIO Port A
    GPIOA_BASE_ADDR            = 0x40010800,
    GPIOA_END_ADDR             = 0x40010BFF,

    // EXTI
    EXTI_BASE_ADDR             = 0x40010400,
    EXTI_END_ADDR              = 0x400107FF,

    // AFIO
    AFIO_BASE_ADDR             = 0x40010000,
    AFIO_END_ADDR              = 0x400103FF,

    // DAC
    DAC_BASE_ADDR              = 0x40007400,
    DAC_END_ADDR               = 0x400077FF,

    // Power control (PWR)
    PWR_BASE_ADDR              = 0x40007000,
    PWR_END_ADDR               = 0x400073FF,

    // Backup registers (BKP)
    BKP_BASE_ADDR              = 0x40006C00,
    BKP_END_ADDR               = 0x40006FFF,

    // bxCAN1
    CAN1_BASE_ADDR             = 0x40006400,
    CAN1_END_ADDR              = 0x400067FF,

    // bxCAN2
    CAN2_BASE_ADDR             = 0x40006800,
    CAN2_END_ADDR              = 0x40006BFF,

    // Shared USB/CAN SRAM
    USB_CAN_SRAM_BASE_ADDR     = 0x40006000,
    USB_CAN_SRAM_END_ADDR      = 0x400063FF,

    // USB device FS registers
    USB_DEVICE_FS_BASE_ADDR    = 0x40005C00,
    USB_DEVICE_FS_END_ADDR     = 0x40005FFF,

    // I2C2
    I2C2_BASE_ADDR             = 0x40005800,
    I2C2_END_ADDR              = 0x40005BFF,

    // I2C1
    I2C1_BASE_ADDR             = 0x40005400,
    I2C1_END_ADDR              = 0x400057FF,

    // UART5
    UART5_BASE_ADDR            = 0x40005000,
    UART5_END_ADDR             = 0x400053FF,

    // UART4
    UART4_BASE_ADDR            = 0x40004C00,
    UART4_END_ADDR             = 0x40004FFF,

    // USART3
    USART3_BASE_ADDR           = 0x40004800,
    USART3_END_ADDR            = 0x40004BFF,

    // USART2
    USART2_BASE_ADDR           = 0x40004400,
    USART2_END_ADDR            = 0x400047FF,

    // SPI3/I2S
    SPI3_BASE_ADDR             = 0x40003C00,
    SPI3_END_ADDR              = 0x40003FFF,

    // SPI2/I2S
    SPI2_BASE_ADDR             = 0x40003800,
    SPI2_END_ADDR              = 0x40003BFF,

    // Independent watchdog (IWDG)
    IWDG_BASE_ADDR             = 0x40003000,
    IWDG_END_ADDR              = 0x400033FF,

    // Window watchdog (WWDG)
    WWDG_BASE_ADDR             = 0x40002C00,
    WWDG_END_ADDR              = 0x40002FFF,

    // RTC
    RTC_BASE_ADDR              = 0x40002800,
    RTC_END_ADDR               = 0x40002BFF,

    // TIM14
    TIM14_BASE_ADDR            = 0x40002000,
    TIM14_END_ADDR             = 0x400023FF,

    // TIM13
    TIM13_BASE_ADDR            = 0x40001C00,
    TIM13_END_ADDR             = 0x40001FFF,

    // TIM12
    TIM12_BASE_ADDR            = 0x40001800,
    TIM12_END_ADDR             = 0x40001BFF,

    // TIM7
    TIM7_BASE_ADDR             = 0x40001400,
    TIM7_END_ADDR              = 0x400017FF,

    // TIM6
    TIM6_BASE_ADDR             = 0x40001000,
    TIM6_END_ADDR              = 0x400013FF,

    // TIM5
    TIM5_BASE_ADDR             = 0x40000C00,
    TIM5_END_ADDR              = 0x40000FFF,

    // TIM4
    TIM4_BASE_ADDR             = 0x40000800,
    TIM4_END_ADDR              = 0x40000BFF,

    // TIM3
    TIM3_BASE_ADDR             = 0x40000400,
    TIM3_END_ADDR              = 0x400007FF,

    // TIM2
    TIM2_BASE_ADDR             = 0x40000000,
    TIM2_END_ADDR              = 0x400003FF

} MEMORY_MAP;

#define	RCC_CR (volatile unsigned int *)(RCC_BASE_ADDR+0x00)		//PG_NO : 132 Clock control register
#define	RCC_CFGR (volatile unsigned int *)(RCC_BASE_ADDR+0x04)		//PG_NO : 134 Clock configuration register
#define	RCC_CIR (volatile unsigned int *)(RCC_BASE_ADDR+0x08)		//PG_NO : 137 Clock interrupt register
#define	RCC_APB2RSTR (volatile unsigned int *)(RCC_BASE_ADDR+0x0c)	//PG_NO : 141 APB2 peripheral reset register
#define	RCC_APB1RSTR (volatile unsigned int *)(RCC_BASE_ADDR+0x10)	//PG_NO : 142 APB1 peripheral reset register
#define	RCC_AHBENR (volatile unsigned int *)(RCC_BASE_ADDR+0x14)	//PG_NO : 145 AHB peripheral clock enable register
#define	RCC_APB2ENR (volatile unsigned int *)(RCC_BASE_ADDR+0x18)	//PG_NO : 146 APB2 peripheral clock register
#define	RCC_APB1ENR (volatile unsigned int *)(RCC_BASE_ADDR+0x1c)	//PG_NO : 148 APB1 peripheral clock enable register

typedef enum
{
	RCC_CR_RESET_VALUE 			= 0x00000083,	//PG_NO : 132 Clock control register
	RCC_CFGR_RESET_VALUE 		= 0x00000000,	//PG_NO : 134 Clock configuration register
	RCC_CIR_RESET_VALUE 		= 0x00000000,	//PG_NO : 137 Clock interrupt register
	RCC_APB2RSTR_RESET_VALUE 	= 0x00000000,	//PG_NO : 141 APB2 peripheral reset register
	RCC_APB1RSTR_RESET_VALUE 	= 0x00000000,	//PG_NO : 142 APB1 peripheral reset register
	RCC_AHBENR_RESET_VALUE 		= 0x00000014,	//PG_NO : 145 AHB peripheral clock enable register
	RCC_APB2ENR_RESET_VALUE 	= 0x00000000,	//PG_NO : 146 APB2 peripheral clock register
	RCC_APB1ENR_RESET_VALUE 	= 0x00000000	//PG_NO : 148 APB1 peripheral clock enable register
}RCC_REGISTERS_RESET_VALUES;

#define	GPIOA_CRL (volatile unsigned int *)(GPIOA_BASE_ADDR+0x00) //PG_NO : 171 port configuration register low
#define	GPIOA_CRH (volatile unsigned int *)(GPIOA_BASE_ADDR+0x04) //PG_NO : 172 port configuration register high
#define	GPIOB_CRL (volatile unsigned int *)(GPIOB_BASE_ADDR+0x00) //PG_NO : 171 port configuration register low
#define	GPIOB_CRH (volatile unsigned int *)(GPIOB_BASE_ADDR+0x04) //PG_NO : 172 port configuration register high
#define	GPIOC_CRL (volatile unsigned int *)(GPIOC_BASE_ADDR+0x00) //PG_NO : 171 port configuration register low
#define	GPIOC_CRH (volatile unsigned int *)(GPIOC_BASE_ADDR+0x04) //PG_NO : 172 port configuration register high
#define	GPIOD_CRL (volatile unsigned int *)(GPIOD_BASE_ADDR+0x00) //PG_NO : 171 port configuration register low
#define	GPIOD_CRH (volatile unsigned int *)(GPIOD_BASE_ADDR+0x04) //PG_NO : 172 port configuration register high
#define	GPIOE_CRL (volatile unsigned int *)(GPIOE_BASE_ADDR+0x00) //PG_NO : 171 port configuration register low
#define	GPIOE_CRH (volatile unsigned int *)(GPIOE_BASE_ADDR+0x04) //PG_NO : 172 port configuration register high
#define	GPIOF_CRL (volatile unsigned int *)(GPIOF_BASE_ADDR+0x00) //PG_NO : 171 port configuration register low
#define	GPIOF_CRH (volatile unsigned int *)(GPIOF_BASE_ADDR+0x04) //PG_NO : 172 port configuration register high
#define	GPIOG_CRL (volatile unsigned int *)(GPIOG_BASE_ADDR+0x00) //PG_NO : 171 port configuration register low
#define	GPIOG_CRH (volatile unsigned int *)(GPIOG_BASE_ADDR+0x04) //PG_NO : 172 port configuration register high

#define	GPIOA_IDR (volatile unsigned int *)(GPIOA_BASE_ADDR+0x08) //PG_NO : 172 port input data register
#define	GPIOA_ODR (volatile unsigned int *)(GPIOA_BASE_ADDR+0x0c) //PG_NO : 173 port output data register
#define	GPIOB_IDR (volatile unsigned int *)(GPIOB_BASE_ADDR+0x08) //PG_NO : 172 port input data register
#define	GPIOB_ODR (volatile unsigned int *)(GPIOB_BASE_ADDR+0x0c) //PG_NO : 173 port output data register
#define	GPIOC_IDR (volatile unsigned int *)(GPIOC_BASE_ADDR+0x08) //PG_NO : 172 port input data register
#define	GPIOC_ODR (volatile unsigned int *)(GPIOC_BASE_ADDR+0x0c) //PG_NO : 173 port output data register
#define	GPIOD_IDR (volatile unsigned int *)(GPIOD_BASE_ADDR+0x08) //PG_NO : 172 port input data register
#define	GPIOD_ODR (volatile unsigned int *)(GPIOD_BASE_ADDR+0x0c) //PG_NO : 173 port output data register
#define	GPIOE_IDR (volatile unsigned int *)(GPIOE_BASE_ADDR+0x08) //PG_NO : 172 port input data register
#define	GPIOE_ODR (volatile unsigned int *)(GPIOE_BASE_ADDR+0x0c) //PG_NO : 173 port output data register
#define	GPIOF_IDR (volatile unsigned int *)(GPIOF_BASE_ADDR+0x08) //PG_NO : 172 port input data register
#define	GPIOF_ODR (volatile unsigned int *)(GPIOF_BASE_ADDR+0x0c) //PG_NO : 173 port output data register
#define	GPIOG_IDR (volatile unsigned int *)(GPIOG_BASE_ADDR+0x08) //PG_NO : 172 port input data register
#define	GPIOG_ODR (volatile unsigned int *)(GPIOG_BASE_ADDR+0x0c) //PG_NO : 173 port output data register

typedef enum
{
	GPIOx_CRL_RESET_VALUE = 0x44444444, //PG_NO : 171 port configuration register low
	GPIOx_CRH_RESET_VALUE = 0x44444444	//PG_NO : 172 port configuration register high
}GPIO_REGISTERS_RESET_VALUES;

typedef enum
{
	INPUT_MODE = 0x0,
	OUTPUT_MODE_10MHZ = 0x1,
	OUTPUT_MODE_2MHZ =0x2,
	OUTPUT_MODE_50MHZ = 0x3
}GPIO_MODE; //PG_NO : 171 port configuration register low

typedef enum
{
	ANALOG_MODE = 0x0,
	FLOATING_INPUT = 0x1,
	INPUT_PULL_UP_DOWN =0x2,
	RESERVED = 0x3
}GPIO_INPUT_CONFIGURATION; //PG_NO : 171 port configuration register low

typedef enum
{
	GP_OP_PUSH_PULL = 0x0,
	GP_OP_OPEN_DRAIN = 0x1,
	AF_OP_PUSH_PULL = 0X2,
	AF_OP_OPEN_DRAIN = 0X3
}GPIO_OUTPUT_CONFIGURATION; //PG_NO : 171 port configuration register low

#pragma pack(1)
typedef struct _PORT_CONFIGUTATION
{
	unsigned char mode:2;
	unsigned char cnf:2;
}PORT_CONFIGUTATION;
#pragma pack()

#define SETBIT(data, pos) ((data) = ((data) | (1<<(pos))))
#define CLEARBIT(data, pos) ((data) = ((data) & (~(1<<(pos)))))
#define TOGGLEBIT(data, pos) ((data) = ((data) ^ (1<<(pos))))
#define SETBITS(data, pos, value) ((data) = ((data) | ((value)<<(pos))))
#define CLEARBITS(data, pos, value) ((data) = ((data) & (~((value)<<(pos)))))


#endif /* MEMORY_ADDRESS_H_ */
