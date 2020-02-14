/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define EXP_SPISCLK_Pin GPIO_PIN_2
#define EXP_SPISCLK_GPIO_Port GPIOE
#define EXP_SPISCLK_EXTI_IRQn EXTI2_IRQn
#define EXP_CS_Pin GPIO_PIN_4
#define EXP_CS_GPIO_Port GPIOE
#define EXP_SPIMISO_Pin GPIO_PIN_5
#define EXP_SPIMISO_GPIO_Port GPIOE
#define EXP_SPIMISO_EXTI_IRQn EXTI9_5_IRQn
#define EXP_SPIMOSI_Pin GPIO_PIN_6
#define EXP_SPIMOSI_GPIO_Port GPIOE
#define SENSBRD1_SEL_Pin GPIO_PIN_1
#define SENSBRD1_SEL_GPIO_Port GPIOC
#define AZValve1_Pin GPIO_PIN_2
#define AZValve1_GPIO_Port GPIOC
#define DIAGLED_Pin GPIO_PIN_3
#define DIAGLED_GPIO_Port GPIOC
#define COMPORT_TX_Pin GPIO_PIN_2
#define COMPORT_TX_GPIO_Port GPIOA
#define COMPORT_RX_Pin GPIO_PIN_3
#define COMPORT_RX_GPIO_Port GPIOA
#define WIFI_SPISCK_Pin GPIO_PIN_5
#define WIFI_SPISCK_GPIO_Port GPIOA
#define WIFI_SPIMISO_Pin GPIO_PIN_6
#define WIFI_SPIMISO_GPIO_Port GPIOA
#define WIFI_SPIMOSI_Pin GPIO_PIN_7
#define WIFI_SPIMOSI_GPIO_Port GPIOA
#define WIFI_Enable_Pin GPIO_PIN_4
#define WIFI_Enable_GPIO_Port GPIOC
#define COMPORT_EN_Pin GPIO_PIN_5
#define COMPORT_EN_GPIO_Port GPIOC
#define ADC_IN_Pin GPIO_PIN_1
#define ADC_IN_GPIO_Port GPIOB
#define DINCH1_Pin GPIO_PIN_2
#define DINCH1_GPIO_Port GPIOB
#define DINCH2_Pin GPIO_PIN_7
#define DINCH2_GPIO_Port GPIOE
#define DOUTCH1_Pin GPIO_PIN_8
#define DOUTCH1_GPIO_Port GPIOE
#define DOUTCH2_Pin GPIO_PIN_9
#define DOUTCH2_GPIO_Port GPIOE
#define DAC_ERROR_Pin GPIO_PIN_10
#define DAC_ERROR_GPIO_Port GPIOE
#define DAC_RESET_Pin GPIO_PIN_11
#define DAC_RESET_GPIO_Port GPIOE
#define DAC_SPISCLK_Pin GPIO_PIN_12
#define DAC_SPISCLK_GPIO_Port GPIOE
#define DAC_SIPIMISO_Pin GPIO_PIN_13
#define DAC_SIPIMISO_GPIO_Port GPIOE
#define DAC_SIPIMOSI_Pin GPIO_PIN_14
#define DAC_SIPIMOSI_GPIO_Port GPIOE
#define AO_CS_Pin GPIO_PIN_15
#define AO_CS_GPIO_Port GPIOE
#define SD_SPISCLK_Pin GPIO_PIN_13
#define SD_SPISCLK_GPIO_Port GPIOB
#define SD_SPIMISO_Pin GPIO_PIN_14
#define SD_SPIMISO_GPIO_Port GPIOB
#define SD_SPIMOSI_Pin GPIO_PIN_15
#define SD_SPIMOSI_GPIO_Port GPIOB
#define SD_CS_Pin GPIO_PIN_8
#define SD_CS_GPIO_Port GPIOD
#define ESP_GPIO_0_Pin GPIO_PIN_9
#define ESP_GPIO_0_GPIO_Port GPIOD
#define AI1mASel_Pin GPIO_PIN_12
#define AI1mASel_GPIO_Port GPIOD
#define AI2mASel_Pin GPIO_PIN_13
#define AI2mASel_GPIO_Port GPIOD
#define AI3mASel_Pin GPIO_PIN_14
#define AI3mASel_GPIO_Port GPIOD
#define AI4mASel_Pin GPIO_PIN_15
#define AI4mASel_GPIO_Port GPIOD
#define DISPLAY_TX_Pin GPIO_PIN_6
#define DISPLAY_TX_GPIO_Port GPIOC
#define DISPLAY_RX_Pin GPIO_PIN_7
#define DISPLAY_RX_GPIO_Port GPIOC
#define PIXXI_ENABLE_Pin GPIO_PIN_8
#define PIXXI_ENABLE_GPIO_Port GPIOC
#define SENSBRD2_SEL_Pin GPIO_PIN_9
#define SENSBRD2_SEL_GPIO_Port GPIOC
#define AZValve2_Pin GPIO_PIN_8
#define AZValve2_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define SENS_SPISCLK_Pin GPIO_PIN_10
#define SENS_SPISCLK_GPIO_Port GPIOC
#define SENS_SPIMISO_Pin GPIO_PIN_11
#define SENS_SPIMISO_GPIO_Port GPIOC
#define SENS_SPIMOSI_Pin GPIO_PIN_12
#define SENS_SPIMOSI_GPIO_Port GPIOC
#define AIMUXADR1_Pin GPIO_PIN_1
#define AIMUXADR1_GPIO_Port GPIOD
#define AIMuxADR2_Pin GPIO_PIN_2
#define AIMuxADR2_GPIO_Port GPIOD
#define AIMuxEnable_Pin GPIO_PIN_3
#define AIMuxEnable_GPIO_Port GPIOD
#define AIVOLTDIVSEL_Pin GPIO_PIN_4
#define AIVOLTDIVSEL_GPIO_Port GPIOD
#define SensMuxAdrA_Pin GPIO_PIN_5
#define SensMuxAdrA_GPIO_Port GPIOD
#define SensMuxAdrB_Pin GPIO_PIN_6
#define SensMuxAdrB_GPIO_Port GPIOD
#define SensMuxAdrC_Pin GPIO_PIN_7
#define SensMuxAdrC_GPIO_Port GPIOD
#define S_RPort_Sel_Pin GPIO_PIN_5
#define S_RPort_Sel_GPIO_Port GPIOB
#define S_RPORT_RX_Pin GPIO_PIN_6
#define S_RPORT_RX_GPIO_Port GPIOB
#define S_RPORT_TX_Pin GPIO_PIN_7
#define S_RPORT_TX_GPIO_Port GPIOB
#define S_RPORT_EN_Pin GPIO_PIN_8
#define S_RPORT_EN_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
