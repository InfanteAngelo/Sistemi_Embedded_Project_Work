/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Progetto_Gruppo21_IZ.h
 *
 * Code generated for Simulink model 'Progetto_Gruppo21_IZ'.
 *
 * Model version                  : 1.90
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Sun Jun 22 16:52:13 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Progetto_Gruppo21_IZ_h_
#define Progetto_Gruppo21_IZ_h_
#ifndef Progetto_Gruppo21_IZ_COMMON_INCLUDES_
#define Progetto_Gruppo21_IZ_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "main.h"
#include "stm_lpuart.h"
#endif                               /* Progetto_Gruppo21_IZ_COMMON_INCLUDES_ */

#include "Progetto_Gruppo21_IZ_types.h"
#include "rt_zcfcn.h"
#include "rtGetNaN.h"
#include <stddef.h>
#include "zero_crossing_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  char_T ASCIItoString[256];           /* '<Root>/ASCII to String' */
  char_T msgOut[256];                  /* '<Root>/Chart' */
  real_T outputVeneziane;              /* '<Root>/Chart' */
  real_T outputLuci;                   /* '<Root>/Chart' */
  real_T outputRiscaldamento;          /* '<Root>/Chart' */
} B_Progetto_Gruppo21_IZ_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_UARTRead_Pro_T obj; /* '<Root>/UART//USART Read' */
  stm32cube_blocks_UARTWrite_Pr_T obj_g;/* '<Root>/UART//USART Write' */
  stm32cube_blocks_PWMOutput_Pr_T obj_e;/* '<S27>/PWM Output' */
  stm32cube_blocks_PWMOutput_Pr_T obj_l;/* '<S25>/PWM Output' */
  real_T valoreVeneziane;              /* '<Root>/Chart' */
  real_T valoreRiscaldamento;          /* '<Root>/Chart' */
  real_T modLuci;                      /* '<Root>/Chart' */
  real_T valoreTemporizzazione;        /* '<Root>/Chart' */
  real_T tmpVeneziane;                 /* '<Root>/Chart' */
  real_T tmpRiscaldamento;             /* '<Root>/Chart' */
  real_T tmpTemporizzazione;           /* '<Root>/Chart' */
  real_T tmpModLuci;                   /* '<Root>/Chart' */
  real_T luci;                         /* '<Root>/Chart' */
  real_T riscaldamento;                /* '<Root>/Chart' */
  real_T tempo;                        /* '<Root>/Chart' */
  real_T veneziane;                    /* '<Root>/Chart' */
  char_T msg[256];                     /* '<Root>/Chart' */
  uint32_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint8_T is_active_c3_Progetto_Gruppo21_;/* '<Root>/Chart' */
  uint8_T is_Inizializzazione;         /* '<Root>/Chart' */
  uint8_T is_Gestore_logica;           /* '<Root>/Chart' */
  uint8_T is_Stato_di_configurazione;  /* '<Root>/Chart' */
  uint8_T is_Accensione_luci;          /* '<Root>/Chart' */
  uint8_T is_Luci_temporizzate;        /* '<Root>/Chart' */
  uint8_T is_Configurazione_riscaldamento;/* '<Root>/Chart' */
  uint8_T is_Regolazione_veneziane;    /* '<Root>/Chart' */
  uint8_T is_Led_utente;               /* '<Root>/Chart' */
  uint8_T is_Gestione_Pulsanti_Luci;   /* '<Root>/Chart' */
  uint8_T is_Gestore_pulsante_Luci;    /* '<Root>/Chart' */
  uint8_T is_Gestore_pulsante_Luci_TMP;/* '<Root>/Chart' */
  uint8_T temporalCounter_i2;          /* '<Root>/Chart' */
  uint8_T temporalCounter_i3;          /* '<Root>/Chart' */
  uint8_T previousZC;                  /* '<Root>/Chart' */
  uint8_T previousZC_m;                /* '<Root>/Chart' */
  uint8_T previousZC_g;                /* '<Root>/Chart' */
  uint8_T previousZC_c;                /* '<Root>/Chart' */
  uint8_T previousZC_a;                /* '<Root>/Chart' */
  uint8_T previousZC_cs;               /* '<Root>/Chart' */
  uint8_T previousZC_mc;               /* '<Root>/Chart' */
  boolean_T isValidRiscaldamento;      /* '<Root>/Chart' */
  boolean_T isValidVeneziane;          /* '<Root>/Chart' */
  boolean_T isValidTemporizzazione;    /* '<Root>/Chart' */
  boolean_T configurazioneValida;      /* '<Root>/Chart' */
  boolean_T stopTimer;                 /* '<Root>/Chart' */
} DW_Progetto_Gruppo21_IZ_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState SFunction_edgeDetectionSignal_Z;/* '<Root>/Chart' */
  ZCSigState SFunction_edgeDetectionSignal_h;/* '<Root>/Chart' */
  ZCSigState SFunction_edgeDetectionSigna_hs;/* '<Root>/Chart' */
  ZCSigState SFunction_edgeDetectionSign_hsa;/* '<Root>/Chart' */
  ZCSigState SFunction_edgeDetectionSig_hsa4;/* '<Root>/Chart' */
  ZCSigState SFunction_edgeDetectionSi_hsa4f;/* '<Root>/Chart' */
  ZCSigState SFunction_edgeDetectionS_hsa4fq;/* '<Root>/Chart' */
} PrevZCX_Progetto_Gruppo21_IZ_T;

