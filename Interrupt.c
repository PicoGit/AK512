/*----------------------------------------------------------------------------*/
/**
* @file		Interrupt.c
* @brief	割り込みベクタ関数
* @date		24/07/16
* @details	
* @note		
*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "typedef.h"
#include "BoardSupportPackage.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
typedef enum
{
ISR_IRQ_BusErrorTrap = 0,
ISR_IRQ_IllegalInstructionTrap,
ISR_IRQ_AddressErrorTrap,
ISR_IRQ_StackErrorTrap,
ISR_IRQ_MathErrorTrap,
ISR_IRQ_GeneralTrap,
ISR_IRQ_COMMONInterrupt,
ISR_IRQ_CPUFPUInterrupt,
ISR_IRQ_XRAMECCInterrupt,
ISR_IRQ_YRAMECCInterrupt,
ISR_IRQ_PBUEInterrupt,
ISR_IRQ_NVMECCInterrupt,
ISR_IRQ_NVMInterrupt,
ISR_IRQ_NVMCRCInterrupt,
ISR_IRQ_CLKFInterrupt,
ISR_IRQ_CLKEInterrupt,
ISR_IRQ_CLK1FInterrupt,
ISR_IRQ_CLK1WInterrupt,
ISR_IRQ_CLK1MInterrupt,
ISR_IRQ_CLK1RInterrupt,
ISR_IRQ_CLK2FInterrupt,
ISR_IRQ_CLK2WInterrupt,
ISR_IRQ_CLK2MInterrupt,
ISR_IRQ_CLK2RInterrupt,
ISR_IRQ_CLK3FInterrupt,
ISR_IRQ_CLK3WInterrupt,
ISR_IRQ_CLK3MInterrupt,
ISR_IRQ_CLK3RInterrupt,
ISR_IRQ_CLK4FInterrupt,
ISR_IRQ_CLK4WInterrupt,
ISR_IRQ_CLK4MInterrupt,
ISR_IRQ_CLK4RInterrupt,
ISR_IRQ_WDTInterrupt,
ISR_IRQ_CRYPTO1Interrupt,
ISR_IRQ_CRYPTO2Interrupt,
ISR_IRQ_CRYPTO3Interrupt,
ISR_IRQ_INT0Interrupt,
ISR_IRQ_INT1Interrupt,
ISR_IRQ_INT2Interrupt,
ISR_IRQ_INT3Interrupt,
ISR_IRQ_INT4Interrupt,
ISR_IRQ_PWMEVTAInterrupt,
ISR_IRQ_PWMEVTBInterrupt,
ISR_IRQ_PWMEVTCInterrupt,
ISR_IRQ_PWMEVTDInterrupt,
ISR_IRQ_PWMEVTEInterrupt,
ISR_IRQ_PWMEVTFInterrupt,
ISR_IRQ_PWM1Interrupt,
ISR_IRQ_PWM2Interrupt,
ISR_IRQ_PWM3Interrupt,
ISR_IRQ_PWM4Interrupt,
ISR_IRQ_T1Interrupt,
ISR_IRQ_T2Interrupt,
ISR_IRQ_T3Interrupt,
ISR_IRQ_CCT1Interrupt,
ISR_IRQ_CCP1Interrupt,
ISR_IRQ_CCT2Interrupt,
ISR_IRQ_CCP2Interrupt,
ISR_IRQ_CCT3Interrupt,
ISR_IRQ_CCP3Interrupt,
ISR_IRQ_CCT4Interrupt,
ISR_IRQ_CCP4Interrupt,
ISR_IRQ_C1RXInterrupt,
ISR_IRQ_C1TXInterrupt,
ISR_IRQ_C1Interrupt,
ISR_IRQ_C2RXInterrupt,
ISR_IRQ_C2TXInterrupt,
ISR_IRQ_C2Interrupt,
ISR_IRQ_SPI1RXInterrupt,
ISR_IRQ_SPI1TXInterrupt,
ISR_IRQ_SPI1EInterrupt,
ISR_IRQ_SPI2RXInterrupt,
ISR_IRQ_SPI2TXInterrupt,
ISR_IRQ_SPI2EInterrupt,
ISR_IRQ_SPI3RXInterrupt,
ISR_IRQ_SPI3TXInterrupt,
ISR_IRQ_SPI3EInterrupt,
ISR_IRQ_SPI4RXInterrupt,
ISR_IRQ_SPI4TXInterrupt,
ISR_IRQ_SPI4EInterrupt,
ISR_IRQ_DMA0Interrupt,
ISR_IRQ_DMA1Interrupt,
ISR_IRQ_DMA2Interrupt,
ISR_IRQ_DMA3Interrupt,
ISR_IRQ_CMP1Interrupt,
ISR_IRQ_CMP2Interrupt,
ISR_IRQ_CMP3Interrupt,
ISR_IRQ_CMP4Interrupt,
ISR_IRQ_I2C1EInterrupt,
ISR_IRQ_I2C1Interrupt,
ISR_IRQ_I2C1RXInterrupt,
ISR_IRQ_I2C1TXInterrupt,
ISR_IRQ_I2C2EInterrupt,
ISR_IRQ_I2C2Interrupt,
ISR_IRQ_I2C2RXInterrupt,
ISR_IRQ_I2C2TXInterrupt,
ISR_IRQ_I2C3EInterrupt,
ISR_IRQ_I2C3Interrupt,
ISR_IRQ_I2C3RXInterrupt,
ISR_IRQ_I2C3TXInterrupt,
ISR_IRQ_U1RXInterrupt,
ISR_IRQ_U1TXInterrupt,
ISR_IRQ_U1EInterrupt,
ISR_IRQ_U1EVTInterrupt,
ISR_IRQ_U2RXInterrupt,
ISR_IRQ_U2TXInterrupt,
ISR_IRQ_U2EInterrupt,
ISR_IRQ_U2EVTInterrupt,
ISR_IRQ_U3RXInterrupt,
ISR_IRQ_U3TXInterrupt,
ISR_IRQ_U3EInterrupt,
ISR_IRQ_U3EVTInterrupt,
ISR_IRQ_SENT1Interrupt,
ISR_IRQ_SENT1EInterrupt,
ISR_IRQ_SENT2Interrupt,
ISR_IRQ_SENT2EInterrupt,
ISR_IRQ_DMA4Interrupt,
ISR_IRQ_DMA5Interrupt,
ISR_IRQ_DMA6Interrupt,
ISR_IRQ_DMA7Interrupt,
ISR_IRQ_CNAInterrupt,
ISR_IRQ_CNBInterrupt,
ISR_IRQ_CNCInterrupt,
ISR_IRQ_CNDInterrupt,
ISR_IRQ_CCT5Interrupt,
ISR_IRQ_CCP5Interrupt,
ISR_IRQ_CCT6Interrupt,
ISR_IRQ_CCP6Interrupt,
ISR_IRQ_CCT7Interrupt,
ISR_IRQ_CCP7Interrupt,
ISR_IRQ_CCT8Interrupt,
ISR_IRQ_CCP8Interrupt,
ISR_IRQ_CCT9Interrupt,
ISR_IRQ_CCP9Interrupt,
ISR_IRQ_QEI1Interrupt,
ISR_IRQ_QEI2Interrupt,
ISR_IRQ_QEI3Interrupt,
ISR_IRQ_QEI4Interrupt,
ISR_IRQ_BISS1EInterrupt,
ISR_IRQ_BISS1Interrupt,
ISR_IRQ_CRCInterrupt,
ISR_IRQ_ICDInterrupt,
ISR_IRQ_PTGSTEPInterrupt,
ISR_IRQ_PTGWDTInterrupt,
ISR_IRQ_PTG0Interrupt,
ISR_IRQ_PTG1Interrupt,
ISR_IRQ_PTG2Interrupt,
ISR_IRQ_PTG3Interrupt,
ISR_IRQ_PWM5Interrupt,
ISR_IRQ_PWM6Interrupt,
ISR_IRQ_PWM7Interrupt,
ISR_IRQ_PWM8Interrupt,
ISR_IRQ_AD1CH0Interrupt,
ISR_IRQ_AD1CMP0Interrupt,
ISR_IRQ_AD1CH1Interrupt,
ISR_IRQ_AD1CMP1Interrupt,
ISR_IRQ_AD1CH2Interrupt,
ISR_IRQ_AD1CMP2Interrupt,
ISR_IRQ_AD1CH3Interrupt,
ISR_IRQ_AD1CMP3Interrupt,
ISR_IRQ_AD1CH4Interrupt,
ISR_IRQ_AD1CMP4Interrupt,
ISR_IRQ_AD1CH5Interrupt,
ISR_IRQ_AD1CMP5Interrupt,
ISR_IRQ_AD1CH6Interrupt,
ISR_IRQ_AD1CMP6Interrupt,
ISR_IRQ_AD1CH7Interrupt,
ISR_IRQ_AD1CMP7Interrupt,
ISR_IRQ_AD2CH0Interrupt,
ISR_IRQ_AD2CMP0Interrupt,
ISR_IRQ_AD2CH1Interrupt,
ISR_IRQ_AD2CMP1Interrupt,
ISR_IRQ_AD2CH2Interrupt,
ISR_IRQ_AD2CMP2Interrupt,
ISR_IRQ_AD2CH3Interrupt,
ISR_IRQ_AD2CMP3Interrupt,
ISR_IRQ_AD2CH4Interrupt,
ISR_IRQ_AD2CMP4Interrupt,
ISR_IRQ_AD2CH5Interrupt,
ISR_IRQ_AD2CMP5Interrupt,
ISR_IRQ_AD2CH6Interrupt,
ISR_IRQ_AD2CMP6Interrupt,
ISR_IRQ_AD2CH7Interrupt,
ISR_IRQ_AD2CMP7Interrupt,
ISR_IRQ_AD3CH0Interrupt,
ISR_IRQ_AD3CMP0Interrupt,
ISR_IRQ_AD3CH1Interrupt,
ISR_IRQ_AD3CMP1Interrupt,
ISR_IRQ_AD3CH2Interrupt,
ISR_IRQ_AD3CMP2Interrupt,
ISR_IRQ_AD3CH3Interrupt,
ISR_IRQ_AD3CMP3Interrupt,
ISR_IRQ_AD3CH4Interrupt,
ISR_IRQ_AD3CMP4Interrupt,
ISR_IRQ_AD3CH5Interrupt,
ISR_IRQ_AD3CMP5Interrupt,
ISR_IRQ_AD3CH6Interrupt,
ISR_IRQ_AD3CMP6Interrupt,
ISR_IRQ_AD3CH7Interrupt,
ISR_IRQ_AD3CMP7Interrupt,
ISR_IRQ_AD4CH0Interrupt,
ISR_IRQ_AD4CMP0Interrupt,
ISR_IRQ_AD4CH1Interrupt,
ISR_IRQ_AD4CMP1Interrupt,
ISR_IRQ_AD4CH2Interrupt,
ISR_IRQ_AD4CMP2Interrupt,
ISR_IRQ_AD4CH3Interrupt,
ISR_IRQ_AD4CMP3Interrupt,
ISR_IRQ_AD4CH4Interrupt,
ISR_IRQ_AD4CMP4Interrupt,
ISR_IRQ_AD4CH5Interrupt,
ISR_IRQ_AD4CMP5Interrupt,
ISR_IRQ_AD4CH6Interrupt,
ISR_IRQ_AD4CMP6Interrupt,
ISR_IRQ_AD4CH7Interrupt,
ISR_IRQ_AD4CMP7Interrupt,
ISR_IRQ_AD5CH0Interrupt,
ISR_IRQ_AD5CMP0Interrupt,
ISR_IRQ_AD5CH1Interrupt,
ISR_IRQ_AD5CMP1Interrupt,
ISR_IRQ_AD5CH2Interrupt,
ISR_IRQ_AD5CMP2Interrupt,
ISR_IRQ_AD5CH3Interrupt,
ISR_IRQ_AD5CMP3Interrupt,
ISR_IRQ_AD5CH4Interrupt,
ISR_IRQ_AD5CMP4Interrupt,
ISR_IRQ_AD5CH5Interrupt,
ISR_IRQ_AD5CMP5Interrupt,
ISR_IRQ_AD5CH6Interrupt,
ISR_IRQ_AD5CMP6Interrupt,
ISR_IRQ_AD5CH7Interrupt,
ISR_IRQ_AD5CMP7Interrupt,
ISR_IRQ_AD5CH8Interrupt,
ISR_IRQ_AD5CMP8Interrupt,
ISR_IRQ_AD5CH9Interrupt,
ISR_IRQ_AD5CMP9Interrupt,
ISR_IRQ_AD5CH10Interrupt,
ISR_IRQ_AD5CMP10Interrupt,
ISR_IRQ_AD5CH11Interrupt,
ISR_IRQ_AD5CMP11Interrupt,
ISR_IRQ_AD5CH12Interrupt,
ISR_IRQ_AD5CMP12Interrupt,
ISR_IRQ_AD5CH13Interrupt,
ISR_IRQ_AD5CMP13Interrupt,
ISR_IRQ_AD5CH14Interrupt,
ISR_IRQ_AD5CMP14Interrupt,
ISR_IRQ_AD5CH15Interrupt,
ISR_IRQ_AD5CMP15Interrupt,
ISR_IRQ_CMP5Interrupt,
ISR_IRQ_CMP6Interrupt,
ISR_IRQ_CMP7Interrupt,
ISR_IRQ_CMP8Interrupt,
ISR_IRQ_CLC1PInterrupt,
ISR_IRQ_CLC1NInterrupt,
ISR_IRQ_CLC2PInterrupt,
ISR_IRQ_CLC2NInterrupt,
ISR_IRQ_CLC3PInterrupt,
ISR_IRQ_CLC3NInterrupt,
ISR_IRQ_CLC4PInterrupt,
ISR_IRQ_CLC4NInterrupt,
ISR_IRQ_CLC5PInterrupt,
ISR_IRQ_CLC5NInterrupt,
ISR_IRQ_CLC6PInterrupt,
ISR_IRQ_CLC6NInterrupt,
ISR_IRQ_CLC7PInterrupt,
ISR_IRQ_CLC7NInterrupt,
ISR_IRQ_CLC8PInterrupt,
ISR_IRQ_CLC8NInterrupt,
ISR_IRQ_CLC9PInterrupt,
ISR_IRQ_CLC9NInterrupt,
ISR_IRQ_CLC10PInterrupt,
ISR_IRQ_CLC10NInterrupt,
ISR_IRQ_CNEInterrupt,
ISR_IRQ_CNFInterrupt,
ISR_IRQ_CNGInterrupt,
ISR_IRQ_CNHInterrupt,
ISR_IRQ_ITCInterrupt,
ISR_IRQ_IOIM1Interrupt,
ISR_IRQ_IOIM2Interrupt,
ISR_IRQ_IOIM3Interrupt,
ISR_IRQ_IOIM4Interrupt,
ISR_IRQ_IOIM5Interrupt,
ISR_IRQ_IOIM6Interrupt,
ISR_IRQ_IOIM7Interrupt,
ISR_IRQ_IOIM8Interrupt,
ISR_IRQ_IOIM9Interrupt,
ISR_IRQ_IOIM10Interrupt,
ISR_IRQ_IOIM11Interrupt,
ISR_IRQ_IOIM12Interrupt,
ISR_IRQ_IOIM13Interrupt,
ISR_IRQ_IOIM14Interrupt,
ISR_IRQ_IOIM15Interrupt,
ISR_IRQ_IOIM16Interrupt,
ISR_IRQ_APWM1Interrupt,
ISR_IRQ_APWM2Interrupt,
ISR_IRQ_APWM3Interrupt,
ISR_IRQ_APWM4Interrupt,
ISR_IRQ_APWMEVTAInterrupt,
ISR_IRQ_APWMEVTBInterrupt,
ISR_IRQ_APWMEVTCInterrupt,
ISR_IRQ_APWMEVTDInterrupt
}ISR_IRQ;

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
static void vds_Isr_Unexpected_Interrupt(_u2 u2a_ISR_Vector_Number)
{
    
}


/*----------------------------------------------------------------------------*/
/*
* @fn	_BusErrorTrap(void)
* @brief		Bus error trap
* @param
* @return
* @detail	 IRQ No.[N/A	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _BusErrorTrap(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_BusErrorTrap);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IllegalInstructionTrap(void)
* @brief		Illegal instruction trap
* @param
* @return
* @detail	 IRQ No.[N/A	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IllegalInstructionTrap(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IllegalInstructionTrap);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AddressErrorTrap(void)
* @brief		Address error trap
* @param
* @return
* @detail	 IRQ No.[N/A	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AddressErrorTrap(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AddressErrorTrap);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_StackErrorTrap(void)
* @brief		Stack error trap
* @param
* @return
* @detail	 IRQ No.[N/A	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _StackErrorTrap(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_StackErrorTrap);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_MathErrorTrap(void)
* @brief		Math error trap
* @param
* @return
* @detail	 IRQ No.[N/A	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _MathErrorTrap(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_MathErrorTrap);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_GeneralTrap(void)
* @brief		General error trap
* @param
* @return
* @detail	 IRQ No.[N/A	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _GeneralTrap(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_GeneralTrap);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_COMMONInterrupt(void)
* @brief		Common collapsed interrupt
* @param
* @return
* @detail	 IRQ No.[0	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _COMMONInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_COMMONInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CPUFPUInterrupt(void)
* @brief		CPU and FPU interrupt
* @param
* @return
* @detail	 IRQ No.[1	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CPUFPUInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CPUFPUInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_XRAMECCInterrupt(void)
* @brief		X RAM ECC single error interrupt
* @param
* @return
* @detail	 IRQ No.[2	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _XRAMECCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_XRAMECCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_YRAMECCInterrupt(void)
* @brief		Y RAM ECC single error interrupt
* @param
* @return
* @detail	 IRQ No.[3	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _YRAMECCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_YRAMECCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PBUEInterrupt(void)
* @brief		PBU parity error interrupt
* @param
* @return
* @detail	 IRQ No.[4	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PBUEInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PBUEInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_NVMECCInterrupt(void)
* @brief		NVM ECC single error interrupt
* @param
* @return
* @detail	 IRQ No.[5	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _NVMECCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_NVMECCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_NVMInterrupt(void)
* @brief		NVM program or erase operation completed interrupt
* @param
* @return
* @detail	 IRQ No.[6	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _NVMInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_NVMInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_NVMCRCInterrupt(void)
* @brief		NVM CRC operation completed interrupt
* @param
* @return
* @detail	 IRQ No.[7	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _NVMCRCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_NVMCRCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLKFInterrupt(void)
* @brief		Combined clock fail interrupt
* @param
* @return
* @detail	 IRQ No.[9	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLKFInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLKFInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLKEInterrupt(void)
* @brief		Combined clock error interrupt
* @param
* @return
* @detail	 IRQ No.[10	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLKEInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLKEInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK1FInterrupt(void)
* @brief		Clock 1 failure interrupt
* @param
* @return
* @detail	 IRQ No.[11	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK1FInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK1FInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK1WInterrupt(void)
* @brief		Clock 1 warning interrupt
* @param
* @return
* @detail	 IRQ No.[12	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK1WInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK1WInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK1MInterrupt(void)
* @brief		Clock 1 monitor error interrupt
* @param
* @return
* @detail	 IRQ No.[13	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK1MInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK1MInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK1RInterrupt(void)
* @brief		Clock 1 ready interrupt
* @param
* @return
* @detail	 IRQ No.[14	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK1RInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK1RInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK2FInterrupt(void)
* @brief		Clock 2 failure interrupt
* @param
* @return
* @detail	 IRQ No.[15	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK2FInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK2FInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK2WInterrupt(void)
* @brief		Clock 2 warning interrupt
* @param
* @return
* @detail	 IRQ No.[16	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK2WInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK2WInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK2MInterrupt(void)
* @brief		Clock 2 monitor error interrupt
* @param
* @return
* @detail	 IRQ No.[17	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK2MInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK2MInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK2RInterrupt(void)
* @brief		Clock 2 ready interrupt
* @param
* @return
* @detail	 IRQ No.[18	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK2RInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK2RInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK3FInterrupt(void)
* @brief		Clock 3 failure interrupt
* @param
* @return
* @detail	 IRQ No.[19	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK3FInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK3FInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK3WInterrupt(void)
* @brief		Clock 3 warning interrupt
* @param
* @return
* @detail	 IRQ No.[20	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK3WInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK3WInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK3MInterrupt(void)
* @brief		Clock 3 monitor error interrupt
* @param
* @return
* @detail	 IRQ No.[21	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK3MInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK3MInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK3RInterrupt(void)
* @brief		Clock 3 ready interrupt
* @param
* @return
* @detail	 IRQ No.[22	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK3RInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK3RInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK4FInterrupt(void)
* @brief		Clock 4 failure interrupt
* @param
* @return
* @detail	 IRQ No.[23	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK4FInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK4FInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK4WInterrupt(void)
* @brief		Clock 4 warning interrupt
* @param
* @return
* @detail	 IRQ No.[24	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK4WInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK4WInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK4MInterrupt(void)
* @brief		Clock 4 monitor error interrupt
* @param
* @return
* @detail	 IRQ No.[25	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK4MInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK4MInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK4RInterrupt(void)
* @brief		Clock 4 ready interrupt
* @param
* @return
* @detail	 IRQ No.[26	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK4RInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK4RInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_WDTInterrupt(void)
* @brief		Wake up from WDT interrupt
* @param
* @return
* @detail	 IRQ No.[28	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _WDTInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_WDTInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CRYPTO1Interrupt(void)
* @brief		Crypto 1 interrupt
* @param
* @return
* @detail	 IRQ No.[30	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CRYPTO1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CRYPTO1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CRYPTO2Interrupt(void)
* @brief		Crypto 2 interrupt
* @param
* @return
* @detail	 IRQ No.[31	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CRYPTO2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CRYPTO2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CRYPTO3Interrupt(void)
* @brief		Crypto 3 interrupt
* @param
* @return
* @detail	 IRQ No.[32	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CRYPTO3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CRYPTO3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_INT0Interrupt(void)
* @brief		External interrupt 0
* @param
* @return
* @detail	 IRQ No.[33	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _INT0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_INT0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_INT1Interrupt(void)
* @brief		External interrupt 1
* @param
* @return
* @detail	 IRQ No.[34	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _INT1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_INT1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_INT2Interrupt(void)
* @brief		External interrupt 2
* @param
* @return
* @detail	 IRQ No.[35	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _INT2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_INT2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_INT3Interrupt(void)
* @brief		External interrupt 3
* @param
* @return
* @detail	 IRQ No.[36	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _INT3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_INT3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_INT4Interrupt(void)
* @brief		External interrupt 4
* @param
* @return
* @detail	 IRQ No.[37	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _INT4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_INT4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWMEVTAInterrupt(void)
* @brief		PWM event A interrupt
* @param
* @return
* @detail	 IRQ No.[38	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWMEVTAInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWMEVTAInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWMEVTBInterrupt(void)
* @brief		PWM event B interrupt
* @param
* @return
* @detail	 IRQ No.[39	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWMEVTBInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWMEVTBInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWMEVTCInterrupt(void)
* @brief		PWM event C interrupt
* @param
* @return
* @detail	 IRQ No.[40	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWMEVTCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWMEVTCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWMEVTDInterrupt(void)
* @brief		PWM event D interrupt
* @param
* @return
* @detail	 IRQ No.[41	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWMEVTDInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWMEVTDInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWMEVTEInterrupt(void)
* @brief		PWM event E interrupt
* @param
* @return
* @detail	 IRQ No.[42	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWMEVTEInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWMEVTEInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWMEVTFInterrupt(void)
* @brief		PWM event F interrupt
* @param
* @return
* @detail	 IRQ No.[43	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWMEVTFInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWMEVTFInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWM1Interrupt(void)
* @brief		PWM Generator 1 interrupt
* @param
* @return
* @detail	 IRQ No.[44	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWM1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWM1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWM2Interrupt(void)
* @brief		PWM Generator 2 interrupt
* @param
* @return
* @detail	 IRQ No.[45	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWM2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWM2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWM3Interrupt(void)
* @brief		PWM Generator 3 interrupt
* @param
* @return
* @detail	 IRQ No.[46	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWM3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWM3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWM4Interrupt(void)
* @brief		PWM Generator 4 interrupt
* @param
* @return
* @detail	 IRQ No.[47	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWM4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWM4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_T1Interrupt(void)
* @brief		Timer 1 interrupt
* @param
* @return
* @detail	 IRQ No.[48	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _T1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_T1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_T2Interrupt(void)
* @brief		Timer 2 interrupt
* @param
* @return
* @detail	 IRQ No.[49	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _T2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_T2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_T3Interrupt(void)
* @brief		Timer 3 interrupt
* @param
* @return
* @detail	 IRQ No.[50	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _T3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_T3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCT1Interrupt(void)
* @brief		CCP 1 Timer interrupt
* @param
* @return
* @detail	 IRQ No.[51	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCT1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCT1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCP1Interrupt(void)
* @brief		CCP 1 input capture or output compare interrupt
* @param
* @return
* @detail	 IRQ No.[52	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCP1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCP1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCT2Interrupt(void)
* @brief		CCP 2 timer interrupt
* @param
* @return
* @detail	 IRQ No.[53	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCT2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCT2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCP2Interrupt(void)
* @brief		CCP 2 input capture or output compare interrupt
* @param
* @return
* @detail	 IRQ No.[54	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCP2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCP2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCT3Interrupt(void)
* @brief		CCP 3 timer interrupt
* @param
* @return
* @detail	 IRQ No.[55	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCT3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCT3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCP3Interrupt(void)
* @brief		CCP 3 input capture or output compare interrupt
* @param
* @return
* @detail	 IRQ No.[56	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCP3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCP3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCT4Interrupt(void)
* @brief		CCP 4 timer interrupt
* @param
* @return
* @detail	 IRQ No.[57	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCT4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCT4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCP4Interrupt(void)
* @brief		CCP 4 input capture or output compare interrupt
* @param
* @return
* @detail	 IRQ No.[58	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCP4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCP4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_C1RXInterrupt(void)
* @brief		CAN 1 RX Data Ready interrupt
* @param
* @return
* @detail	 IRQ No.[59	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _C1RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_C1RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_C1TXInterrupt(void)
* @brief		CAN 1 TX Data Request interrupt
* @param
* @return
* @detail	 IRQ No.[60	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _C1TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_C1TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_C1Interrupt(void)
* @brief		CAN 1 Combined Error interrupt
* @param
* @return
* @detail	 IRQ No.[61	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _C1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_C1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_C2RXInterrupt(void)
* @brief		CAN 2 RX Data Ready interrupt
* @param
* @return
* @detail	 IRQ No.[62	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _C2RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_C2RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_C2TXInterrupt(void)
* @brief		CAN 2 TX interrupt
* @param
* @return
* @detail	 IRQ No.[63	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _C2TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_C2TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_C2Interrupt(void)
* @brief		CAN 2 Combined Error interrupt
* @param
* @return
* @detail	 IRQ No.[64	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _C2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_C2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI1RXInterrupt(void)
* @brief		SPI 1 RX interrupt
* @param
* @return
* @detail	 IRQ No.[65	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI1RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI1RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI1TXInterrupt(void)
* @brief		SPI 1 TX interrupt
* @param
* @return
* @detail	 IRQ No.[66	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI1TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI1TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI1EInterrupt(void)
* @brief		SPI 1 Error interrupt
* @param
* @return
* @detail	 IRQ No.[67	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI1EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI1EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI2RXInterrupt(void)
* @brief		SPI 2 RX interrupt
* @param
* @return
* @detail	 IRQ No.[68	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI2RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI2RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI2TXInterrupt(void)
* @brief		SPI 2 TX interrupt
* @param
* @return
* @detail	 IRQ No.[69	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI2TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI2TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI2EInterrupt(void)
* @brief		SPI 2 Error interrupt
* @param
* @return
* @detail	 IRQ No.[70	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI2EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI2EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI3RXInterrupt(void)
* @brief		SPI 3 RX interrupt
* @param
* @return
* @detail	 IRQ No.[71	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI3RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI3RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI3TXInterrupt(void)
* @brief		SPI 3 TX interrupt
* @param
* @return
* @detail	 IRQ No.[72	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI3TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI3TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI3EInterrupt(void)
* @brief		SPI 3 Error interrupt
* @param
* @return
* @detail	 IRQ No.[73	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI3EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI3EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI4RXInterrupt(void)
* @brief		SPI 4 RX interrupt
* @param
* @return
* @detail	 IRQ No.[74	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI4RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI4RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI4TXInterrupt(void)
* @brief		SPI 4 TX interrupt
* @param
* @return
* @detail	 IRQ No.[75	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI4TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI4TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI4EInterrupt(void)
* @brief		SPI 4 Error interrupt
* @param
* @return
* @detail	 IRQ No.[76	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI4EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI4EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_DMA0Interrupt(void)
* @brief		DMA channel 0 interrupt
* @param
* @return
* @detail	 IRQ No.[77	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _DMA0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_DMA0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_DMA1Interrupt(void)
* @brief		DMA channel 1 interrupt
* @param
* @return
* @detail	 IRQ No.[78	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _DMA1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_DMA1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_DMA2Interrupt(void)
* @brief		DMA channel 2 interrupt
* @param
* @return
* @detail	 IRQ No.[79	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _DMA2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_DMA2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_DMA3Interrupt(void)
* @brief		DMA channel 3 interrupt
* @param
* @return
* @detail	 IRQ No.[80	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _DMA3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_DMA3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CMP1Interrupt(void)
* @brief		Analog Comparator 1 interrupt
* @param
* @return
* @detail	 IRQ No.[81	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CMP1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CMP1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CMP2Interrupt(void)
* @brief		Analog Comparator 2 interrupt
* @param
* @return
* @detail	 IRQ No.[82	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CMP2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CMP2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CMP3Interrupt(void)
* @brief		Analog Comparator 3 interrupt
* @param
* @return
* @detail	 IRQ No.[83	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CMP3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CMP3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CMP4Interrupt(void)
* @brief		Analog Comparator 4 interrupt
* @param
* @return
* @detail	 IRQ No.[84	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CMP4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CMP4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C1EInterrupt(void)
* @brief		I2C 1 Error interrupt
* @param
* @return
* @detail	 IRQ No.[85	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C1EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C1EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C1Interrupt(void)
* @brief		I2C 1 General interrupt
* @param
* @return
* @detail	 IRQ No.[86	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C1RXInterrupt(void)
* @brief		I2C 1 RX Buffer Full interrupt
* @param
* @return
* @detail	 IRQ No.[87	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C1RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C1RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C1TXInterrupt(void)
* @brief		I2C 1 TX Buffer Full interrupt
* @param
* @return
* @detail	 IRQ No.[88	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C1TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C1TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C2EInterrupt(void)
* @brief		I2C 2 Error interrupt
* @param
* @return
* @detail	 IRQ No.[89	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C2EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C2EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C2Interrupt(void)
* @brief		I2C 2 General interrupt
* @param
* @return
* @detail	 IRQ No.[90	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C2RXInterrupt(void)
* @brief		I2C 2 RX Buffer Full interrupt
* @param
* @return
* @detail	 IRQ No.[91	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C2RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C2RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C2TXInterrupt(void)
* @brief		I2C 2 TX Buffer Full interrupt
* @param
* @return
* @detail	 IRQ No.[92	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C2TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C2TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C3EInterrupt(void)
* @brief		I2C 3 Error interrupt
* @param
* @return
* @detail	 IRQ No.[93	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C3EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C3EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C3Interrupt(void)
* @brief		I2C 3 General interrupt
* @param
* @return
* @detail	 IRQ No.[94	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C3RXInterrupt(void)
* @brief		I2C 3 RX Buffer Full interrupt
* @param
* @return
* @detail	 IRQ No.[95	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C3RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C3RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C3TXInterrupt(void)
* @brief		I2C 3 TX Buffer Full interrupt
* @param
* @return
* @detail	 IRQ No.[96	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C3TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C3TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U1RXInterrupt(void)
* @brief		UART 1 RX interrupt
* @param
* @return
* @detail	 IRQ No.[98	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U1RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U1RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U1TXInterrupt(void)
* @brief		UART 1 TX interrupt
* @param
* @return
* @detail	 IRQ No.[99	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U1TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U1TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U1EInterrupt(void)
* @brief		UART 1 error interrupt
* @param
* @return
* @detail	 IRQ No.[100	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U1EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U1EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U1EVTInterrupt(void)
* @brief		UART 1 event interrupt
* @param
* @return
* @detail	 IRQ No.[101	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U1EVTInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U1EVTInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U2RXInterrupt(void)
* @brief		UART 2 RX interrupt
* @param
* @return
* @detail	 IRQ No.[102	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U2RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U2RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U2TXInterrupt(void)
* @brief		UART 2 TX interrupt
* @param
* @return
* @detail	 IRQ No.[103	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U2TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U2TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U2EInterrupt(void)
* @brief		UART 2 error interrupt
* @param
* @return
* @detail	 IRQ No.[104	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U2EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U2EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U2EVTInterrupt(void)
* @brief		UART 2 event interrupt
* @param
* @return
* @detail	 IRQ No.[105	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U2EVTInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U2EVTInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U3RXInterrupt(void)
* @brief		UART 3 RX interrupt
* @param
* @return
* @detail	 IRQ No.[106	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U3RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U3RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U3TXInterrupt(void)
* @brief		UART 3 TX interrupt
* @param
* @return
* @detail	 IRQ No.[107	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U3TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U3TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U3EInterrupt(void)
* @brief		UART 3 error interrupt
* @param
* @return
* @detail	 IRQ No.[108	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U3EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U3EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U3EVTInterrupt(void)
* @brief		UART 3 event interrupt
* @param
* @return
* @detail	 IRQ No.[109	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U3EVTInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U3EVTInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SENT1Interrupt(void)
* @brief		SENT1 RX and TX interrupt
* @param
* @return
* @detail	 IRQ No.[114	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SENT1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SENT1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SENT1EInterrupt(void)
* @brief		SENT 1 error interrupt
* @param
* @return
* @detail	 IRQ No.[115	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SENT1EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SENT1EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SENT2Interrupt(void)
* @brief		SENT1 RX and TX interrupt
* @param
* @return
* @detail	 IRQ No.[116	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SENT2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SENT2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SENT2EInterrupt(void)
* @brief		SENT 1 error interrupt
* @param
* @return
* @detail	 IRQ No.[117	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SENT2EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SENT2EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_DMA4Interrupt(void)
* @brief		DMA 4 interrupt
* @param
* @return
* @detail	 IRQ No.[118	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _DMA4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_DMA4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_DMA5Interrupt(void)
* @brief		DMA 5 interrupt
* @param
* @return
* @detail	 IRQ No.[119	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _DMA5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_DMA5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_DMA6Interrupt(void)
* @brief		DMA 6 interrupt
* @param
* @return
* @detail	 IRQ No.[120	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _DMA6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_DMA6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_DMA7Interrupt(void)
* @brief		DMA 7 interrupt
* @param
* @return
* @detail	 IRQ No.[121	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _DMA7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_DMA7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CNAInterrupt(void)
* @brief		Change notice A interrupt
* @param
* @return
* @detail	 IRQ No.[122	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CNAInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CNAInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CNBInterrupt(void)
* @brief		Change notice B interrupt
* @param
* @return
* @detail	 IRQ No.[123	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CNBInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CNBInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CNCInterrupt(void)
* @brief		Change notice C interrupt
* @param
* @return
* @detail	 IRQ No.[124	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CNCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CNCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CNDInterrupt(void)
* @brief		Change notice D interrupt
* @param
* @return
* @detail	 IRQ No.[125	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CNDInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CNDInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCT5Interrupt(void)
* @brief		CCP 5 Timer interrupt
* @param
* @return
* @detail	 IRQ No.[126	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCT5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCT5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCP5Interrupt(void)
* @brief		CCP 5 input capture or output compare interrupt
* @param
* @return
* @detail	 IRQ No.[127	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCP5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCP5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCT6Interrupt(void)
* @brief		CCP 6 Timer interrupt
* @param
* @return
* @detail	 IRQ No.[128	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCT6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCT6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCP6Interrupt(void)
* @brief		CCP 6 input capture or output compare interrupt
* @param
* @return
* @detail	 IRQ No.[129	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCP6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCP6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCT7Interrupt(void)
* @brief		CCP 7 Timer interrupt
* @param
* @return
* @detail	 IRQ No.[130	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCT7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCT7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCP7Interrupt(void)
* @brief		CCP 7 input capture or output compare interrupt
* @param
* @return
* @detail	 IRQ No.[131	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCP7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCP7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCT8Interrupt(void)
* @brief		CCP 8 Timer interrupt
* @param
* @return
* @detail	 IRQ No.[132	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCT8Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCT8Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCP8Interrupt(void)
* @brief		CCP 8 input capture or output compare interrupt
* @param
* @return
* @detail	 IRQ No.[133	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCP8Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCP8Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCT9Interrupt(void)
* @brief		CCP 9 Timer interrupt
* @param
* @return
* @detail	 IRQ No.[134	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCT9Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCT9Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCP9Interrupt(void)
* @brief		CCP 9 input capture or output compare interrupt
* @param
* @return
* @detail	 IRQ No.[135	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCP9Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCP9Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_QEI1Interrupt(void)
* @brief		QEI 1 position counter compare interrupt
* @param
* @return
* @detail	 IRQ No.[136	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _QEI1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_QEI1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_QEI2Interrupt(void)
* @brief		QEI 2 position counter compare interrupt
* @param
* @return
* @detail	 IRQ No.[137	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _QEI2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_QEI2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_QEI3Interrupt(void)
* @brief		QEI 3 position counter compare interrupt
* @param
* @return
* @detail	 IRQ No.[138	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _QEI3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_QEI3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_QEI4Interrupt(void)
* @brief		QEI 4 position counter compare interrupt
* @param
* @return
* @detail	 IRQ No.[139	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _QEI4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_QEI4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_BISS1EInterrupt(void)
* @brief		BISS 1 Transmission Error interrupt
* @param
* @return
* @detail	 IRQ No.[140	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _BISS1EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_BISS1EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_BISS1Interrupt(void)
* @brief		BISS 1 Transmission Finished interrupt
* @param
* @return
* @detail	 IRQ No.[141	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _BISS1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_BISS1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CRCInterrupt(void)
* @brief		CRC interrupt
* @param
* @return
* @detail	 IRQ No.[142	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CRCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CRCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_ICDInterrupt(void)
* @brief		ICD interrupt
* @param
* @return
* @detail	 IRQ No.[143	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _ICDInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_ICDInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PTGSTEPInterrupt(void)
* @brief		PTG Step interrupt
* @param
* @return
* @detail	 IRQ No.[145	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PTGSTEPInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PTGSTEPInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PTGWDTInterrupt(void)
* @brief		PTG WDT interrupt
* @param
* @return
* @detail	 IRQ No.[146	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PTGWDTInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PTGWDTInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PTG0Interrupt(void)
* @brief		PTG trigger 0 interrupt
* @param
* @return
* @detail	 IRQ No.[147	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PTG0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PTG0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PTG1Interrupt(void)
* @brief		PTG trigger 1 interrupt
* @param
* @return
* @detail	 IRQ No.[148	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PTG1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PTG1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PTG2Interrupt(void)
* @brief		PTG trigger 2 interrupt
* @param
* @return
* @detail	 IRQ No.[149	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PTG2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PTG2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PTG3Interrupt(void)
* @brief		PTG trigger 3 interrupt
* @param
* @return
* @detail	 IRQ No.[150	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PTG3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PTG3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWM5Interrupt(void)
* @brief		PWM Generator 5 interrupt
* @param
* @return
* @detail	 IRQ No.[151	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWM5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWM5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWM6Interrupt(void)
* @brief		PWM Generator 6 interrupt
* @param
* @return
* @detail	 IRQ No.[152	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWM6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWM6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWM7Interrupt(void)
* @brief		PWM Generator 7 interrupt
* @param
* @return
* @detail	 IRQ No.[153	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWM7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWM7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWM8Interrupt(void)
* @brief		PWM Generator 8 interrupt
* @param
* @return
* @detail	 IRQ No.[154	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWM8Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWM8Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH0Interrupt(void)
* @brief		ADC 1 data channel 0 done interrupt
* @param
* @return
* @detail	 IRQ No.[157	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP0Interrupt(void)
* @brief		ADC 1 digital comparator 0 interrupt
* @param
* @return
* @detail	 IRQ No.[158	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH1Interrupt(void)
* @brief		ADC 1 data channel 1 done interrupt
* @param
* @return
* @detail	 IRQ No.[159	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP1Interrupt(void)
* @brief		ADC 1 digital comparator 1 interrupt
* @param
* @return
* @detail	 IRQ No.[160	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH2Interrupt(void)
* @brief		ADC 1 data channel 2 done interrupt
* @param
* @return
* @detail	 IRQ No.[161	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP2Interrupt(void)
* @brief		ADC 1 digital comparator 2 interrupt
* @param
* @return
* @detail	 IRQ No.[162	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH3Interrupt(void)
* @brief		ADC 1 data channel 3 done interrupt
* @param
* @return
* @detail	 IRQ No.[163	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP3Interrupt(void)
* @brief		ADC 1 digital comparator 3 interrupt
* @param
* @return
* @detail	 IRQ No.[164	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH4Interrupt(void)
* @brief		ADC 1 data channel 4 done interrupt
* @param
* @return
* @detail	 IRQ No.[165	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP4Interrupt(void)
* @brief		ADC 1 digital comparator 4 interrupt
* @param
* @return
* @detail	 IRQ No.[166	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH5Interrupt(void)
* @brief		ADC 1 data channel 5 done interrupt
* @param
* @return
* @detail	 IRQ No.[167	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP5Interrupt(void)
* @brief		ADC 1 digital comparator 5 interrupt
* @param
* @return
* @detail	 IRQ No.[168	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH6Interrupt(void)
* @brief		ADC 1 data channel 6 done interrupt
* @param
* @return
* @detail	 IRQ No.[169	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP6Interrupt(void)
* @brief		ADC 1 digital comparator 6 interrupt
* @param
* @return
* @detail	 IRQ No.[170	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH7Interrupt(void)
* @brief		ADC 1 data channel 7 done interrupt
* @param
* @return
* @detail	 IRQ No.[171	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP7Interrupt(void)
* @brief		ADC 1 digital comparator 7 interrupt
* @param
* @return
* @detail	 IRQ No.[172	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH0Interrupt(void)
* @brief		ADC 2 data channel 0 done interrupt
* @param
* @return
* @detail	 IRQ No.[179	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP0Interrupt(void)
* @brief		ADC 2 digital comparator 0 interrupt
* @param
* @return
* @detail	 IRQ No.[180	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH1Interrupt(void)
* @brief		ADC 2 data channel 1 done interrupt
* @param
* @return
* @detail	 IRQ No.[181	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP1Interrupt(void)
* @brief		ADC 2 digital comparator 1 interrupt
* @param
* @return
* @detail	 IRQ No.[182	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH2Interrupt(void)
* @brief		ADC 2 data channel 2 done interrupt
* @param
* @return
* @detail	 IRQ No.[183	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP2Interrupt(void)
* @brief		ADC 2 digital comparator 2 interrupt
* @param
* @return
* @detail	 IRQ No.[184	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH3Interrupt(void)
* @brief		ADC 2 data channel 3 done interrupt
* @param
* @return
* @detail	 IRQ No.[185	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP3Interrupt(void)
* @brief		ADC 2 digital comparator 3 interrupt
* @param
* @return
* @detail	 IRQ No.[186	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH4Interrupt(void)
* @brief		ADC 2 data channel 4 done interrupt
* @param
* @return
* @detail	 IRQ No.[187	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP4Interrupt(void)
* @brief		ADC 2 digital comparator 4 interrupt
* @param
* @return
* @detail	 IRQ No.[188	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH5Interrupt(void)
* @brief		ADC 2 data channel 5 done interrupt
* @param
* @return
* @detail	 IRQ No.[189	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP5Interrupt(void)
* @brief		ADC 2 digital comparator 5 interrupt
* @param
* @return
* @detail	 IRQ No.[190	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH6Interrupt(void)
* @brief		ADC 2 data channel 6 done interrupt
* @param
* @return
* @detail	 IRQ No.[191	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP6Interrupt(void)
* @brief		ADC 2 digital comparator 6 interrupt
* @param
* @return
* @detail	 IRQ No.[192	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH7Interrupt(void)
* @brief		ADC 2 data channel 7 done interrupt
* @param
* @return
* @detail	 IRQ No.[193	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP7Interrupt(void)
* @brief		ADC 2 digital comparator 7 interrupt
* @param
* @return
* @detail	 IRQ No.[194	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CH0Interrupt(void)
* @brief		ADC 3 data channel 0 done interrupt
* @param
* @return
* @detail	 IRQ No.[201	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CH0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CH0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CMP0Interrupt(void)
* @brief		ADC 3 digital comparator 0 interrupt
* @param
* @return
* @detail	 IRQ No.[202	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CMP0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CMP0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CH1Interrupt(void)
* @brief		ADC 3 data channel 1 done interrupt
* @param
* @return
* @detail	 IRQ No.[203	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CH1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CH1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CMP1Interrupt(void)
* @brief		ADC 3 digital comparator 1 interrupt
* @param
* @return
* @detail	 IRQ No.[204	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CMP1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CMP1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CH2Interrupt(void)
* @brief		ADC 3 data channel 2 done interrupt
* @param
* @return
* @detail	 IRQ No.[205	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CH2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CH2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CMP2Interrupt(void)
* @brief		ADC 3 digital comparator 2 interrupt
* @param
* @return
* @detail	 IRQ No.[206	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CMP2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CMP2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CH3Interrupt(void)
* @brief		ADC 3 data channel 3 interrupt
* @param
* @return
* @detail	 IRQ No.[207	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CH3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CH3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CMP3Interrupt(void)
* @brief		ADC 3 digital comparator 3 interrupt
* @param
* @return
* @detail	 IRQ No.[208	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CMP3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CMP3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CH4Interrupt(void)
* @brief		ADC 3 data channel 4 interrupt
* @param
* @return
* @detail	 IRQ No.[209	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CH4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CH4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CMP4Interrupt(void)
* @brief		ADC 3 digital comparator 4 interrupt
* @param
* @return
* @detail	 IRQ No.[210	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CMP4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CMP4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CH5Interrupt(void)
* @brief		ADC 3 data channel 5 interrupt
* @param
* @return
* @detail	 IRQ No.[211	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CH5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CH5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CMP5Interrupt(void)
* @brief		ADC 3 digital comparator 5 interrupt
* @param
* @return
* @detail	 IRQ No.[212	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CMP5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CMP5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CH6Interrupt(void)
* @brief		ADC 3 data channel 6 interrupt
* @param
* @return
* @detail	 IRQ No.[213	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CH6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CH6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CMP6Interrupt(void)
* @brief		ADC 3 digital comparator 6 interrupt
* @param
* @return
* @detail	 IRQ No.[214	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CMP6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CMP6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CH7Interrupt(void)
* @brief		ADC 3 data channel 7 interrupt
* @param
* @return
* @detail	 IRQ No.[215	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CH7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CH7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD3CMP7Interrupt(void)
* @brief		ADC 3 digital comparator 7 interrupt
* @param
* @return
* @detail	 IRQ No.[216	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD3CMP7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD3CMP7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CH0Interrupt(void)
* @brief		ADC 4 data channel 0 interrupt
* @param
* @return
* @detail	 IRQ No.[221	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CH0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CH0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CMP0Interrupt(void)
* @brief		ADC 4 digital comparator 0 interrupt
* @param
* @return
* @detail	 IRQ No.[222	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CMP0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CMP0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CH1Interrupt(void)
* @brief		ADC 4 data channel 1 interrupt
* @param
* @return
* @detail	 IRQ No.[223	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CH1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CH1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CMP1Interrupt(void)
* @brief		ADC 4 digital comparator 1 interrupt
* @param
* @return
* @detail	 IRQ No.[224	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CMP1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CMP1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CH2Interrupt(void)
* @brief		ADC 4 data channel 2 interrupt
* @param
* @return
* @detail	 IRQ No.[225	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CH2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CH2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CMP2Interrupt(void)
* @brief		ADC 4 digital comparator 2 interrupt
* @param
* @return
* @detail	 IRQ No.[226	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CMP2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CMP2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CH3Interrupt(void)
* @brief		ADC 4 data channel 3 interrupt
* @param
* @return
* @detail	 IRQ No.[227	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CH3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CH3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CMP3Interrupt(void)
* @brief		ADC 4 digital comparator 3 interrupt
* @param
* @return
* @detail	 IRQ No.[228	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CMP3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CMP3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CH4Interrupt(void)
* @brief		ADC 4 data channel 4 interrupt
* @param
* @return
* @detail	 IRQ No.[229	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CH4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CH4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CMP4Interrupt(void)
* @brief		ADC 4 digital comparator 4 interrupt
* @param
* @return
* @detail	 IRQ No.[230	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CMP4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CMP4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CH5Interrupt(void)
* @brief		ADC 4 data channel 5 interrupt
* @param
* @return
* @detail	 IRQ No.[231	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CH5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CH5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CMP5Interrupt(void)
* @brief		ADC 4 digital comparator 5 interrupt
* @param
* @return
* @detail	 IRQ No.[232	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CMP5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CMP5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CH6Interrupt(void)
* @brief		ADC 4 data channel 6 interrupt
* @param
* @return
* @detail	 IRQ No.[233	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CH6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CH6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CMP6Interrupt(void)
* @brief		ADC 4 digital comparator 6 interrupt
* @param
* @return
* @detail	 IRQ No.[234	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CMP6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CMP6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CH7Interrupt(void)
* @brief		ADC 4 data channel 7 interrupt
* @param
* @return
* @detail	 IRQ No.[235	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CH7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CH7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD4CMP7Interrupt(void)
* @brief		ADC 4 digital comparator 7 interrupt
* @param
* @return
* @detail	 IRQ No.[236	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD4CMP7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD4CMP7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH0Interrupt(void)
* @brief		ADC 5 data channel 0 interrupt
* @param
* @return
* @detail	 IRQ No.[241	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP0Interrupt(void)
* @brief		ADC 5 digital comparator 0 interrupt
* @param
* @return
* @detail	 IRQ No.[242	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH1Interrupt(void)
* @brief		ADC 5 data channel 1 interrupt
* @param
* @return
* @detail	 IRQ No.[243	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP1Interrupt(void)
* @brief		ADC 5 digital comparator 1 interrupt
* @param
* @return
* @detail	 IRQ No.[244	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH2Interrupt(void)
* @brief		ADC 5 data channel 2 interrupt
* @param
* @return
* @detail	 IRQ No.[245	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP2Interrupt(void)
* @brief		ADC 5 digital comparator 2 interrupt
* @param
* @return
* @detail	 IRQ No.[246	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH3Interrupt(void)
* @brief		ADC 5 data channel 3 interrupt
* @param
* @return
* @detail	 IRQ No.[247	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP3Interrupt(void)
* @brief		ADC 5 digital comparator 3 interrupt
* @param
* @return
* @detail	 IRQ No.[248	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH4Interrupt(void)
* @brief		ADC 5 data channel 4 interrupt
* @param
* @return
* @detail	 IRQ No.[249	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP4Interrupt(void)
* @brief		ADC 5 digital comparator 4 interrupt
* @param
* @return
* @detail	 IRQ No.[250	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH5Interrupt(void)
* @brief		ADC 5 data channel 5 interrupt
* @param
* @return
* @detail	 IRQ No.[251	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP5Interrupt(void)
* @brief		ADC 5 digital comparator 5 interrupt
* @param
* @return
* @detail	 IRQ No.[252	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH6Interrupt(void)
* @brief		ADC 5 data channel 6 interrupt
* @param
* @return
* @detail	 IRQ No.[253	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP6Interrupt(void)
* @brief		ADC 5 digital comparator 6 interrupt
* @param
* @return
* @detail	 IRQ No.[254	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH7Interrupt(void)
* @brief		ADC 5 data channel 7 interrupt
* @param
* @return
* @detail	 IRQ No.[255	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP7Interrupt(void)
* @brief		ADC 5 digital comparator 7 interrupt
* @param
* @return
* @detail	 IRQ No.[256	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH8Interrupt(void)
* @brief		ADC 5 data channel 8 interrupt
* @param
* @return
* @detail	 IRQ No.[257	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH8Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH8Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP8Interrupt(void)
* @brief		ADC 5 digital comparator 8 interrupt
* @param
* @return
* @detail	 IRQ No.[258	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP8Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP8Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH9Interrupt(void)
* @brief		ADC 5 data channel 9 interrupt
* @param
* @return
* @detail	 IRQ No.[259	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH9Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH9Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP9Interrupt(void)
* @brief		ADC 5 digital comparator 9 interrupt
* @param
* @return
* @detail	 IRQ No.[260	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP9Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP9Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH10Interrupt(void)
* @brief		ADC 5 data channel 10 interrupt
* @param
* @return
* @detail	 IRQ No.[261	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH10Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH10Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP10Interrupt(void)
* @brief		ADC 5 digital comparator 10 interrupt
* @param
* @return
* @detail	 IRQ No.[262	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP10Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP10Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH11Interrupt(void)
* @brief		ADC 5 data channel 11 interrupt
* @param
* @return
* @detail	 IRQ No.[263	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH11Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH11Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP11Interrupt(void)
* @brief		ADC 5 digital comparator 11 interrupt
* @param
* @return
* @detail	 IRQ No.[264	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP11Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP11Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH12Interrupt(void)
* @brief		ADC 5 data channel 12 interrupt
* @param
* @return
* @detail	 IRQ No.[265	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH12Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH12Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP12Interrupt(void)
* @brief		ADC 5 digital comparator 12 interrupt
* @param
* @return
* @detail	 IRQ No.[266	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP12Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP12Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH13Interrupt(void)
* @brief		ADC 5 data channel 13 interrupt
* @param
* @return
* @detail	 IRQ No.[267	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH13Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH13Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP13Interrupt(void)
* @brief		ADC 5 digital comparator 13 interrupt
* @param
* @return
* @detail	 IRQ No.[268	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP13Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP13Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH14Interrupt(void)
* @brief		ADC 5 data channel 14 interrupt
* @param
* @return
* @detail	 IRQ No.[269	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH14Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH14Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP14Interrupt(void)
* @brief		ADC 5 digital comparator 14 interrupt
* @param
* @return
* @detail	 IRQ No.[270	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP14Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP14Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CH15Interrupt(void)
* @brief		ADC 5 data channel 15 interrupt
* @param
* @return
* @detail	 IRQ No.[271	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CH15Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CH15Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD5CMP15Interrupt(void)
* @brief		ADC 5 digital comparator 15 interrupt
* @param
* @return
* @detail	 IRQ No.[272	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD5CMP15Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD5CMP15Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CMP5Interrupt(void)
* @brief		Analog Comparator 5 interrupt
* @param
* @return
* @detail	 IRQ No.[273	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CMP5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CMP5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CMP6Interrupt(void)
* @brief		Analog Comparator 6 interrupt
* @param
* @return
* @detail	 IRQ No.[274	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CMP6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CMP6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CMP7Interrupt(void)
* @brief		Analog Comparator 7 interrupt
* @param
* @return
* @detail	 IRQ No.[275	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CMP7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CMP7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CMP8Interrupt(void)
* @brief		Analog Comparator 8 interrupt
* @param
* @return
* @detail	 IRQ No.[276	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CMP8Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CMP8Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC1PInterrupt(void)
* @brief		CLC 1 positive edge interrupt
* @param
* @return
* @detail	 IRQ No.[277	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC1PInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC1PInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC1NInterrupt(void)
* @brief		CLC 1 negative edge interrupt
* @param
* @return
* @detail	 IRQ No.[278	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC1NInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC1NInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC2PInterrupt(void)
* @brief		CLC 2 positive edge interrupt
* @param
* @return
* @detail	 IRQ No.[279	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC2PInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC2PInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC2NInterrupt(void)
* @brief		CLC 2 negative edge interrupt
* @param
* @return
* @detail	 IRQ No.[280	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC2NInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC2NInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC3PInterrupt(void)
* @brief		CLC 3 positive edge interrupt
* @param
* @return
* @detail	 IRQ No.[281	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC3PInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC3PInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC3NInterrupt(void)
* @brief		CLC 3 negative edge interrupt
* @param
* @return
* @detail	 IRQ No.[282	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC3NInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC3NInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC4PInterrupt(void)
* @brief		CLC 4 positive edge interrupt
* @param
* @return
* @detail	 IRQ No.[283	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC4PInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC4PInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC4NInterrupt(void)
* @brief		CLC 4 negative edge interrupt
* @param
* @return
* @detail	 IRQ No.[284	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC4NInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC4NInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC5PInterrupt(void)
* @brief		CLC 5 positive edge interrupt
* @param
* @return
* @detail	 IRQ No.[285	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC5PInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC5PInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC5NInterrupt(void)
* @brief		CLC 5 negative edge interrupt
* @param
* @return
* @detail	 IRQ No.[286	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC5NInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC5NInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC6PInterrupt(void)
* @brief		CLC 6 positive edge interrupt
* @param
* @return
* @detail	 IRQ No.[287	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC6PInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC6PInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC6NInterrupt(void)
* @brief		CLC 6 negative edge interrupt
* @param
* @return
* @detail	 IRQ No.[288	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC6NInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC6NInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC7PInterrupt(void)
* @brief		CLC 7 positive edge interrupt
* @param
* @return
* @detail	 IRQ No.[289	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC7PInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC7PInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC7NInterrupt(void)
* @brief		CLC 7 negative edge interrupt
* @param
* @return
* @detail	 IRQ No.[290	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC7NInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC7NInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC8PInterrupt(void)
* @brief		CLC 8 positive edge interrupt
* @param
* @return
* @detail	 IRQ No.[291	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC8PInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC8PInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC8NInterrupt(void)
* @brief		CLC 8 negative edge interrupt
* @param
* @return
* @detail	 IRQ No.[292	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC8NInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC8NInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC9PInterrupt(void)
* @brief		CLC 9 positive edge interrupt
* @param
* @return
* @detail	 IRQ No.[293	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC9PInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC9PInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC9NInterrupt(void)
* @brief		CLC 9 negative edge interrupt
* @param
* @return
* @detail	 IRQ No.[294	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC9NInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC9NInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC10PInterrupt(void)
* @brief		CLC 10 positive edge interrupt
* @param
* @return
* @detail	 IRQ No.[295	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC10PInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC10PInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC10NInterrupt(void)
* @brief		CLC 10 negative edge interrupt
* @param
* @return
* @detail	 IRQ No.[296	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC10NInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC10NInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CNEInterrupt(void)
* @brief		Change Notice E interrupt
* @param
* @return
* @detail	 IRQ No.[314	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CNEInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CNEInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CNFInterrupt(void)
* @brief		Change Notice F interrupt
* @param
* @return
* @detail	 IRQ No.[315	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CNFInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CNFInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CNGInterrupt(void)
* @brief		Change Notice G interrupt
* @param
* @return
* @detail	 IRQ No.[316	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CNGInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CNGInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CNHInterrupt(void)
* @brief		Change Notice H interrupt
* @param
* @return
* @detail	 IRQ No.[317	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CNHInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CNHInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_ITCInterrupt(void)
* @brief		Touch ADC interrupt interrupt
* @param
* @return
* @detail	 IRQ No.[327	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _ITCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_ITCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM1Interrupt(void)
* @brief		GPIO integrity monitor 1 interrupt
* @param
* @return
* @detail	 IRQ No.[332	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM2Interrupt(void)
* @brief		GPIO integrity monitor 2 interrupt
* @param
* @return
* @detail	 IRQ No.[333	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM3Interrupt(void)
* @brief		GPIO integrity monitor 3 interrupt
* @param
* @return
* @detail	 IRQ No.[334	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM4Interrupt(void)
* @brief		GPIO integrity monitor 4 interrupt
* @param
* @return
* @detail	 IRQ No.[335	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM5Interrupt(void)
* @brief		GPIO integrity monitor 5 interrupt
* @param
* @return
* @detail	 IRQ No.[336	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM6Interrupt(void)
* @brief		GPIO integrity monitor 6 interrupt
* @param
* @return
* @detail	 IRQ No.[337	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM7Interrupt(void)
* @brief		GPIO integrity monitor 7 interrupt
* @param
* @return
* @detail	 IRQ No.[338	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM8Interrupt(void)
* @brief		GPIO integrity monitor 8 interrupt
* @param
* @return
* @detail	 IRQ No.[339	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM8Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM8Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM9Interrupt(void)
* @brief		GPIO integrity monitor 9 interrupt
* @param
* @return
* @detail	 IRQ No.[340	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM9Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM9Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM10Interrupt(void)
* @brief		GPIO integrity monitor 10 interrupt
* @param
* @return
* @detail	 IRQ No.[341	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM10Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM10Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM11Interrupt(void)
* @brief		GPIO integrity monitor 11 interrupt
* @param
* @return
* @detail	 IRQ No.[342	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM11Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM11Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM12Interrupt(void)
* @brief		GPIO integrity monitor 12 interrupt
* @param
* @return
* @detail	 IRQ No.[343	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM12Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM12Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM13Interrupt(void)
* @brief		GPIO integrity monitor 13 interrupt
* @param
* @return
* @detail	 IRQ No.[344	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM13Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM13Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM14Interrupt(void)
* @brief		GPIO integrity monitor 14 interrupt
* @param
* @return
* @detail	 IRQ No.[345	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM14Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM14Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM15Interrupt(void)
* @brief		GPIO integrity monitor 15 interrupt
* @param
* @return
* @detail	 IRQ No.[346	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM15Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM15Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM16Interrupt(void)
* @brief		GPIO integrity monitor 16 interrupt
* @param
* @return
* @detail	 IRQ No.[347	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM16Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM16Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_APWM1Interrupt(void)
* @brief		APWM Generator 1 interrupt
* @param
* @return
* @detail	 IRQ No.[348	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _APWM1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_APWM1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_APWM2Interrupt(void)
* @brief		APWM Generator 2 interrupt
* @param
* @return
* @detail	 IRQ No.[349	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _APWM2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_APWM2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_APWM3Interrupt(void)
* @brief		APWM Generator 3 interrupt
* @param
* @return
* @detail	 IRQ No.[350	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _APWM3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_APWM3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_APWM4Interrupt(void)
* @brief		APWM Generator 4 interrupt
* @param
* @return
* @detail	 IRQ No.[351	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _APWM4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_APWM4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_APWMEVTAInterrupt(void)
* @brief		APWM Event A interrupt
* @param
* @return
* @detail	 IRQ No.[352	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _APWMEVTAInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_APWMEVTAInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_APWMEVTBInterrupt(void)
* @brief		APWM Event B interrupt
* @param
* @return
* @detail	 IRQ No.[353	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _APWMEVTBInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_APWMEVTBInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_APWMEVTCInterrupt(void)
* @brief		APWM Event C interrupt
* @param
* @return
* @detail	 IRQ No.[354	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _APWMEVTCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_APWMEVTCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_APWMEVTDInterrupt(void)
* @brief		APWM Event D interrupt
* @param
* @return
* @detail	 IRQ No.[355	]
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _APWMEVTDInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_APWMEVTDInterrupt);
#endif
}
