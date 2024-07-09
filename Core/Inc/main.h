/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B_Pin GPIO_PIN_4
#define B_GPIO_Port GPIOE
#define Z_Pin GPIO_PIN_5
#define Z_GPIO_Port GPIOE
#define Z_EXTI_IRQn EXTI9_5_IRQn
#define DIR_Pin GPIO_PIN_6
#define DIR_GPIO_Port GPIOE
#define intrupt1_Pin GPIO_PIN_2
#define intrupt1_GPIO_Port GPIOF
#define intrupt1_EXTI_IRQn EXTI2_IRQn
#define intrupt2_Pin GPIO_PIN_3
#define intrupt2_GPIO_Port GPIOF
#define intrupt2_EXTI_IRQn EXTI3_IRQn
#define pwm_Pin GPIO_PIN_6
#define pwm_GPIO_Port GPIOF
#define A_Pin GPIO_PIN_7
#define A_GPIO_Port GPIOF
#define A_EXTI_IRQn EXTI9_5_IRQn
#define LED1_Pin GPIO_PIN_4
#define LED1_GPIO_Port GPIOG
#define LED2_Pin GPIO_PIN_5
#define LED2_GPIO_Port GPIOG

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