/* Real-time Model Data Structure */
struct tag_RTM_Progetto_Gruppo21_IZ_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Progetto_Gruppo21_IZ_T Progetto_Gruppo21_IZ_B;

/* Block states (default storage) */
extern DW_Progetto_Gruppo21_IZ_T Progetto_Gruppo21_IZ_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_Progetto_Gruppo21_IZ_T Progetto_Gruppo21_IZ_PrevZCX;

/* Model entry point functions */
extern void Progetto_Gruppo21_IZ_initialize(void);
extern void Progetto_Gruppo21_IZ_step(void);
extern void Progetto_Gruppo21_IZ_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Progetto_Gruppo21_IZ_T *const Progetto_Gruppo21_IZ_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Progetto_Gruppo21_IZ'
 * '<S1>'   : 'Progetto_Gruppo21_IZ/Chart'
 * '<S2>'   : 'Progetto_Gruppo21_IZ/Digital Port Read'
 * '<S3>'   : 'Progetto_Gruppo21_IZ/Digital Port Read1'
 * '<S4>'   : 'Progetto_Gruppo21_IZ/Digital Port Read2'
 * '<S5>'   : 'Progetto_Gruppo21_IZ/Digital Port Read3'
 * '<S6>'   : 'Progetto_Gruppo21_IZ/Digital Port Write'
 * '<S7>'   : 'Progetto_Gruppo21_IZ/Digital Port Write1'
 * '<S8>'   : 'Progetto_Gruppo21_IZ/MATLAB Function'
 * '<S9>'   : 'Progetto_Gruppo21_IZ/MATLAB Function1'
 * '<S10>'  : 'Progetto_Gruppo21_IZ/PWM Output'
 * '<S11>'  : 'Progetto_Gruppo21_IZ/PWM Output1'
 * '<S12>'  : 'Progetto_Gruppo21_IZ/Digital Port Read/ECSoC'
 * '<S13>'  : 'Progetto_Gruppo21_IZ/Digital Port Read/ECSoC/ECSimCodegen'
 * '<S14>'  : 'Progetto_Gruppo21_IZ/Digital Port Read1/ECSoC'
 * '<S15>'  : 'Progetto_Gruppo21_IZ/Digital Port Read1/ECSoC/ECSimCodegen'
 * '<S16>'  : 'Progetto_Gruppo21_IZ/Digital Port Read2/ECSoC'
 * '<S17>'  : 'Progetto_Gruppo21_IZ/Digital Port Read2/ECSoC/ECSimCodegen'
 * '<S18>'  : 'Progetto_Gruppo21_IZ/Digital Port Read3/ECSoC'
 * '<S19>'  : 'Progetto_Gruppo21_IZ/Digital Port Read3/ECSoC/ECSimCodegen'
 * '<S20>'  : 'Progetto_Gruppo21_IZ/Digital Port Write/ECSoC'
 * '<S21>'  : 'Progetto_Gruppo21_IZ/Digital Port Write/ECSoC/ECSimCodegen'
 * '<S22>'  : 'Progetto_Gruppo21_IZ/Digital Port Write1/ECSoC'
 * '<S23>'  : 'Progetto_Gruppo21_IZ/Digital Port Write1/ECSoC/ECSimCodegen'
 * '<S24>'  : 'Progetto_Gruppo21_IZ/PWM Output/ECSoC'
 * '<S25>'  : 'Progetto_Gruppo21_IZ/PWM Output/ECSoC/ECSimCodegen'
 * '<S26>'  : 'Progetto_Gruppo21_IZ/PWM Output1/ECSoC'
 * '<S27>'  : 'Progetto_Gruppo21_IZ/PWM Output1/ECSoC/ECSimCodegen'
 */
#endif                                 /* Progetto_Gruppo21_IZ_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
