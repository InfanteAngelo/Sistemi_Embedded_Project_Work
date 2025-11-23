/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Progetto_Gruppo21_IZ.c
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

#include "Progetto_Gruppo21_IZ.h"
#include "rtwtypes.h"
#include "Progetto_Gruppo21_IZ_types.h"
#include <string.h>
#include <math.h>
#include "Progetto_Gruppo21_IZ_private.h"
#include "rt_nonfinite.h"
#include "stm_timer_ll.h"
#include <stdlib.h>
#include <stddef.h>

/* Named constants for Chart: '<Root>/Chart' */
#define IN_Conferma_valore_riscaldament ((uint8_T)2U)
#define IN_Conferma_valore_temporizzazi ((uint8_T)2U)
#define IN_Configurazione_riscaldamento ((uint8_T)2U)
#define IN_Stampa_messaggio_configurazi ((uint8_T)6U)
#define IN_Stampa_valore_riscaldamento ((uint8_T)4U)
#define IN_Stampa_valore_temporizzazion ((uint8_T)4U)
#define Pr_IN_Conferma_valore_veneziane ((uint8_T)2U)
#define Pr_IN_Gestore_pulsante_Luci_TMP ((uint8_T)2U)
#define Prog_IN_Stampa_valore_veneziane ((uint8_T)4U)
#define Prog_IN_Stato_di_configurazione ((uint8_T)2U)
#define Proge_IN_Buffer_temporizzazione ((uint8_T)1U)
#define Proget_IN_Gestore_pulsante_Luci ((uint8_T)1U)
#define Proget_IN_Regolazione_veneziane ((uint8_T)4U)
#define Proget_IN_Uscita_configurazione ((uint8_T)8U)
#define Progett_IN_Buffer_riscaldamento ((uint8_T)1U)
#define Progett_IN_Salva_configurazione ((uint8_T)5U)
#define Progetto_G_IN_Luci_temporizzate ((uint8_T)3U)
#define Progetto_G_IN_Stampa_iniziale_m ((uint8_T)3U)
#define Progetto_Gr_IN_Buffer_veneziane ((uint8_T)1U)
#define Progetto_Gr_IN_Caso_luci_accese ((uint8_T)1U)
#define Progetto_Gr_IN_Caso_luci_spente ((uint8_T)2U)
#define Progetto_Gru_IN_Accensione_luci ((uint8_T)1U)
#define Progetto_Gru_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Progetto_Gru_IN_Stampa_iniziale ((uint8_T)4U)
#define Progetto_Gru_IN_Stato_Operativo ((uint8_T)1U)
#define Progetto_Gru_IN_Stato_di_Attesa ((uint8_T)3U)
#define Progetto_Grup_IN_Stato_Inattivo ((uint8_T)2U)
#define Progetto_Grupp_IN_Caso_luci_tmp ((uint8_T)3U)
#define Progetto_Grupp_IN_Errore_uscita ((uint8_T)3U)
#define Progetto_Gruppo21_IN_Fine_Tempo ((uint8_T)3U)
#define Progetto_Gruppo21_IN_Spegni_led ((uint8_T)2U)
#define Progetto_Gruppo21_IZ_OFF       (0.0)
#define Progetto_Gruppo21_IZ_ON        (1.0)
#define Progetto_Gruppo2_IN_Accendi_led ((uint8_T)1U)
#define Progetto_Gruppo2_IN_Luci_accese ((uint8_T)1U)
#define Progetto_Gruppo2_IN_Luci_spente ((uint8_T)2U)
#define Progetto_Gruppo_IN_Stato_Attivo ((uint8_T)1U)
#define Progetto_Gruppo_IN_Stato_errore ((uint8_T)7U)

/* Block signals (default storage) */
B_Progetto_Gruppo21_IZ_T Progetto_Gruppo21_IZ_B;

/* Block states (default storage) */
DW_Progetto_Gruppo21_IZ_T Progetto_Gruppo21_IZ_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_Progetto_Gruppo21_IZ_T Progetto_Gruppo21_IZ_PrevZCX;

/* Real-time model */
static RT_MODEL_Progetto_Gruppo21_IZ_T Progetto_Gruppo21_IZ_M_;
RT_MODEL_Progetto_Gruppo21_IZ_T *const Progetto_Gruppo21_IZ_M =
  &Progetto_Gruppo21_IZ_M_;

/* Forward declaration for local functions */
static void Progetto_Gruppo2_emxInit_char_T(emxArray_char_T_Progetto_Grup_T
  **pEmxArray, int32_T numDimensions);
static void Proget_emxEnsureCapacity_char_T(emxArray_char_T_Progetto_Grup_T
  *emxArray, int32_T oldNumel);
static void Progetto_Gruppo2_emxFree_char_T(emxArray_char_T_Progetto_Grup_T
  **pEmxArray);
static void Prog_convertitoreDoubleToString(real_T val,
  emxArray_char_T_Progetto_Grup_T *str);
static void Progetto__msgAggiornamentoStato(real_T val_riscaldamento, real_T
  val_veneziane, real_T val_luci, real_T val_temporizzazione,
  emxArray_char_T_Progetto_Grup_T *outString_Value);
static real_T Progetto_Gru_rangeRiscaldamento(real_T val);
static void enter_internal_Stato_Operativo(void);
static void enter_internal_Stato_di_configu(void);
static boolean_T Progetto_Gruppo21_IZ_string_ge(const
  emxArray_char_T_Progetto_Grup_T *obj1_Value);
static boolean_T Progetto_Gruppo21_IZ_string_le(const
  emxArray_char_T_Progetto_Grup_T *obj1_Value);
static void enter_atomic_Buffer_temporizzaz(void);
static boolean_T Prog_checkValoreTemporizzazione(const
  emxArray_char_T_Progetto_Grup_T *str_Value);
static real_T Progetto_Gruppo21__convertitore(const
  emxArray_char_T_Progetto_Grup_T *str_Value);
static void Progetto_Gruppo_Accensione_luci(const uint32_T *UARTUSARTRead_o2);
static boolean_T Proget_checkValoreRiscaldamento(const
  emxArray_char_T_Progetto_Grup_T *str_Value);
static boolean_T Progetto_G_checkValoreVeneziane(const
  emxArray_char_T_Progetto_Grup_T *str_Value);
static void Progetto__Regolazione_veneziane(const uint32_T *UARTUSARTRead_o2);
static void Stampa_messaggio_configurazione(const uint32_T *UARTUSARTRead_o2);
static void exit_internal_Stato_di_configur(void);
static void Progetto_Gruppo2_Gestore_logica(const uint32_T *UARTUSARTRead_o2);
static void enter_internal_Gestore_pulsante(void);
static void Progetto_Grupp_SystemCore_setup(stm32cube_blocks_UARTRead_Pro_T *obj);
static void Progetto_Gr_UARTWrite_setupImpl(stm32cube_blocks_UARTWrite_Pr_T *obj);
static void Progetto_Gr_PWMOutput_setupImpl(stm32cube_blocks_PWMOutput_Pr_T *obj);
static void Progetto__PWMOutput_setupImpl_o(stm32cube_blocks_PWMOutput_Pr_T *obj);
static boolean_T resultZC0;
static boolean_T resultZC1;
static boolean_T resultZC2;
static boolean_T resultZC3;
static boolean_T resultZC4;
static boolean_T resultZC5;
static boolean_T resultZC6;
static void Progetto_Gruppo2_emxInit_char_T(emxArray_char_T_Progetto_Grup_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_char_T_Progetto_Grup_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_char_T_Progetto_Grup_T *)malloc(sizeof
    (emxArray_char_T_Progetto_Grup_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * (uint32_T)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void Proget_emxEnsureCapacity_char_T(emxArray_char_T_Progetto_Grup_T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = malloc((uint32_T)i * sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void Progetto_Gruppo2_emxFree_char_T(emxArray_char_T_Progetto_Grup_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T_Progetto_Grup_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_char_T_Progetto_Grup_T *)NULL;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void Prog_convertitoreDoubleToString(real_T val,
  emxArray_char_T_Progetto_Grup_T *str)
{
  emxArray_char_T_Progetto_Grup_T *cifreIntere;
  emxArray_char_T_Progetto_Grup_T *tmp;
  real_T parteDecimale;
  real_T parteIntera;
  real_T tmp_0;
  int32_T loop_ub;
  int32_T loop_ub_0;
  int32_T tmp_1;
  boolean_T exitg1;
  if (val < 0.0) {
    tmp_1 = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = 1;
    Proget_emxEnsureCapacity_char_T(str, tmp_1);
    str->data[0] = '-';
    val = -val;
  } else {
    str->size[0] = 1;
    str->size[1] = 0;
  }

  parteIntera = floor(val);
  parteDecimale = val - parteIntera;
  if (parteIntera == 0.0) {
    tmp_1 = str->size[1];
    loop_ub_0 = str->size[0] * str->size[1];
    str->size[1]++;
    Proget_emxEnsureCapacity_char_T(str, loop_ub_0);
    str->data[tmp_1] = '0';
  } else {
    Progetto_Gruppo2_emxInit_char_T(&cifreIntere, 2);
    cifreIntere->size[0] = 1;
    cifreIntere->size[1] = 0;
    Progetto_Gruppo2_emxInit_char_T(&tmp, 2);
    while (parteIntera > 0.0) {
      tmp_1 = tmp->size[0] * tmp->size[1];
      tmp->size[0] = 1;
      loop_ub = cifreIntere->size[1] + 1;
      tmp->size[1] = cifreIntere->size[1] + 1;
      Proget_emxEnsureCapacity_char_T(tmp, tmp_1);
      if (rtIsInf(parteIntera)) {
        tmp_0 = (rtNaN);
      } else {
        tmp_0 = fmod(parteIntera, 10.0);
      }

      tmp->data[0] = (int8_T)(tmp_0 + 48.0);
      loop_ub_0 = cifreIntere->size[1];
      if (loop_ub_0 - 1 >= 0) {
        memcpy(&tmp->data[1], &cifreIntere->data[0], (uint32_T)loop_ub_0 *
               sizeof(char_T));
      }

      tmp_1 = cifreIntere->size[0] * cifreIntere->size[1];
      cifreIntere->size[0] = 1;
      cifreIntere->size[1] = loop_ub;
      Proget_emxEnsureCapacity_char_T(cifreIntere, tmp_1);
      if (loop_ub - 1 >= 0) {
        memcpy(&cifreIntere->data[0], &tmp->data[0], (uint32_T)loop_ub * sizeof
               (char_T));
      }

      parteIntera = floor(parteIntera / 10.0);
    }

    Progetto_Gruppo2_emxFree_char_T(&tmp);
    tmp_1 = str->size[1];
    loop_ub = cifreIntere->size[1];
    loop_ub_0 = str->size[0] * str->size[1];
    str->size[1] += cifreIntere->size[1];
    Proget_emxEnsureCapacity_char_T(str, loop_ub_0);
    for (loop_ub_0 = 0; loop_ub_0 < loop_ub; loop_ub_0++) {
      str->data[tmp_1 + loop_ub_0] = cifreIntere->data[loop_ub_0];
    }

    Progetto_Gruppo2_emxFree_char_T(&cifreIntere);
  }

  if (parteDecimale > 0.0) {
    tmp_1 = str->size[1];
    loop_ub_0 = str->size[0] * str->size[1];
    str->size[1]++;
    Proget_emxEnsureCapacity_char_T(str, loop_ub_0);
    str->data[tmp_1] = '.';
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      parteDecimale *= 10.0;
      parteIntera = floor(parteDecimale);
      tmp_1 = str->size[1];
      loop_ub_0 = str->size[0] * str->size[1];
      str->size[1]++;
      Proget_emxEnsureCapacity_char_T(str, loop_ub_0);
      if (rtIsNaN(parteIntera + 48.0) || rtIsInf(parteIntera + 48.0)) {
        tmp_0 = 0.0;
      } else {
        tmp_0 = fmod(parteIntera + 48.0, 256.0);
      }

      str->data[tmp_1] = (char_T)(tmp_0 < 0.0 ? (int32_T)(int8_T)-(int8_T)
        (uint8_T)-tmp_0 : (int32_T)(int8_T)(uint8_T)tmp_0);
      parteDecimale -= parteIntera;
      if (parteDecimale == 0.0) {
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
  }
}

/* Function for Chart: '<Root>/Chart' */
static void Progetto__msgAggiornamentoStato(real_T val_riscaldamento, real_T
  val_veneziane, real_T val_luci, real_T val_temporizzazione,
  emxArray_char_T_Progetto_Grup_T *outString_Value)
{
  emxArray_char_T_Progetto_Grup_T *b_obj_Value;
  emxArray_char_T_Progetto_Grup_T *tmp;
  emxArray_char_T_Progetto_Grup_T *tmp_0;
  int32_T i;
  int32_T loop_ub;
  int32_T tmp_1;
  char_T obj_Value[12];
  static const char_T b_Value[12] = { 'L', 'u', 'c', 'i', ' ', 's', 'p', 'e',
    'n', 't', 'e', '.' };

  static const char_T c_Value[12] = { 'L', 'u', 'c', 'i', ' ', 'a', 'c', 'c',
    'e', 's', 'e', '.' };

  static const char_T d[32] = { 'T', 'e', 'm', 'p', 'o', 'r', 'i', 'z', 'z', 'a',
    'z', 'i', 'o', 'n', 'e', ' ', 'l', 'u', 'c', 'i', ' ', 'n', 'o', 'n', ' ',
    'a', 't', 't', 'i', 'v', 'a', '.' };

  static const char_T e[22] = { 'T', 'e', 'm', 'p', 'o', 'r', 'i', 'z', 'z', 'a',
    'z', 'i', 'o', 'n', 'e', ' ', 'l', 'u', 'c', 'i', ':', ' ' };

  static const char_T f[9] = { ' ', 's', 'e', 'c', 'o', 'n', 'd', 'i', '.' };

  static const char_T i_0[28] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b', '[',
    '2', 'J', 'S', 't', 'a', 't', 'o', ' ', 'O', 'p', 'e', 'r', 'a', 't', 'i',
    'v', 'o', ':', '\r', '\n' };

  static const char_T g[11] = { 'V', 'e', 'n', 'e', 'z', 'i', 'a', 'n', 'e', ':',
    ' ' };

  static const char_T h[7] = { ' ', 'g', 'r', 'a', 'd', 'i', '.' };

  static const char_T k[15] = { 'R', 'i', 's', 'c', 'a', 'l', 'd', 'a', 'm', 'e',
    'n', 't', 'o', ':', ' ' };

  int32_T i_1;
  if ((val_luci == 1.0) || (val_luci == 3.0)) {
    for (i = 0; i < 12; i++) {
      obj_Value[i] = c_Value[i];
    }
  } else {
    for (i = 0; i < 12; i++) {
      obj_Value[i] = b_Value[i];
    }
  }

  Progetto_Gruppo2_emxInit_char_T(&b_obj_Value, 2);
  Progetto_Gruppo2_emxInit_char_T(&tmp, 2);
  if (val_temporizzazione > 0.0) {
    Prog_convertitoreDoubleToString(val_temporizzazione, tmp);
    i = b_obj_Value->size[0] * b_obj_Value->size[1];
    b_obj_Value->size[0] = 1;
    b_obj_Value->size[1] = tmp->size[1] + 31;
    Proget_emxEnsureCapacity_char_T(b_obj_Value, i);
    for (i = 0; i < 22; i++) {
      b_obj_Value->data[i] = e[i];
    }

    loop_ub = tmp->size[1];
    if (loop_ub - 1 >= 0) {
      memcpy(&b_obj_Value->data[22], &tmp->data[0], (uint32_T)loop_ub * sizeof
             (char_T));
    }

    for (i = 0; i < 9; i++) {
      b_obj_Value->data[(i + tmp->size[1]) + 22] = f[i];
    }
  } else {
    i = b_obj_Value->size[0] * b_obj_Value->size[1];
    b_obj_Value->size[0] = 1;
    b_obj_Value->size[1] = 32;
    Proget_emxEnsureCapacity_char_T(b_obj_Value, i);
    for (i = 0; i < 32; i++) {
      b_obj_Value->data[i] = d[i];
    }
  }

  Prog_convertitoreDoubleToString(val_veneziane, tmp);
  Progetto_Gruppo2_emxInit_char_T(&tmp_0, 2);
  Prog_convertitoreDoubleToString(val_riscaldamento, tmp_0);
  i_1 = outString_Value->size[0] * outString_Value->size[1];
  outString_Value->size[0] = 1;
  i = tmp->size[1] + b_obj_Value->size[1];
  tmp_1 = i + tmp_0->size[1];
  outString_Value->size[1] = tmp_1 + 88;
  Proget_emxEnsureCapacity_char_T(outString_Value, i_1);
  for (i_1 = 0; i_1 < 28; i_1++) {
    outString_Value->data[i_1] = i_0[i_1];
  }

  for (i_1 = 0; i_1 < 11; i_1++) {
    outString_Value->data[i_1 + 28] = g[i_1];
  }

  loop_ub = tmp->size[1];
  if (loop_ub - 1 >= 0) {
    memcpy(&outString_Value->data[39], &tmp->data[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  for (i_1 = 0; i_1 < 7; i_1++) {
    outString_Value->data[(i_1 + tmp->size[1]) + 39] = h[i_1];
  }

  outString_Value->data[tmp->size[1] + 46] = '\r';
  outString_Value->data[tmp->size[1] + 47] = '\n';
  for (i_1 = 0; i_1 < 12; i_1++) {
    outString_Value->data[(i_1 + tmp->size[1]) + 48] = obj_Value[i_1];
  }

  outString_Value->data[tmp->size[1] + 60] = '\r';
  outString_Value->data[tmp->size[1] + 61] = '\n';
  loop_ub = b_obj_Value->size[1];
  for (i_1 = 0; i_1 < loop_ub; i_1++) {
    outString_Value->data[(i_1 + tmp->size[1]) + 62] = b_obj_Value->data[i_1];
  }

  outString_Value->data[i + 62] = '\r';
  outString_Value->data[i + 63] = '\n';
  for (i = 0; i < 15; i++) {
    outString_Value->data[((i + tmp->size[1]) + b_obj_Value->size[1]) + 64] =
      k[i];
  }

  loop_ub = tmp_0->size[1];
  for (i = 0; i < loop_ub; i++) {
    outString_Value->data[((i + tmp->size[1]) + b_obj_Value->size[1]) + 79] =
      tmp_0->data[i];
  }

  for (i = 0; i < 7; i++) {
    outString_Value->data[(((i + tmp->size[1]) + b_obj_Value->size[1]) +
      tmp_0->size[1]) + 79] = h[i];
  }

  Progetto_Gruppo2_emxFree_char_T(&tmp_0);
  Progetto_Gruppo2_emxFree_char_T(&tmp);
  Progetto_Gruppo2_emxFree_char_T(&b_obj_Value);
  outString_Value->data[tmp_1 + 86] = '\r';
  outString_Value->data[tmp_1 + 87] = '\n';
}

/* Function for Chart: '<Root>/Chart' */
static real_T Progetto_Gru_rangeRiscaldamento(real_T val)
{
  real_T outRange;
  if ((val >= 16.0) && (val <= 18.0)) {
    outRange = 0.0;
  } else if ((val >= 19.0) && (val <= 21.0)) {
    outRange = 1.0;
  } else if ((val >= 22.0) && (val <= 24.0)) {
    outRange = 2.0;
  } else if ((val >= 25.0) && (val <= 27.0)) {
    outRange = 3.0;
  } else if ((val >= 28.0) && (val <= 30.0)) {
    outRange = 4.0;
  } else {
    outRange = -1.0;
  }

  return outRange;
}

/* Function for Chart: '<Root>/Chart' */
static void enter_internal_Stato_Operativo(void)
{
  emxArray_char_T_Progetto_Grup_T *b_Value;
  int32_T tmp;
  Progetto_Gruppo21_IZ_DW.veneziane = Progetto_Gruppo21_IZ_DW.valoreVeneziane;
  Progetto_Gruppo21_IZ_DW.riscaldamento =
    Progetto_Gruppo21_IZ_DW.valoreRiscaldamento;
  Progetto_Gruppo21_IZ_DW.luci = Progetto_Gruppo21_IZ_DW.modLuci;
  Progetto_Gruppo21_IZ_DW.tempo = Progetto_Gruppo21_IZ_DW.valoreTemporizzazione;
  Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
  Progetto_Gruppo2_emxInit_char_T(&b_Value, 2);
  Progetto__msgAggiornamentoStato(Progetto_Gruppo21_IZ_DW.riscaldamento,
    Progetto_Gruppo21_IZ_DW.veneziane, Progetto_Gruppo21_IZ_DW.luci,
    Progetto_Gruppo21_IZ_DW.tempo, b_Value);
  strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
  Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
  if (b_Value->size[1] <= 255) {
    tmp = b_Value->size[1];
  } else {
    tmp = 255;
  }

  if (tmp - 1 >= 0) {
    memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &b_Value->data[0], (uint32_T)tmp *
           sizeof(char_T));
  }

  Progetto_Gruppo2_emxFree_char_T(&b_Value);
  Progetto_Gruppo21_IZ_B.msgOut[tmp] = '\x00';
  Progetto_Gruppo21_IZ_B.outputVeneziane = Progetto_Gruppo21_IZ_DW.veneziane;
  Progetto_Gruppo21_IZ_B.outputRiscaldamento = Progetto_Gru_rangeRiscaldamento
    (Progetto_Gruppo21_IZ_DW.riscaldamento);
  if (Progetto_Gruppo21_IZ_DW.luci == 1.0) {
    Progetto_Gruppo21_IZ_B.outputLuci = Progetto_Gruppo21_IZ_ON;
  } else {
    Progetto_Gruppo21_IZ_DW.luci = 2.0;
    Progetto_Gruppo21_IZ_B.outputLuci = Progetto_Gruppo21_IZ_OFF;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void enter_internal_Stato_di_configu(void)
{
  static const char_T c_Value[125] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'z', 'i', 'o',
    'n', 'e', ':', '\r', '\n', '1', '.', ' ', 'R', 'e', 'g', 'o', 'l', 'a', 'z',
    'i', 'o', 'n', 'e', ' ', 'v', 'e', 'n', 'e', 'z', 'i', 'a', 'n', 'e', '\r',
    '\n', '2', '.', ' ', 'A', 'c', 'c', 'e', 'n', 's', 'i', 'o', 'n', 'e', ' ',
    'l', 'u', 'c', 'i', '\r', '\n', '3', '.', ' ', 'C', 'o', 'n', 'f', 'i', 'g',
    'u', 'r', 'a', 'z', 'i', 'o', 'n', 'e', ' ', 'r', 'i', 's', 'c', 'a', 'l',
    'd', 'a', 'm', 'e', 'n', 't', 'o', '\r', '\n', '4', '.', ' ', 'S', 'a', 'l',
    'v', 'a', '\r', '\n', '5', '.', ' ', 'E', 's', 'c', 'i', '\r', '\n' };

  Progetto_Gruppo21_IZ_DW.isValidVeneziane = false;
  Progetto_Gruppo21_IZ_DW.isValidRiscaldamento = false;
  Progetto_Gruppo21_IZ_DW.isValidTemporizzazione = false;
  strncpy(&Progetto_Gruppo21_IZ_DW.msg[0], "", 255U);
  Progetto_Gruppo21_IZ_DW.msg[255] = '\x00';
  Progetto_Gruppo21_IZ_DW.msg[0] = '\x00';
  Progetto_Gruppo21_IZ_DW.tmpVeneziane = Progetto_Gruppo21_IZ_DW.valoreVeneziane;
  Progetto_Gruppo21_IZ_DW.tmpRiscaldamento =
    Progetto_Gruppo21_IZ_DW.valoreRiscaldamento;
  Progetto_Gruppo21_IZ_DW.tmpTemporizzazione =
    Progetto_Gruppo21_IZ_DW.valoreTemporizzazione;
  Progetto_Gruppo21_IZ_DW.tmpModLuci = Progetto_Gruppo21_IZ_DW.modLuci;
  Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
    IN_Stampa_messaggio_configurazi;
  strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
  Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
  memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &c_Value[0], 125U * sizeof(char_T));
  Progetto_Gruppo21_IZ_B.msgOut[125] = '\x00';
}

/* Function for Chart: '<Root>/Chart' */
static boolean_T Progetto_Gruppo21_IZ_string_ge(const
  emxArray_char_T_Progetto_Grup_T *obj1_Value)
{
  int32_T i;
  boolean_T is_greater_than_or_equal_to;
  if (obj1_Value->size[1] <= 1) {
    i = obj1_Value->size[1];
  } else {
    i = 1;
  }

  if (i == 0) {
    is_greater_than_or_equal_to = (obj1_Value->size[1] >= 1);
  } else {
    i = 1;
    if (obj1_Value->data[0] == '0') {
      i = 2;
    }

    if (i == 2) {
      is_greater_than_or_equal_to = (obj1_Value->size[1] >= 1);
    } else {
      is_greater_than_or_equal_to = (obj1_Value->data[0] >= '0');
    }
  }

  return is_greater_than_or_equal_to;
}

/* Function for Chart: '<Root>/Chart' */
static boolean_T Progetto_Gruppo21_IZ_string_le(const
  emxArray_char_T_Progetto_Grup_T *obj1_Value)
{
  int32_T i;
  boolean_T is_less_than_or_equal_to;
  if (obj1_Value->size[1] <= 1) {
    i = obj1_Value->size[1];
  } else {
    i = 1;
  }

  if (i == 0) {
    is_less_than_or_equal_to = (obj1_Value->size[1] <= 1);
  } else {
    i = 1;
    if (obj1_Value->data[0] == '9') {
      i = 2;
    }

    if (i == 2) {
      is_less_than_or_equal_to = (obj1_Value->size[1] <= 1);
    } else {
      is_less_than_or_equal_to = (obj1_Value->data[0] <= '9');
    }
  }

  return is_less_than_or_equal_to;
}

/* Function for Chart: '<Root>/Chart' */
static void enter_atomic_Buffer_temporizzaz(void)
{
  emxArray_char_T_Progetto_Grup_T *b_obj_Value;
  emxArray_char_T_Progetto_Grup_T *d_Value;
  emxArray_char_T_Progetto_Grup_T *e_Value;
  emxArray_char_T_Progetto_Grup_T *obj_Value;
  int32_T b;
  int32_T i;
  int32_T loop_ub;
  b = (int32_T)strlen(&Progetto_Gruppo21_IZ_DW.msg[0]);
  Progetto_Gruppo2_emxInit_char_T(&obj_Value, 2);
  i = obj_Value->size[0] * obj_Value->size[1];
  obj_Value->size[0] = 1;
  obj_Value->size[1] = b;
  Proget_emxEnsureCapacity_char_T(obj_Value, i);
  strncpy(&obj_Value->data[0], &Progetto_Gruppo21_IZ_DW.msg[0], (uint32_T)b);
  b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
  Progetto_Gruppo2_emxInit_char_T(&b_obj_Value, 2);
  i = b_obj_Value->size[0] * b_obj_Value->size[1];
  b_obj_Value->size[0] = 1;
  b_obj_Value->size[1] = b;
  Proget_emxEnsureCapacity_char_T(b_obj_Value, i);
  strncpy(&b_obj_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
          (uint32_T)b);
  Progetto_Gruppo2_emxInit_char_T(&d_Value, 2);
  i = d_Value->size[0] * d_Value->size[1];
  d_Value->size[0] = 1;
  b = obj_Value->size[1] + b_obj_Value->size[1];
  d_Value->size[1] = b;
  Proget_emxEnsureCapacity_char_T(d_Value, i);
  loop_ub = obj_Value->size[1];
  if (loop_ub - 1 >= 0) {
    memcpy(&d_Value->data[0], &obj_Value->data[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  loop_ub = b_obj_Value->size[1];
  for (i = 0; i < loop_ub; i++) {
    d_Value->data[i + obj_Value->size[1]] = b_obj_Value->data[i];
  }

  Progetto_Gruppo2_emxFree_char_T(&b_obj_Value);
  Progetto_Gruppo2_emxFree_char_T(&obj_Value);
  strncpy(&Progetto_Gruppo21_IZ_DW.msg[0], "", 255U);
  Progetto_Gruppo21_IZ_DW.msg[255] = '\x00';
  if (d_Value->size[1] > 255) {
    b = 255;
  }

  if (b - 1 >= 0) {
    memcpy(&Progetto_Gruppo21_IZ_DW.msg[0], &d_Value->data[0], (uint32_T)b *
           sizeof(char_T));
  }

  Progetto_Gruppo2_emxFree_char_T(&d_Value);
  Progetto_Gruppo21_IZ_DW.msg[b] = '\x00';
  b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
  Progetto_Gruppo2_emxInit_char_T(&e_Value, 2);
  i = e_Value->size[0] * e_Value->size[1];
  e_Value->size[0] = 1;
  e_Value->size[1] = b;
  Proget_emxEnsureCapacity_char_T(e_Value, i);
  strncpy(&e_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0], (uint32_T)
          b);
  strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
  Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
  if (e_Value->size[1] <= 255) {
    b = e_Value->size[1];
  } else {
    b = 255;
  }

  if (b - 1 >= 0) {
    memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &e_Value->data[0], (uint32_T)b *
           sizeof(char_T));
  }

  Progetto_Gruppo2_emxFree_char_T(&e_Value);
  Progetto_Gruppo21_IZ_B.msgOut[b] = '\x00';
}

/* Function for Chart: '<Root>/Chart' */
static boolean_T Prog_checkValoreTemporizzazione(const
  emxArray_char_T_Progetto_Grup_T *str_Value)
{
  real_T fractionDivisor;
  real_T num;
  int32_T i;
  boolean_T isFraction;
  boolean_T result;
  num = 0.0;
  isFraction = false;
  fractionDivisor = 1.0;
  i = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if ((i <= str_Value->size[1] - 1) && (!(str_Value->data[i] == ' '))) {
      if (str_Value->data[i] == '.') {
        if (isFraction) {
          result = false;
          exitg1 = 1;
        } else {
          isFraction = true;
          i++;
        }
      } else {
        uint8_T tmp;
        tmp = (uint8_T)str_Value->data[i];
        if (tmp - 48 < 0) {
          result = false;
          exitg1 = 1;
        } else if (tmp - 48 > 9) {
          result = false;
          exitg1 = 1;
        } else {
          if (!isFraction) {
            num = num * 10.0 + ((real_T)tmp - 48.0);
          } else {
            fractionDivisor *= 10.0;
            num += ((real_T)tmp - 48.0) / fractionDivisor;
          }

          i++;
        }
      }
    } else {
      result = (((num >= 5.0) && (num <= 30.0)) || (num == 0.0));
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return result;
}

/* Function for Chart: '<Root>/Chart' */
static real_T Progetto_Gruppo21__convertitore(const
  emxArray_char_T_Progetto_Grup_T *str_Value)
{
  real_T fractionDivisor;
  real_T val;
  int32_T i;
  boolean_T exitg1;
  boolean_T isFraction;
  val = 0.0;
  isFraction = false;
  fractionDivisor = 1.0;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && ((i <= str_Value->size[1] - 1) && (!(str_Value->data[i] ==
            ' ')))) {
    if (str_Value->data[i] == '.') {
      if (isFraction) {
        val = -1.0;
        exitg1 = true;
      } else {
        isFraction = true;
        i++;
      }
    } else {
      uint8_T tmp;
      tmp = (uint8_T)str_Value->data[i];
      if (tmp - 48 < 0) {
        val = -1.0;
        exitg1 = true;
      } else if (tmp - 48 > 9) {
        val = -1.0;
        exitg1 = true;
      } else {
        if (!isFraction) {
          val = val * 10.0 + ((real_T)tmp - 48.0);
        } else {
          fractionDivisor *= 10.0;
          val += ((real_T)tmp - 48.0) / fractionDivisor;
        }

        i++;
      }
    }
  }

  return val;
}

/* Function for Chart: '<Root>/Chart' */
static void Progetto_Gruppo_Accensione_luci(const uint32_T *UARTUSARTRead_o2)
{
  emxArray_char_T_Progetto_Grup_T *b_obj_Value;
  emxArray_char_T_Progetto_Grup_T *d_Value;
  emxArray_char_T_Progetto_Grup_T *g_Value;
  emxArray_char_T_Progetto_Grup_T *obj_Value;
  int32_T b;
  boolean_T out;
  static const char_T o_Value[119] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'z', 'i', 'o',
    'n', 'e', ' ', 't', 'e', 'm', 'p', 'o', 'r', 'i', 'z', 'z', 'a', 'z', 'i',
    'o', 'n', 'e', ' ', 'l', 'u', 'c', 'i', '.', '\r', '\n', 'I', 'n', 's', 'e',
    'r', 'i', 'r', 'e', ' ', 'u', 'n', ' ', 'v', 'a', 'l', 'o', 'r', 'e', ' ',
    'c', 'o', 'm', 'p', 'r', 'e', 's', 'o', ' ', 't', 'r', 'a', ' ', '5', ' ',
    'e', ' ', '3', '0', '.', '\r', '\n', 'I', 'n', 's', 'e', 'r', 'i', 'r', 'e',
    ' ', '0', ' ', 'p', 'e', 'r', ' ', 'd', 'i', 's', 'a', 't', 't', 'i', 'v',
    'a', 'r', 'l', 'a', '.', '\r', '\n' };

  static const char_T v_Value[39] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'V', 'a', 'l', 'o', 'r', 'e', ' ', 'i', 'n', 's', 'e', 'r',
    'i', 't', 'o', ' ', 'n', 'o', 'n', ' ', 'v', 'a', 'l', 'i', 'd', 'o', '.',
    '\r', '\n' };

  static const char_T s_Value[125] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'z', 'i', 'o',
    'n', 'e', ':', '\r', '\n', '1', '.', ' ', 'R', 'e', 'g', 'o', 'l', 'a', 'z',
    'i', 'o', 'n', 'e', ' ', 'v', 'e', 'n', 'e', 'z', 'i', 'a', 'n', 'e', '\r',
    '\n', '2', '.', ' ', 'A', 'c', 'c', 'e', 'n', 's', 'i', 'o', 'n', 'e', ' ',
    'l', 'u', 'c', 'i', '\r', '\n', '3', '.', ' ', 'C', 'o', 'n', 'f', 'i', 'g',
    'u', 'r', 'a', 'z', 'i', 'o', 'n', 'e', ' ', 'r', 'i', 's', 'c', 'a', 'l',
    'd', 'a', 'm', 'e', 'n', 't', 'o', '\r', '\n', '4', '.', ' ', 'S', 'a', 'l',
    'v', 'a', '\r', '\n', '5', '.', ' ', 'E', 's', 'c', 'i', '\r', '\n' };

  static const char_T w[27] = { '\r', '\n', 'V', 'a', 'l', 'o', 'r', 'e', ' ',
    'v', 'a', 'l', 'i', 'd', 'o', ' ', 'i', 'm', 'p', 'o', 's', 't', 'a', 't',
    'o', ':', ' ' };

  static const char_T l_Value[28] = { '\r', '\n', 'I', 'm', 'p', 'o', 's', 't',
    'a', 'z', 'i', 'o', 'n', 'e', ':', ' ', 'L', 'u', 'c', 'i', ' ', 'a', 'c',
    'c', 'e', 's', 'e', '.' };

  static const char_T x[9] = { ' ', 's', 'e', 'c', 'o', 'n', 'd', 'i', '.' };

  static const char_T u_Value[37] = { '\r', '\n', 'C', 'o', 'n', 't', 'r', 'o',
    'l', 'l', 'o', ' ', 'v', 'a', 'l', 'o', 'r', 'e', ' ', 'i', 'n', 's', 'e',
    'r', 'i', 't', 'o', ' ', 'i', 'n', ' ', 'c', 'o', 'r', 's', 'o', '.' };

  static const char_T m_Value[28] = { '\r', '\n', 'I', 'm', 'p', 'o', 's', 't',
    'a', 'z', 'i', 'o', 'n', 'e', ':', ' ', 'L', 'u', 'c', 'i', ' ', 's', 'p',
    'e', 'n', 't', 'e', '.' };

  int32_T tmp;
  boolean_T guard1;
  Progetto_Gruppo2_emxInit_char_T(&obj_Value, 2);
  Progetto_Gruppo2_emxInit_char_T(&b_obj_Value, 2);
  Progetto_Gruppo2_emxInit_char_T(&d_Value, 2);
  switch (Progetto_Gruppo21_IZ_DW.is_Accensione_luci) {
   case Progetto_Gruppo2_IN_Luci_accese:
    if (Progetto_Gruppo21_IZ_DW.temporalCounter_i2 >= 2) {
      Progetto_Gruppo21_IZ_DW.is_Accensione_luci =
        Progetto_G_IN_Luci_temporizzate;
      Progetto_Gruppo21_IZ_DW.is_Luci_temporizzate =
        Progetto_G_IN_Stampa_iniziale_m;
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &o_Value[0], 119U * sizeof
             (char_T));
      Progetto_Gruppo21_IZ_B.msgOut[119] = '\x00';
    } else {
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
    }
    break;

   case Progetto_Gruppo2_IN_Luci_spente:
    if (Progetto_Gruppo21_IZ_DW.temporalCounter_i2 >= 2) {
      Progetto_Gruppo21_IZ_DW.is_Accensione_luci =
        Progetto_G_IN_Luci_temporizzate;
      Progetto_Gruppo21_IZ_DW.is_Luci_temporizzate =
        Progetto_G_IN_Stampa_iniziale_m;
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &o_Value[0], 119U * sizeof
             (char_T));
      Progetto_Gruppo21_IZ_B.msgOut[119] = '\x00';
    } else {
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
    }
    break;

   case Progetto_G_IN_Luci_temporizzate:
    Progetto_Gruppo2_emxInit_char_T(&g_Value, 2);
    switch (Progetto_Gruppo21_IZ_DW.is_Luci_temporizzate) {
     case Proge_IN_Buffer_temporizzazione:
      b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
      tmp = obj_Value->size[0] * obj_Value->size[1];
      obj_Value->size[0] = 1;
      obj_Value->size[1] = b;
      Proget_emxEnsureCapacity_char_T(obj_Value, tmp);
      strncpy(&obj_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
              (uint32_T)b);
      out = false;
      if ((obj_Value->size[1] == 1) && (obj_Value->data[0] == '\r')) {
        out = true;
      }

      if (out) {
        Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
        Progetto_Gruppo21_IZ_DW.is_Luci_temporizzate =
          IN_Conferma_valore_temporizzazi;
        b = (int32_T)strlen(&Progetto_Gruppo21_IZ_DW.msg[0]);
        tmp = d_Value->size[0] * d_Value->size[1];
        d_Value->size[0] = 1;
        d_Value->size[1] = b;
        Proget_emxEnsureCapacity_char_T(d_Value, tmp);
        strncpy(&d_Value->data[0], &Progetto_Gruppo21_IZ_DW.msg[0], (uint32_T)b);
        Progetto_Gruppo21_IZ_DW.isValidTemporizzazione =
          Prog_checkValoreTemporizzazione(d_Value);
        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        for (b = 0; b < 37; b++) {
          Progetto_Gruppo21_IZ_B.msgOut[b] = u_Value[b];
        }

        Progetto_Gruppo21_IZ_B.msgOut[37] = '\x00';
      } else {
        if (*UARTUSARTRead_o2 > 0U) {
          b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
          tmp = d_Value->size[0] * d_Value->size[1];
          d_Value->size[0] = 1;
          d_Value->size[1] = b;
          Proget_emxEnsureCapacity_char_T(d_Value, tmp);
          strncpy(&d_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
                  (uint32_T)b);
          guard1 = false;
          if (Progetto_Gruppo21_IZ_string_ge(d_Value)) {
            b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
            tmp = g_Value->size[0] * g_Value->size[1];
            g_Value->size[0] = 1;
            g_Value->size[1] = b;
            Proget_emxEnsureCapacity_char_T(g_Value, tmp);
            strncpy(&g_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
                    (uint32_T)b);
            if (Progetto_Gruppo21_IZ_string_le(g_Value)) {
              out = true;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }

          if (guard1) {
            b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
            tmp = b_obj_Value->size[0] * b_obj_Value->size[1];
            b_obj_Value->size[0] = 1;
            b_obj_Value->size[1] = b;
            Proget_emxEnsureCapacity_char_T(b_obj_Value, tmp);
            strncpy(&b_obj_Value->data[0],
                    &Progetto_Gruppo21_IZ_B.ASCIItoString[0], (uint32_T)b);
            out = false;
            if ((b_obj_Value->size[1] == 1) && (b_obj_Value->data[0] == '.')) {
              out = true;
            }
          }
        } else {
          out = false;
        }

        if (out) {
          Progetto_Gruppo21_IZ_DW.is_Luci_temporizzate =
            Proge_IN_Buffer_temporizzazione;
          enter_atomic_Buffer_temporizzaz();
        } else {
          strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
          Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
          Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
        }
      }
      break;

     case IN_Conferma_valore_temporizzazi:
      if (Progetto_Gruppo21_IZ_DW.temporalCounter_i2 >= 2) {
        if (Progetto_Gruppo21_IZ_DW.isValidTemporizzazione) {
          Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
          Progetto_Gruppo21_IZ_DW.is_Luci_temporizzate =
            IN_Stampa_valore_temporizzazion;
          b = (int32_T)strlen(&Progetto_Gruppo21_IZ_DW.msg[0]);
          tmp = obj_Value->size[0] * obj_Value->size[1];
          obj_Value->size[0] = 1;
          obj_Value->size[1] = b;
          Proget_emxEnsureCapacity_char_T(obj_Value, tmp);
          strncpy(&obj_Value->data[0], &Progetto_Gruppo21_IZ_DW.msg[0],
                  (uint32_T)b);
          tmp = d_Value->size[0] * d_Value->size[1];
          d_Value->size[0] = 1;
          d_Value->size[1] = obj_Value->size[1] + 36;
          Proget_emxEnsureCapacity_char_T(d_Value, tmp);
          for (b = 0; b < 27; b++) {
            d_Value->data[b] = w[b];
          }

          b = obj_Value->size[1];
          if (b - 1 >= 0) {
            memcpy(&d_Value->data[27], &obj_Value->data[0], (uint32_T)b * sizeof
                   (char_T));
          }

          for (b = 0; b < 9; b++) {
            d_Value->data[(b + obj_Value->size[1]) + 27] = x[b];
          }

          strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
          Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
          if (d_Value->size[1] <= 255) {
            b = obj_Value->size[1] + 36;
          } else {
            b = 255;
          }

          if (b - 1 >= 0) {
            memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &d_Value->data[0],
                   (uint32_T)b * sizeof(char_T));
          }

          Progetto_Gruppo21_IZ_B.msgOut[b] = '\x00';
          b = (int32_T)strlen(&Progetto_Gruppo21_IZ_DW.msg[0]);
          tmp = g_Value->size[0] * g_Value->size[1];
          g_Value->size[0] = 1;
          g_Value->size[1] = b;
          Proget_emxEnsureCapacity_char_T(g_Value, tmp);
          strncpy(&g_Value->data[0], &Progetto_Gruppo21_IZ_DW.msg[0], (uint32_T)
                  b);
          Progetto_Gruppo21_IZ_DW.valoreTemporizzazione =
            Progetto_Gruppo21__convertitore(g_Value);
        } else {
          Progetto_Gruppo21_IZ_DW.is_Luci_temporizzate =
            Progetto_Gru_IN_NO_ACTIVE_CHILD;
          Progetto_Gruppo21_IZ_DW.is_Accensione_luci =
            Progetto_Gru_IN_NO_ACTIVE_CHILD;
          Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
          Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
            Progetto_Gruppo_IN_Stato_errore;
          strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
          Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
          for (b = 0; b < 39; b++) {
            Progetto_Gruppo21_IZ_B.msgOut[b] = v_Value[b];
          }

          Progetto_Gruppo21_IZ_B.msgOut[39] = '\x00';
        }
      } else {
        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
      }
      break;

     case Progetto_G_IN_Stampa_iniziale_m:
      if (*UARTUSARTRead_o2 > 0U) {
        b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
        tmp = d_Value->size[0] * d_Value->size[1];
        d_Value->size[0] = 1;
        d_Value->size[1] = b;
        Proget_emxEnsureCapacity_char_T(d_Value, tmp);
        strncpy(&d_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
                (uint32_T)b);
        if (Progetto_Gruppo21_IZ_string_ge(d_Value)) {
          b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
          tmp = g_Value->size[0] * g_Value->size[1];
          g_Value->size[0] = 1;
          g_Value->size[1] = b;
          Proget_emxEnsureCapacity_char_T(g_Value, tmp);
          strncpy(&g_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
                  (uint32_T)b);
          out = Progetto_Gruppo21_IZ_string_le(g_Value);
        } else {
          out = false;
        }
      } else {
        out = false;
      }

      if (out) {
        Progetto_Gruppo21_IZ_DW.is_Luci_temporizzate =
          Proge_IN_Buffer_temporizzazione;
        enter_atomic_Buffer_temporizzaz();
      } else {
        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
      }
      break;

     default:
      /* case IN_Stampa_valore_temporizzazione: */
      if (Progetto_Gruppo21_IZ_DW.temporalCounter_i2 >= 2) {
        strncpy(&Progetto_Gruppo21_IZ_DW.msg[0], "", 255U);
        Progetto_Gruppo21_IZ_DW.msg[255] = '\x00';
        Progetto_Gruppo21_IZ_DW.msg[0] = '\x00';
        Progetto_Gruppo21_IZ_DW.is_Luci_temporizzate =
          Progetto_Gru_IN_NO_ACTIVE_CHILD;
        Progetto_Gruppo21_IZ_DW.is_Accensione_luci =
          Progetto_Gru_IN_NO_ACTIVE_CHILD;
        Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
          IN_Stampa_messaggio_configurazi;
        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &s_Value[0], 125U * sizeof
               (char_T));
        Progetto_Gruppo21_IZ_B.msgOut[125] = '\x00';
      } else {
        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
      }
      break;
    }

    Progetto_Gruppo2_emxFree_char_T(&g_Value);
    break;

   default:
    /* case IN_Stampa_iniziale: */
    if (*UARTUSARTRead_o2 > 0U) {
      b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
      tmp = obj_Value->size[0] * obj_Value->size[1];
      obj_Value->size[0] = 1;
      obj_Value->size[1] = b;
      Proget_emxEnsureCapacity_char_T(obj_Value, tmp);
      strncpy(&obj_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
              (uint32_T)b);
      out = false;
      if ((obj_Value->size[1] == 1) && (obj_Value->data[0] == '1')) {
        out = true;
      }

      if (out) {
        Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
        Progetto_Gruppo21_IZ_DW.is_Accensione_luci =
          Progetto_Gruppo2_IN_Luci_accese;
        Progetto_Gruppo21_IZ_DW.modLuci = 1.0;
        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        for (b = 0; b < 28; b++) {
          Progetto_Gruppo21_IZ_B.msgOut[b] = l_Value[b];
        }

        Progetto_Gruppo21_IZ_B.msgOut[28] = '\x00';
      } else {
        b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
        tmp = b_obj_Value->size[0] * b_obj_Value->size[1];
        b_obj_Value->size[0] = 1;
        b_obj_Value->size[1] = b;
        Proget_emxEnsureCapacity_char_T(b_obj_Value, tmp);
        strncpy(&b_obj_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
                (uint32_T)b);
        out = false;
        if ((b_obj_Value->size[1] == 1) && (b_obj_Value->data[0] == '2')) {
          out = true;
        }

        if (out) {
          Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
          Progetto_Gruppo21_IZ_DW.is_Accensione_luci =
            Progetto_Gruppo2_IN_Luci_spente;
          Progetto_Gruppo21_IZ_DW.modLuci = 2.0;
          strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
          Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
          for (b = 0; b < 28; b++) {
            Progetto_Gruppo21_IZ_B.msgOut[b] = m_Value[b];
          }

          Progetto_Gruppo21_IZ_B.msgOut[28] = '\x00';
        } else {
          Progetto_Gruppo21_IZ_DW.is_Accensione_luci =
            Progetto_Gru_IN_NO_ACTIVE_CHILD;
          Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
          Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
            Progetto_Gruppo_IN_Stato_errore;
          strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
          Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
          for (b = 0; b < 39; b++) {
            Progetto_Gruppo21_IZ_B.msgOut[b] = v_Value[b];
          }

          Progetto_Gruppo21_IZ_B.msgOut[39] = '\x00';
        }
      }
    } else {
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
    }
    break;
  }

  Progetto_Gruppo2_emxFree_char_T(&d_Value);
  Progetto_Gruppo2_emxFree_char_T(&b_obj_Value);
  Progetto_Gruppo2_emxFree_char_T(&obj_Value);
}

/* Function for Chart: '<Root>/Chart' */
static boolean_T Proget_checkValoreRiscaldamento(const
  emxArray_char_T_Progetto_Grup_T *str_Value)
{
  real_T num;
  int32_T i;
  boolean_T result;
  num = 0.0;
  i = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if ((i <= str_Value->size[1] - 1) && (!(str_Value->data[i] == ' '))) {
      uint8_T tmp;
      tmp = (uint8_T)str_Value->data[i];
      if (tmp - 48 < 0) {
        result = false;
        exitg1 = 1;
      } else if (tmp - 48 > 9) {
        result = false;
        exitg1 = 1;
      } else {
        num = num * 10.0 + ((real_T)tmp - 48.0);
        i++;
      }
    } else {
      real_T r;
      if (rtIsInf(num)) {
        r = (rtNaN);
      } else if (num == 0.0) {
        r = 0.0;
      } else {
        r = fmod(num, 1.0);
        if (r == 0.0) {
          r = 0.0;
        }
      }

      result = ((r == 0.0) && (num >= 16.0) && (num <= 30.0));
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return result;
}

/* Function for Chart: '<Root>/Chart' */
static boolean_T Progetto_G_checkValoreVeneziane(const
  emxArray_char_T_Progetto_Grup_T *str_Value)
{
  real_T num;
  int32_T i;
  boolean_T result;
  num = 0.0;
  i = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if ((i <= str_Value->size[1] - 1) && (!(str_Value->data[i] == ' '))) {
      uint8_T tmp;
      tmp = (uint8_T)str_Value->data[i];
      if (tmp - 48 < 0) {
        result = false;
        exitg1 = 1;
      } else if (tmp - 48 > 9) {
        result = false;
        exitg1 = 1;
      } else {
        num = num * 10.0 + ((real_T)tmp - 48.0);
        i++;
      }
    } else {
      real_T r;
      if (rtIsInf(num)) {
        r = (rtNaN);
      } else if (num == 0.0) {
        r = 0.0;
      } else {
        r = fmod(num, 20.0);
        if (r == 0.0) {
          r = 0.0;
        }
      }

      result = ((r == 0.0) && (num <= 180.0));
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return result;
}

/* Function for Chart: '<Root>/Chart' */
static void Progetto__Regolazione_veneziane(const uint32_T *UARTUSARTRead_o2)
{
  emxArray_char_T_Progetto_Grup_T *d_Value;
  emxArray_char_T_Progetto_Grup_T *h_Value;
  emxArray_char_T_Progetto_Grup_T *obj_Value;
  int32_T b;
  boolean_T out;
  static const char_T l_Value[39] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'V', 'a', 'l', 'o', 'r', 'e', ' ', 'i', 'n', 's', 'e', 'r',
    'i', 't', 'o', ' ', 'n', 'o', 'n', ' ', 'v', 'a', 'l', 'i', 'd', 'o', '.',
    '\r', '\n' };

  static const char_T k_Value[125] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'z', 'i', 'o',
    'n', 'e', ':', '\r', '\n', '1', '.', ' ', 'R', 'e', 'g', 'o', 'l', 'a', 'z',
    'i', 'o', 'n', 'e', ' ', 'v', 'e', 'n', 'e', 'z', 'i', 'a', 'n', 'e', '\r',
    '\n', '2', '.', ' ', 'A', 'c', 'c', 'e', 'n', 's', 'i', 'o', 'n', 'e', ' ',
    'l', 'u', 'c', 'i', '\r', '\n', '3', '.', ' ', 'C', 'o', 'n', 'f', 'i', 'g',
    'u', 'r', 'a', 'z', 'i', 'o', 'n', 'e', ' ', 'r', 'i', 's', 'c', 'a', 'l',
    'd', 'a', 'm', 'e', 'n', 't', 'o', '\r', '\n', '4', '.', ' ', 'S', 'a', 'l',
    'v', 'a', '\r', '\n', '5', '.', ' ', 'E', 's', 'c', 'i', '\r', '\n' };

  static const char_T o[27] = { '\r', '\n', 'V', 'a', 'l', 'o', 'r', 'e', ' ',
    'v', 'a', 'l', 'i', 'd', 'o', ' ', 'i', 'm', 'p', 'o', 's', 't', 'a', 't',
    'o', ':', ' ' };

  static const char_T p[7] = { ' ', 'g', 'r', 'a', 'd', 'i', '.' };

  static const char_T n_Value[37] = { '\r', '\n', 'C', 'o', 'n', 't', 'r', 'o',
    'l', 'l', 'o', ' ', 'v', 'a', 'l', 'o', 'r', 'e', ' ', 'i', 'n', 's', 'e',
    'r', 'i', 't', 'o', ' ', 'i', 'n', ' ', 'c', 'o', 'r', 's', 'o', '.' };

  int32_T tmp;
  Progetto_Gruppo2_emxInit_char_T(&obj_Value, 2);
  Progetto_Gruppo2_emxInit_char_T(&d_Value, 2);
  Progetto_Gruppo2_emxInit_char_T(&h_Value, 2);
  switch (Progetto_Gruppo21_IZ_DW.is_Regolazione_veneziane) {
   case Progetto_Gr_IN_Buffer_veneziane:
    b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
    tmp = obj_Value->size[0] * obj_Value->size[1];
    obj_Value->size[0] = 1;
    obj_Value->size[1] = b;
    Proget_emxEnsureCapacity_char_T(obj_Value, tmp);
    strncpy(&obj_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
            (uint32_T)b);
    out = false;
    if ((obj_Value->size[1] == 1) && (obj_Value->data[0] == '\r')) {
      out = true;
    }

    if (out) {
      Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
      Progetto_Gruppo21_IZ_DW.is_Regolazione_veneziane =
        Pr_IN_Conferma_valore_veneziane;
      b = (int32_T)strlen(&Progetto_Gruppo21_IZ_DW.msg[0]);
      tmp = h_Value->size[0] * h_Value->size[1];
      h_Value->size[0] = 1;
      h_Value->size[1] = b;
      Proget_emxEnsureCapacity_char_T(h_Value, tmp);
      strncpy(&h_Value->data[0], &Progetto_Gruppo21_IZ_DW.msg[0], (uint32_T)b);
      Progetto_Gruppo21_IZ_DW.isValidVeneziane = Progetto_G_checkValoreVeneziane
        (h_Value);
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      for (b = 0; b < 37; b++) {
        Progetto_Gruppo21_IZ_B.msgOut[b] = n_Value[b];
      }

      Progetto_Gruppo21_IZ_B.msgOut[37] = '\x00';
    } else {
      if (*UARTUSARTRead_o2 > 0U) {
        b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
        tmp = h_Value->size[0] * h_Value->size[1];
        h_Value->size[0] = 1;
        h_Value->size[1] = b;
        Proget_emxEnsureCapacity_char_T(h_Value, tmp);
        strncpy(&h_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
                (uint32_T)b);
        if (Progetto_Gruppo21_IZ_string_ge(h_Value)) {
          b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
          tmp = d_Value->size[0] * d_Value->size[1];
          d_Value->size[0] = 1;
          d_Value->size[1] = b;
          Proget_emxEnsureCapacity_char_T(d_Value, tmp);
          strncpy(&d_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
                  (uint32_T)b);
          out = Progetto_Gruppo21_IZ_string_le(d_Value);
        } else {
          out = false;
        }
      } else {
        out = false;
      }

      if (out) {
        Progetto_Gruppo21_IZ_DW.is_Regolazione_veneziane =
          Progetto_Gr_IN_Buffer_veneziane;
        enter_atomic_Buffer_temporizzaz();
      } else {
        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
      }
    }
    break;

   case Pr_IN_Conferma_valore_veneziane:
    if (Progetto_Gruppo21_IZ_DW.temporalCounter_i2 >= 2) {
      if (Progetto_Gruppo21_IZ_DW.isValidVeneziane) {
        Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
        Progetto_Gruppo21_IZ_DW.is_Regolazione_veneziane =
          Prog_IN_Stampa_valore_veneziane;
        b = (int32_T)strlen(&Progetto_Gruppo21_IZ_DW.msg[0]);
        tmp = obj_Value->size[0] * obj_Value->size[1];
        obj_Value->size[0] = 1;
        obj_Value->size[1] = b;
        Proget_emxEnsureCapacity_char_T(obj_Value, tmp);
        strncpy(&obj_Value->data[0], &Progetto_Gruppo21_IZ_DW.msg[0], (uint32_T)
                b);
        tmp = h_Value->size[0] * h_Value->size[1];
        h_Value->size[0] = 1;
        h_Value->size[1] = obj_Value->size[1] + 34;
        Proget_emxEnsureCapacity_char_T(h_Value, tmp);
        for (b = 0; b < 27; b++) {
          h_Value->data[b] = o[b];
        }

        b = obj_Value->size[1];
        if (b - 1 >= 0) {
          memcpy(&h_Value->data[27], &obj_Value->data[0], (uint32_T)b * sizeof
                 (char_T));
        }

        for (b = 0; b < 7; b++) {
          h_Value->data[(b + obj_Value->size[1]) + 27] = p[b];
        }

        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        if (h_Value->size[1] <= 255) {
          b = obj_Value->size[1] + 34;
        } else {
          b = 255;
        }

        if (b - 1 >= 0) {
          memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &h_Value->data[0], (uint32_T)
                 b * sizeof(char_T));
        }

        Progetto_Gruppo21_IZ_B.msgOut[b] = '\x00';
        b = (int32_T)strlen(&Progetto_Gruppo21_IZ_DW.msg[0]);
        tmp = d_Value->size[0] * d_Value->size[1];
        d_Value->size[0] = 1;
        d_Value->size[1] = b;
        Proget_emxEnsureCapacity_char_T(d_Value, tmp);
        strncpy(&d_Value->data[0], &Progetto_Gruppo21_IZ_DW.msg[0], (uint32_T)b);
        Progetto_Gruppo21_IZ_DW.valoreVeneziane =
          Progetto_Gruppo21__convertitore(d_Value);
      } else {
        Progetto_Gruppo21_IZ_DW.is_Regolazione_veneziane =
          Progetto_Gru_IN_NO_ACTIVE_CHILD;
        Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
        Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
          Progetto_Gruppo_IN_Stato_errore;
        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        for (b = 0; b < 39; b++) {
          Progetto_Gruppo21_IZ_B.msgOut[b] = l_Value[b];
        }

        Progetto_Gruppo21_IZ_B.msgOut[39] = '\x00';
      }
    } else {
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
    }
    break;

   case Progetto_G_IN_Stampa_iniziale_m:
    if (*UARTUSARTRead_o2 > 0U) {
      b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
      tmp = h_Value->size[0] * h_Value->size[1];
      h_Value->size[0] = 1;
      h_Value->size[1] = b;
      Proget_emxEnsureCapacity_char_T(h_Value, tmp);
      strncpy(&h_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
              (uint32_T)b);
      if (Progetto_Gruppo21_IZ_string_ge(h_Value)) {
        b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
        tmp = d_Value->size[0] * d_Value->size[1];
        d_Value->size[0] = 1;
        d_Value->size[1] = b;
        Proget_emxEnsureCapacity_char_T(d_Value, tmp);
        strncpy(&d_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
                (uint32_T)b);
        out = Progetto_Gruppo21_IZ_string_le(d_Value);
      } else {
        out = false;
      }
    } else {
      out = false;
    }

    if (out) {
      Progetto_Gruppo21_IZ_DW.is_Regolazione_veneziane =
        Progetto_Gr_IN_Buffer_veneziane;
      enter_atomic_Buffer_temporizzaz();
    } else {
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
    }
    break;

   default:
    /* case IN_Stampa_valore_veneziane: */
    if (Progetto_Gruppo21_IZ_DW.temporalCounter_i2 >= 2) {
      strncpy(&Progetto_Gruppo21_IZ_DW.msg[0], "", 255U);
      Progetto_Gruppo21_IZ_DW.msg[255] = '\x00';
      Progetto_Gruppo21_IZ_DW.msg[0] = '\x00';
      Progetto_Gruppo21_IZ_DW.is_Regolazione_veneziane =
        Progetto_Gru_IN_NO_ACTIVE_CHILD;
      Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
        IN_Stampa_messaggio_configurazi;
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &k_Value[0], 125U * sizeof
             (char_T));
      Progetto_Gruppo21_IZ_B.msgOut[125] = '\x00';
    } else {
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
    }
    break;
  }

  Progetto_Gruppo2_emxFree_char_T(&h_Value);
  Progetto_Gruppo2_emxFree_char_T(&d_Value);
  Progetto_Gruppo2_emxFree_char_T(&obj_Value);
}

/* Function for Chart: '<Root>/Chart' */
static void Stampa_messaggio_configurazione(const uint32_T *UARTUSARTRead_o2)
{
  emxArray_char_T_Progetto_Grup_T *b_obj_Value;
  emxArray_char_T_Progetto_Grup_T *c_obj_Value;
  emxArray_char_T_Progetto_Grup_T *d_obj_Value;
  emxArray_char_T_Progetto_Grup_T *e_obj_Value;
  emxArray_char_T_Progetto_Grup_T *obj_Value;
  int32_T b;
  boolean_T out;
  static const char_T k_Value[87] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'R', 'e', 'g', 'o', 'l', 'a', 'z', 'i', 'o', 'n', 'e', ' ',
    'V', 'e', 'n', 'e', 'z', 'i', 'a', 'n', 'e', '.', '\r', '\n', 'I', 'n', 's',
    'e', 'r', 'i', 'r', 'e', ' ', 'u', 'n', ' ', 'v', 'a', 'l', 'o', 'r', 'e',
    ' ', 'd', 'a', ' ', '0', ' ', 'a', ' ', '1', '8', '0', '.', '\r', '\n', '(',
    'R', 'i', 's', 'o', 'l', 'u', 'z', 'i', 'o', 'n', 'e', ' ', 'd', 'i', ' ',
    '2', '0', ')', '\r', '\n' };

  static const char_T l_Value[77] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'z', 'i', 'o',
    'n', 'e', ' ', 'l', 'u', 'c', 'i', '.', '\r', '\n', 'I', 'n', 's', 'e', 'r',
    'i', 'r', 'e', ':', '\r', '\n', '1', '.', ' ', 'L', 'u', 'c', 'i', ' ', 'a',
    'c', 'c', 'e', 's', 'e', '.', '\r', '\n', '2', '.', ' ', 'L', 'u', 'c', 'i',
    ' ', 's', 'p', 'e', 'n', 't', 'e', '.', '\r', '\n' };

  static const char_T m_Value[103] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'z', 'i', 'o',
    'n', 'e', ' ', 'r', 'i', 's', 'c', 'a', 'l', 'd', 'a', 'm', 'e', 'n', 't',
    'o', '.', '\r', '\n', 'I', 'n', 's', 'e', 'r', 'i', 'r', 'e', ' ', 'u', 'n',
    ' ', 'v', 'a', 'l', 'o', 'r', 'e', ' ', 'c', 'o', 'm', 'p', 'r', 'e', 's',
    'o', ' ', 't', 'r', 'a', ' ', '1', '6', ' ', 'e', ' ', '3', '0', '.', '\r',
    '\n', '(', 'R', 'i', 's', 'o', 'l', 'u', 'z', 'i', 'o', 'n', 'e', ' ', 'd',
    'i', ' ', '1', ')', '\r', '\n' };

  static const char_T h_Value[48] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'z', 'i', 'o',
    'n', 'e', ' ', 's', 'a', 'l', 'v', 'a', 't', 'a', ' ', 'c', 'o', 'n', ' ',
    's', 'u', 'c', 'c', 'e', 's', 's', 'o', '.', '\r', '\n' };

  static const char_T i_Value[75] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'z', 'i', 'o',
    'n', 'e', ' ', 'v', 'a', 'l', 'i', 'd', 'a', ' ', 'n', 'o', 'n', ' ', 'p',
    'r', 'e', 's', 'e', 'n', 't', 'e', '.', '\r', '\n', 'S', 'i', ' ', 'p', 'r',
    'e', 'g', 'a', ' ', 'd', 'i', ' ', 'i', 'n', 's', 'e', 'r', 'i', 'r', 'n',
    'e', ' ', 'u', 'n', 'a', '.', '\r', '\n' };

  static const char_T g_Value[39] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'V', 'a', 'l', 'o', 'r', 'e', ' ', 'i', 'n', 's', 'e', 'r',
    'i', 't', 'o', ' ', 'n', 'o', 'n', ' ', 'v', 'a', 'l', 'i', 'd', 'o', '.',
    '\r', '\n' };

  static const char_T j_Value[81] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'U', 's', 'c', 'i', 't', 'a', ' ', 'i', 'n', ' ', 'c', 'o',
    'r', 's', 'o', '.', '\r', '\n', 'V', 'e', 'r', 'r', 'a', 'n', 'n', 'o', ' ',
    'r', 'i', 'p', 'r', 'i', 's', 't', 'i', 'n', 'a', 't', 'e', ' ', 'l', 'e',
    ' ', 'c', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'z', 'i', 'o', 'n', 'i',
    ' ', 'p', 'r', 'e', 'c', 'e', 'd', 'e', 'n', 't', 'i', '.', '\r', '\n' };

  int32_T tmp;
  boolean_T guard1;
  Progetto_Gruppo2_emxInit_char_T(&obj_Value, 2);
  if (*UARTUSARTRead_o2 > 0U) {
    b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
    tmp = obj_Value->size[0] * obj_Value->size[1];
    obj_Value->size[0] = 1;
    obj_Value->size[1] = b;
    Proget_emxEnsureCapacity_char_T(obj_Value, tmp);
    strncpy(&obj_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
            (uint32_T)b);
    out = false;
    if ((obj_Value->size[1] == 1) && (obj_Value->data[0] == '1')) {
      out = true;
    }

    if (out) {
      Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
        Proget_IN_Regolazione_veneziane;
      Progetto_Gruppo21_IZ_DW.is_Regolazione_veneziane =
        Progetto_G_IN_Stampa_iniziale_m;
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &k_Value[0], 87U * sizeof(char_T));
      Progetto_Gruppo21_IZ_B.msgOut[87] = '\x00';
      strncpy(&Progetto_Gruppo21_IZ_DW.msg[0], "", 255U);
      Progetto_Gruppo21_IZ_DW.msg[255] = '\x00';
      Progetto_Gruppo21_IZ_DW.msg[0] = '\x00';
    } else {
      b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
      Progetto_Gruppo2_emxInit_char_T(&b_obj_Value, 2);
      tmp = b_obj_Value->size[0] * b_obj_Value->size[1];
      b_obj_Value->size[0] = 1;
      b_obj_Value->size[1] = b;
      Proget_emxEnsureCapacity_char_T(b_obj_Value, tmp);
      strncpy(&b_obj_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
              (uint32_T)b);
      out = false;
      if ((b_obj_Value->size[1] == 1) && (b_obj_Value->data[0] == '2')) {
        out = true;
      }

      Progetto_Gruppo2_emxFree_char_T(&b_obj_Value);
      if (out) {
        Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
          Progetto_Gru_IN_Accensione_luci;
        Progetto_Gruppo21_IZ_DW.is_Accensione_luci =
          Progetto_Gru_IN_Stampa_iniziale;
        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &l_Value[0], 77U * sizeof
               (char_T));
        Progetto_Gruppo21_IZ_B.msgOut[77] = '\x00';
      } else {
        b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
        Progetto_Gruppo2_emxInit_char_T(&c_obj_Value, 2);
        tmp = c_obj_Value->size[0] * c_obj_Value->size[1];
        c_obj_Value->size[0] = 1;
        c_obj_Value->size[1] = b;
        Proget_emxEnsureCapacity_char_T(c_obj_Value, tmp);
        strncpy(&c_obj_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
                (uint32_T)b);
        out = false;
        if ((c_obj_Value->size[1] == 1) && (c_obj_Value->data[0] == '3')) {
          out = true;
        }

        Progetto_Gruppo2_emxFree_char_T(&c_obj_Value);
        if (out) {
          Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
            IN_Configurazione_riscaldamento;
          Progetto_Gruppo21_IZ_DW.is_Configurazione_riscaldamento =
            Progetto_G_IN_Stampa_iniziale_m;
          strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
          Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
          memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &m_Value[0], 103U * sizeof
                 (char_T));
          Progetto_Gruppo21_IZ_B.msgOut[103] = '\x00';
          strncpy(&Progetto_Gruppo21_IZ_DW.msg[0], "", 255U);
          Progetto_Gruppo21_IZ_DW.msg[255] = '\x00';
          Progetto_Gruppo21_IZ_DW.msg[0] = '\x00';
        } else {
          b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
          Progetto_Gruppo2_emxInit_char_T(&d_obj_Value, 2);
          tmp = d_obj_Value->size[0] * d_obj_Value->size[1];
          d_obj_Value->size[0] = 1;
          d_obj_Value->size[1] = b;
          Proget_emxEnsureCapacity_char_T(d_obj_Value, tmp);
          strncpy(&d_obj_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
                  (uint32_T)b);
          out = false;
          if ((d_obj_Value->size[1] == 1) && (d_obj_Value->data[0] == '4')) {
            out = true;
          }

          Progetto_Gruppo2_emxFree_char_T(&d_obj_Value);
          Progetto_Gruppo2_emxInit_char_T(&e_obj_Value, 2);
          guard1 = false;
          if (out) {
            if ((Progetto_Gruppo21_IZ_DW.valoreVeneziane == -1.0) ||
                (Progetto_Gruppo21_IZ_DW.valoreRiscaldamento == -1.0) ||
                (Progetto_Gruppo21_IZ_DW.modLuci == -1.0) ||
                (Progetto_Gruppo21_IZ_DW.valoreTemporizzazione == -1.0)) {
              guard1 = true;
            } else {
              Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
              Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
                Progett_IN_Salva_configurazione;
              strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
              Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
              for (b = 0; b < 48; b++) {
                Progetto_Gruppo21_IZ_B.msgOut[b] = h_Value[b];
              }

              Progetto_Gruppo21_IZ_B.msgOut[48] = '\x00';
              Progetto_Gruppo21_IZ_DW.tmpVeneziane =
                Progetto_Gruppo21_IZ_DW.valoreVeneziane;
              Progetto_Gruppo21_IZ_DW.tmpRiscaldamento =
                Progetto_Gruppo21_IZ_DW.valoreRiscaldamento;
              Progetto_Gruppo21_IZ_DW.tmpTemporizzazione =
                Progetto_Gruppo21_IZ_DW.valoreTemporizzazione;
              Progetto_Gruppo21_IZ_DW.tmpModLuci =
                Progetto_Gruppo21_IZ_DW.modLuci;
              Progetto_Gruppo21_IZ_DW.configurazioneValida = true;
            }
          } else {
            b = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
            tmp = e_obj_Value->size[0] * e_obj_Value->size[1];
            e_obj_Value->size[0] = 1;
            e_obj_Value->size[1] = b;
            Proget_emxEnsureCapacity_char_T(e_obj_Value, tmp);
            strncpy(&e_obj_Value->data[0],
                    &Progetto_Gruppo21_IZ_B.ASCIItoString[0], (uint32_T)b);
            out = false;
            if ((e_obj_Value->size[1] == 1) && (e_obj_Value->data[0] == '5')) {
              out = true;
            }

            if (out) {
              if ((Progetto_Gruppo21_IZ_DW.tmpVeneziane == -1.0) ||
                  (Progetto_Gruppo21_IZ_DW.tmpRiscaldamento == -1.0) ||
                  (Progetto_Gruppo21_IZ_DW.tmpModLuci == -1.0) ||
                  (Progetto_Gruppo21_IZ_DW.tmpTemporizzazione == -1.0)) {
                guard1 = true;
              } else {
                Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
                Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
                  Proget_IN_Uscita_configurazione;
                strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
                Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
                memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &j_Value[0], 81U *
                       sizeof(char_T));
                Progetto_Gruppo21_IZ_B.msgOut[81] = '\x00';
                Progetto_Gruppo21_IZ_DW.valoreVeneziane =
                  Progetto_Gruppo21_IZ_DW.tmpVeneziane;
                Progetto_Gruppo21_IZ_DW.valoreRiscaldamento =
                  Progetto_Gruppo21_IZ_DW.tmpRiscaldamento;
                Progetto_Gruppo21_IZ_DW.valoreTemporizzazione =
                  Progetto_Gruppo21_IZ_DW.tmpTemporizzazione;
                Progetto_Gruppo21_IZ_DW.modLuci =
                  Progetto_Gruppo21_IZ_DW.tmpModLuci;
              }
            } else {
              Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
              Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
                Progetto_Gruppo_IN_Stato_errore;
              strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
              Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
              for (b = 0; b < 39; b++) {
                Progetto_Gruppo21_IZ_B.msgOut[b] = g_Value[b];
              }

              Progetto_Gruppo21_IZ_B.msgOut[39] = '\x00';
            }
          }

          if (guard1) {
            Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
            Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
              Progetto_Grupp_IN_Errore_uscita;
            strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
            Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
            memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &i_Value[0], 75U * sizeof
                   (char_T));
            Progetto_Gruppo21_IZ_B.msgOut[75] = '\x00';
          }

          Progetto_Gruppo2_emxFree_char_T(&e_obj_Value);
        }
      }
    }
  } else {
    strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
    Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
    Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
  }

  Progetto_Gruppo2_emxFree_char_T(&obj_Value);
}

/* Function for Chart: '<Root>/Chart' */
static void exit_internal_Stato_di_configur(void)
{
  switch (Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione) {
   case Progetto_Gru_IN_Accensione_luci:
    if (Progetto_Gruppo21_IZ_DW.is_Accensione_luci ==
        Progetto_G_IN_Luci_temporizzate) {
      if (Progetto_Gruppo21_IZ_DW.is_Luci_temporizzate ==
          IN_Stampa_valore_temporizzazion) {
        strncpy(&Progetto_Gruppo21_IZ_DW.msg[0], "", 255U);
        Progetto_Gruppo21_IZ_DW.msg[255] = '\x00';
        Progetto_Gruppo21_IZ_DW.msg[0] = '\x00';
        Progetto_Gruppo21_IZ_DW.is_Luci_temporizzate =
          Progetto_Gru_IN_NO_ACTIVE_CHILD;
      } else {
        Progetto_Gruppo21_IZ_DW.is_Luci_temporizzate =
          Progetto_Gru_IN_NO_ACTIVE_CHILD;
      }

      Progetto_Gruppo21_IZ_DW.is_Accensione_luci =
        Progetto_Gru_IN_NO_ACTIVE_CHILD;
    } else {
      Progetto_Gruppo21_IZ_DW.is_Accensione_luci =
        Progetto_Gru_IN_NO_ACTIVE_CHILD;
    }

    Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
      Progetto_Gru_IN_NO_ACTIVE_CHILD;
    break;

   case IN_Configurazione_riscaldamento:
    if (Progetto_Gruppo21_IZ_DW.is_Configurazione_riscaldamento ==
        IN_Stampa_valore_riscaldamento) {
      strncpy(&Progetto_Gruppo21_IZ_DW.msg[0], "", 255U);
      Progetto_Gruppo21_IZ_DW.msg[255] = '\x00';
      Progetto_Gruppo21_IZ_DW.msg[0] = '\x00';
      Progetto_Gruppo21_IZ_DW.is_Configurazione_riscaldamento =
        Progetto_Gru_IN_NO_ACTIVE_CHILD;
    } else {
      Progetto_Gruppo21_IZ_DW.is_Configurazione_riscaldamento =
        Progetto_Gru_IN_NO_ACTIVE_CHILD;
    }

    Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
      Progetto_Gru_IN_NO_ACTIVE_CHILD;
    break;

   case Proget_IN_Regolazione_veneziane:
    if (Progetto_Gruppo21_IZ_DW.is_Regolazione_veneziane ==
        Prog_IN_Stampa_valore_veneziane) {
      strncpy(&Progetto_Gruppo21_IZ_DW.msg[0], "", 255U);
      Progetto_Gruppo21_IZ_DW.msg[255] = '\x00';
      Progetto_Gruppo21_IZ_DW.msg[0] = '\x00';
      Progetto_Gruppo21_IZ_DW.is_Regolazione_veneziane =
        Progetto_Gru_IN_NO_ACTIVE_CHILD;
    } else {
      Progetto_Gruppo21_IZ_DW.is_Regolazione_veneziane =
        Progetto_Gru_IN_NO_ACTIVE_CHILD;
    }

    Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
      Progetto_Gru_IN_NO_ACTIVE_CHILD;
    break;

   case Progetto_Gruppo_IN_Stato_errore:
    strncpy(&Progetto_Gruppo21_IZ_DW.msg[0], "", 255U);
    Progetto_Gruppo21_IZ_DW.msg[255] = '\x00';
    Progetto_Gruppo21_IZ_DW.msg[0] = '\x00';
    Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
      Progetto_Gru_IN_NO_ACTIVE_CHILD;
    break;

   default:
    Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
      Progetto_Gru_IN_NO_ACTIVE_CHILD;
    break;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void Progetto_Gruppo2_Gestore_logica(const uint32_T *UARTUSARTRead_o2)
{
  emxArray_char_T_Progetto_Grup_T *b_Value;
  emxArray_char_T_Progetto_Grup_T *g_Value;
  emxArray_char_T_Progetto_Grup_T *obj_Value;
  int32_T e;
  boolean_T b_out;
  static const char_T k_Value[125] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'z', 'i', 'o',
    'n', 'e', ':', '\r', '\n', '1', '.', ' ', 'R', 'e', 'g', 'o', 'l', 'a', 'z',
    'i', 'o', 'n', 'e', ' ', 'v', 'e', 'n', 'e', 'z', 'i', 'a', 'n', 'e', '\r',
    '\n', '2', '.', ' ', 'A', 'c', 'c', 'e', 'n', 's', 'i', 'o', 'n', 'e', ' ',
    'l', 'u', 'c', 'i', '\r', '\n', '3', '.', ' ', 'C', 'o', 'n', 'f', 'i', 'g',
    'u', 'r', 'a', 'z', 'i', 'o', 'n', 'e', ' ', 'r', 'i', 's', 'c', 'a', 'l',
    'd', 'a', 'm', 'e', 'n', 't', 'o', '\r', '\n', '4', '.', ' ', 'S', 'a', 'l',
    'v', 'a', '\r', '\n', '5', '.', ' ', 'E', 's', 'c', 'i', '\r', '\n' };

  static const char_T c_Value[81] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'U', 's', 'c', 'i', 't', 'a', ' ', 'i', 'n', ' ', 'c', 'o',
    'r', 's', 'o', '.', '\r', '\n', 'V', 'e', 'r', 'r', 'a', 'n', 'n', 'o', ' ',
    'r', 'i', 'p', 'r', 'i', 's', 't', 'i', 'n', 'a', 't', 'e', ' ', 'l', 'e',
    ' ', 'c', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'z', 'i', 'o', 'n', 'i',
    ' ', 'p', 'r', 'e', 'c', 'e', 'd', 'e', 'n', 't', 'i', '.', '\r', '\n' };

  static const char_T d_Value[75] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'z', 'i', 'o',
    'n', 'e', ' ', 'v', 'a', 'l', 'i', 'd', 'a', ' ', 'n', 'o', 'n', ' ', 'p',
    'r', 'e', 's', 'e', 'n', 't', 'e', '.', '\r', '\n', 'S', 'i', ' ', 'p', 'r',
    'e', 'g', 'a', ' ', 'd', 'i', ' ', 'i', 'n', 's', 'e', 'r', 'i', 'r', 'n',
    'e', ' ', 'u', 'n', 'a', '.', '\r', '\n' };

  static const char_T p_Value[39] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'V', 'a', 'l', 'o', 'r', 'e', ' ', 'i', 'n', 's', 'e', 'r',
    'i', 't', 'o', ' ', 'n', 'o', 'n', ' ', 'v', 'a', 'l', 'i', 'd', 'o', '.',
    '\r', '\n' };

  static const char_T s[27] = { '\r', '\n', 'V', 'a', 'l', 'o', 'r', 'e', ' ',
    'v', 'a', 'l', 'i', 'd', 'o', ' ', 'i', 'm', 'p', 'o', 's', 't', 'a', 't',
    'o', ':', ' ' };

  static const char_T t[7] = { ' ', 'g', 'r', 'a', 'd', 'i', '.' };

  static const char_T r_Value[37] = { '\r', '\n', 'C', 'o', 'n', 't', 'r', 'o',
    'l', 'l', 'o', ' ', 'v', 'a', 'l', 'o', 'r', 'e', ' ', 'i', 'n', 's', 'e',
    'r', 'i', 't', 'o', ' ', 'i', 'n', ' ', 'c', 'o', 'r', 's', 'o', '.' };

  int32_T tmp;
  Progetto_Gruppo2_emxInit_char_T(&b_Value, 2);
  if (Progetto_Gruppo21_IZ_DW.is_Gestore_logica ==
      Progetto_Gru_IN_Stato_Operativo) {
    if (resultZC4) {
      Progetto_Gruppo21_IZ_DW.is_Gestore_logica =
        Prog_IN_Stato_di_configurazione;
      enter_internal_Stato_di_configu();
    } else if (Progetto_Gruppo21_IZ_DW.temporalCounter_i2 >= 20) {
      Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
      Progetto__msgAggiornamentoStato(Progetto_Gruppo21_IZ_DW.riscaldamento,
        Progetto_Gruppo21_IZ_DW.veneziane, Progetto_Gruppo21_IZ_DW.luci,
        Progetto_Gruppo21_IZ_DW.tempo, b_Value);
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      if (b_Value->size[1] <= 255) {
        e = b_Value->size[1];
      } else {
        e = 255;
      }

      if (e - 1 >= 0) {
        memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &b_Value->data[0], (uint32_T)e
               * sizeof(char_T));
      }

      Progetto_Gruppo21_IZ_B.msgOut[e] = '\x00';
    } else {
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
    }

    /* case IN_Stato_di_configurazione: */
  } else if (resultZC3) {
    if ((Progetto_Gruppo21_IZ_DW.tmpVeneziane == -1.0) ||
        (Progetto_Gruppo21_IZ_DW.tmpRiscaldamento == -1.0) ||
        (Progetto_Gruppo21_IZ_DW.tmpModLuci == -1.0) ||
        (Progetto_Gruppo21_IZ_DW.tmpTemporizzazione == -1.0)) {
      exit_internal_Stato_di_configur();
      Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
      Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
        Progetto_Grupp_IN_Errore_uscita;
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &d_Value[0], 75U * sizeof(char_T));
      Progetto_Gruppo21_IZ_B.msgOut[75] = '\x00';
    } else {
      exit_internal_Stato_di_configur();
      Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
      Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
        Proget_IN_Uscita_configurazione;
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &c_Value[0], 81U * sizeof(char_T));
      Progetto_Gruppo21_IZ_B.msgOut[81] = '\x00';
      Progetto_Gruppo21_IZ_DW.valoreVeneziane =
        Progetto_Gruppo21_IZ_DW.tmpVeneziane;
      Progetto_Gruppo21_IZ_DW.valoreRiscaldamento =
        Progetto_Gruppo21_IZ_DW.tmpRiscaldamento;
      Progetto_Gruppo21_IZ_DW.valoreTemporizzazione =
        Progetto_Gruppo21_IZ_DW.tmpTemporizzazione;
      Progetto_Gruppo21_IZ_DW.modLuci = Progetto_Gruppo21_IZ_DW.tmpModLuci;
    }
  } else {
    switch (Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione) {
     case Progetto_Gru_IN_Accensione_luci:
      Progetto_Gruppo_Accensione_luci(UARTUSARTRead_o2);
      break;

     case IN_Configurazione_riscaldamento:
      Progetto_Gruppo2_emxInit_char_T(&obj_Value, 2);
      Progetto_Gruppo2_emxInit_char_T(&g_Value, 2);
      switch (Progetto_Gruppo21_IZ_DW.is_Configurazione_riscaldamento) {
       case Progett_IN_Buffer_riscaldamento:
        e = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
        tmp = obj_Value->size[0] * obj_Value->size[1];
        obj_Value->size[0] = 1;
        obj_Value->size[1] = e;
        Proget_emxEnsureCapacity_char_T(obj_Value, tmp);
        strncpy(&obj_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
                (uint32_T)e);
        b_out = false;
        if ((obj_Value->size[1] == 1) && (obj_Value->data[0] == '\r')) {
          b_out = true;
        }

        if (b_out) {
          Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
          Progetto_Gruppo21_IZ_DW.is_Configurazione_riscaldamento =
            IN_Conferma_valore_riscaldament;
          e = (int32_T)strlen(&Progetto_Gruppo21_IZ_DW.msg[0]);
          tmp = b_Value->size[0] * b_Value->size[1];
          b_Value->size[0] = 1;
          b_Value->size[1] = e;
          Proget_emxEnsureCapacity_char_T(b_Value, tmp);
          strncpy(&b_Value->data[0], &Progetto_Gruppo21_IZ_DW.msg[0], (uint32_T)
                  e);
          Progetto_Gruppo21_IZ_DW.isValidRiscaldamento =
            Proget_checkValoreRiscaldamento(b_Value);
          strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
          Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
          for (e = 0; e < 37; e++) {
            Progetto_Gruppo21_IZ_B.msgOut[e] = r_Value[e];
          }

          Progetto_Gruppo21_IZ_B.msgOut[37] = '\x00';
        } else {
          if (*UARTUSARTRead_o2 > 0U) {
            e = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
            tmp = b_Value->size[0] * b_Value->size[1];
            b_Value->size[0] = 1;
            b_Value->size[1] = e;
            Proget_emxEnsureCapacity_char_T(b_Value, tmp);
            strncpy(&b_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
                    (uint32_T)e);
            if (Progetto_Gruppo21_IZ_string_ge(b_Value)) {
              e = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
              tmp = g_Value->size[0] * g_Value->size[1];
              g_Value->size[0] = 1;
              g_Value->size[1] = e;
              Proget_emxEnsureCapacity_char_T(g_Value, tmp);
              strncpy(&g_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
                      (uint32_T)e);
              b_out = Progetto_Gruppo21_IZ_string_le(g_Value);
            } else {
              b_out = false;
            }
          } else {
            b_out = false;
          }

          if (b_out) {
            Progetto_Gruppo21_IZ_DW.is_Configurazione_riscaldamento =
              Progett_IN_Buffer_riscaldamento;
            enter_atomic_Buffer_temporizzaz();
          } else {
            strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
            Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
            Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
          }
        }
        break;

       case IN_Conferma_valore_riscaldament:
        if (Progetto_Gruppo21_IZ_DW.temporalCounter_i2 >= 2) {
          if (Progetto_Gruppo21_IZ_DW.isValidRiscaldamento) {
            Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
            Progetto_Gruppo21_IZ_DW.is_Configurazione_riscaldamento =
              IN_Stampa_valore_riscaldamento;
            e = (int32_T)strlen(&Progetto_Gruppo21_IZ_DW.msg[0]);
            tmp = obj_Value->size[0] * obj_Value->size[1];
            obj_Value->size[0] = 1;
            obj_Value->size[1] = e;
            Proget_emxEnsureCapacity_char_T(obj_Value, tmp);
            strncpy(&obj_Value->data[0], &Progetto_Gruppo21_IZ_DW.msg[0],
                    (uint32_T)e);
            tmp = b_Value->size[0] * b_Value->size[1];
            b_Value->size[0] = 1;
            b_Value->size[1] = obj_Value->size[1] + 34;
            Proget_emxEnsureCapacity_char_T(b_Value, tmp);
            for (e = 0; e < 27; e++) {
              b_Value->data[e] = s[e];
            }

            e = obj_Value->size[1];
            if (e - 1 >= 0) {
              memcpy(&b_Value->data[27], &obj_Value->data[0], (uint32_T)e *
                     sizeof(char_T));
            }

            for (e = 0; e < 7; e++) {
              b_Value->data[(e + obj_Value->size[1]) + 27] = t[e];
            }

            strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
            Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
            if (b_Value->size[1] <= 255) {
              e = obj_Value->size[1] + 34;
            } else {
              e = 255;
            }

            if (e - 1 >= 0) {
              memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &b_Value->data[0],
                     (uint32_T)e * sizeof(char_T));
            }

            Progetto_Gruppo21_IZ_B.msgOut[e] = '\x00';
            e = (int32_T)strlen(&Progetto_Gruppo21_IZ_DW.msg[0]);
            tmp = g_Value->size[0] * g_Value->size[1];
            g_Value->size[0] = 1;
            g_Value->size[1] = e;
            Proget_emxEnsureCapacity_char_T(g_Value, tmp);
            strncpy(&g_Value->data[0], &Progetto_Gruppo21_IZ_DW.msg[0],
                    (uint32_T)e);
            Progetto_Gruppo21_IZ_DW.valoreRiscaldamento =
              Progetto_Gruppo21__convertitore(g_Value);
          } else {
            Progetto_Gruppo21_IZ_DW.is_Configurazione_riscaldamento =
              Progetto_Gru_IN_NO_ACTIVE_CHILD;
            Progetto_Gruppo21_IZ_DW.temporalCounter_i2 = 0U;
            Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
              Progetto_Gruppo_IN_Stato_errore;
            strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
            Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
            for (e = 0; e < 39; e++) {
              Progetto_Gruppo21_IZ_B.msgOut[e] = p_Value[e];
            }

            Progetto_Gruppo21_IZ_B.msgOut[39] = '\x00';
          }
        } else {
          strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
          Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
          Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
        }
        break;

       case Progetto_G_IN_Stampa_iniziale_m:
        if (*UARTUSARTRead_o2 > 0U) {
          e = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
          tmp = b_Value->size[0] * b_Value->size[1];
          b_Value->size[0] = 1;
          b_Value->size[1] = e;
          Proget_emxEnsureCapacity_char_T(b_Value, tmp);
          strncpy(&b_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
                  (uint32_T)e);
          if (Progetto_Gruppo21_IZ_string_ge(b_Value)) {
            e = (int32_T)strlen(&Progetto_Gruppo21_IZ_B.ASCIItoString[0]);
            tmp = g_Value->size[0] * g_Value->size[1];
            g_Value->size[0] = 1;
            g_Value->size[1] = e;
            Proget_emxEnsureCapacity_char_T(g_Value, tmp);
            strncpy(&g_Value->data[0], &Progetto_Gruppo21_IZ_B.ASCIItoString[0],
                    (uint32_T)e);
            b_out = Progetto_Gruppo21_IZ_string_le(g_Value);
          } else {
            b_out = false;
          }
        } else {
          b_out = false;
        }

        if (b_out) {
          Progetto_Gruppo21_IZ_DW.is_Configurazione_riscaldamento =
            Progett_IN_Buffer_riscaldamento;
          enter_atomic_Buffer_temporizzaz();
        } else {
          strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
          Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
          Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
        }
        break;

       default:
        /* case IN_Stampa_valore_riscaldamento: */
        if (Progetto_Gruppo21_IZ_DW.temporalCounter_i2 >= 2) {
          strncpy(&Progetto_Gruppo21_IZ_DW.msg[0], "", 255U);
          Progetto_Gruppo21_IZ_DW.msg[255] = '\x00';
          Progetto_Gruppo21_IZ_DW.msg[0] = '\x00';
          Progetto_Gruppo21_IZ_DW.is_Configurazione_riscaldamento =
            Progetto_Gru_IN_NO_ACTIVE_CHILD;
          Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
            IN_Stampa_messaggio_configurazi;
          strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
          Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
          memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &k_Value[0], 125U * sizeof
                 (char_T));
          Progetto_Gruppo21_IZ_B.msgOut[125] = '\x00';
        } else {
          strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
          Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
          Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
        }
        break;
      }

      Progetto_Gruppo2_emxFree_char_T(&g_Value);
      Progetto_Gruppo2_emxFree_char_T(&obj_Value);
      break;

     case Progetto_Grupp_IN_Errore_uscita:
      if (Progetto_Gruppo21_IZ_DW.temporalCounter_i2 >= 2) {
        Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
          IN_Stampa_messaggio_configurazi;
        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &k_Value[0], 125U * sizeof
               (char_T));
        Progetto_Gruppo21_IZ_B.msgOut[125] = '\x00';
      } else {
        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
      }
      break;

     case Proget_IN_Regolazione_veneziane:
      Progetto__Regolazione_veneziane(UARTUSARTRead_o2);
      break;

     case Progett_IN_Salva_configurazione:
      if (Progetto_Gruppo21_IZ_DW.temporalCounter_i2 >= 2) {
        Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
          Progetto_Gru_IN_NO_ACTIVE_CHILD;
        Progetto_Gruppo21_IZ_DW.is_Gestore_logica =
          Progetto_Gru_IN_Stato_Operativo;
        enter_internal_Stato_Operativo();
      } else {
        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
      }
      break;

     case IN_Stampa_messaggio_configurazi:
      Stampa_messaggio_configurazione(UARTUSARTRead_o2);
      break;

     case Progetto_Gruppo_IN_Stato_errore:
      if (Progetto_Gruppo21_IZ_DW.temporalCounter_i2 >= 2) {
        strncpy(&Progetto_Gruppo21_IZ_DW.msg[0], "", 255U);
        Progetto_Gruppo21_IZ_DW.msg[255] = '\x00';
        Progetto_Gruppo21_IZ_DW.msg[0] = '\x00';
        Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
          IN_Stampa_messaggio_configurazi;
        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        memcpy(&Progetto_Gruppo21_IZ_B.msgOut[0], &k_Value[0], 125U * sizeof
               (char_T));
        Progetto_Gruppo21_IZ_B.msgOut[125] = '\x00';
      } else {
        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
      }
      break;

     default:
      /* case IN_Uscita_configurazione: */
      if (Progetto_Gruppo21_IZ_DW.temporalCounter_i2 >= 2) {
        Progetto_Gruppo21_IZ_DW.is_Stato_di_configurazione =
          Progetto_Gru_IN_NO_ACTIVE_CHILD;
        Progetto_Gruppo21_IZ_DW.is_Gestore_logica =
          Progetto_Gru_IN_Stato_Operativo;
        enter_internal_Stato_Operativo();
      } else {
        strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
        Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
        Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
      }
      break;
    }
  }

  Progetto_Gruppo2_emxFree_char_T(&b_Value);
}

/* Function for Chart: '<Root>/Chart' */
static void enter_internal_Gestore_pulsante(void)
{
  if (Progetto_Gruppo21_IZ_DW.luci == 1.0) {
    Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci =
      Progetto_Gr_IN_Caso_luci_accese;
    Progetto_Gruppo21_IZ_DW.luci = 2.0;
    Progetto_Gruppo21_IZ_B.outputLuci = Progetto_Gruppo21_IZ_OFF;
  } else if (Progetto_Gruppo21_IZ_DW.luci == 2.0) {
    Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci =
      Progetto_Gr_IN_Caso_luci_spente;
    Progetto_Gruppo21_IZ_DW.luci = 1.0;
    Progetto_Gruppo21_IZ_B.outputLuci = Progetto_Gruppo21_IZ_ON;
  } else {
    Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci =
      Progetto_Grupp_IN_Caso_luci_tmp;
    Progetto_Gruppo21_IZ_DW.luci = 2.0;
    Progetto_Gruppo21_IZ_B.outputLuci = Progetto_Gruppo21_IZ_OFF;
  }
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void Progetto_Grupp_SystemCore_setup(stm32cube_blocks_UARTRead_Pro_T *obj)
{
  UART_Type_T b;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<Root>/UART//USART Read' */
  obj->isInitialized = 1;
  b.buffer.rxBufferPtr = (void*)(&obj->UARTInternalBuffer[0]);
  b.enableRxOrTx = 1.0;

  /* Start for MATLABSystem: '<Root>/UART//USART Read' */
  b.mode = UART_RX_INTERRUPT_MODE;
  b.peripheralPtr = LPUART1;

  /* Start for MATLABSystem: '<Root>/UART//USART Read' */
  b.rxdmaPeripheralPtr = NULL;
  b.rxdmastream = 0;
  b.disableDMAIntOnError = false;

  /* Start for MATLABSystem: '<Root>/UART//USART Read' */
  b.buffer.rxBufferSize = 128U;
  obj->UARTHandle = MW_LPUART_Initialize(&b);
  obj->isSetupComplete = true;
}

static void Progetto_Gr_UARTWrite_setupImpl(stm32cube_blocks_UARTWrite_Pr_T *obj)
{
  UART_Type_T b;
  b.buffer.txBufferPtr = (void*)(&obj->UARTInternalBuffer[0]);

  /* Start for MATLABSystem: '<Root>/UART//USART Write' */
  b.enableRxOrTx = 2U;
  b.mode = UART_TX_INTERRUPT_MODE;
  b.peripheralPtr = LPUART1;

  /* Start for MATLABSystem: '<Root>/UART//USART Write' */
  b.txdmaPeripheralPtr = NULL;
  b.txdmastream = 0;
  b.buffer.txBufferSize = 128U;
  obj->UARTHandle = MW_LPUART_Initialize(&b);
}

static void Progetto_Gr_PWMOutput_setupImpl(stm32cube_blocks_PWMOutput_Pr_T *obj)
{
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<S25>/PWM Output' */
  b.PeripheralPtr = TIM3;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<S25>/PWM Output' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  enableTimerChannel1(obj->TimerHandle, ENABLE_CH);
  enableTimerChannel2(obj->TimerHandle, ENABLE_CH);
  enableTimerChannel4(obj->TimerHandle, ENABLE_CH);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<S25>/PWM Output' */
    enableCounter(obj->TimerHandle, false);
  }
}

static void Progetto__PWMOutput_setupImpl_o(stm32cube_blocks_PWMOutput_Pr_T *obj)
{
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<S27>/PWM Output' */
  b.PeripheralPtr = TIM4;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<S27>/PWM Output' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  enableTimerChannel1(obj->TimerHandle, ENABLE_CH);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<S27>/PWM Output' */
    enableCounter(obj->TimerHandle, false);
  }
}

/* Model step function */
void Progetto_Gruppo21_IZ_step(void)
{
  GPIO_TypeDef * portNameLoc;
  real_T tmp;
  int32_T led_utente;
  int32_T rtb_blue;
  int32_T rtb_green;
  uint32_T UARTUSARTRead_o2;
  uint32_T dataBytesToRead;
  uint8_T uartWriteData[127];
  uint8_T uartReadData;
  boolean_T DigitalPortRead_g;
  boolean_T DigitalPortRead_k;
  boolean_T DigitalPortRead_o;
  static const char_T c_Value[33] = { '\x1b', '[', '0', ';', '0', 'H', '\x1b',
    '[', '2', 'J', 'D', 'i', 's', 'p', 'o', 's', 'i', 't', 'i', 'v', 'o', ' ',
    'n', 'o', 'n', ' ', 'a', 't', 't', 'i', 'v', 'o', '.' };

  /* MATLABSystem: '<Root>/UART//USART Read' */
  dataBytesToRead = getBytesToBeReadFromBuffer
    (Progetto_Gruppo21_IZ_DW.obj.UARTHandle, 1U, 0U);
  if (dataBytesToRead > 0U) {
    /* MATLABSystem: '<Root>/UART//USART Read' */
    MW_LPUART_ReceiveUsingBuffer(Progetto_Gruppo21_IZ_DW.obj.UARTHandle,
      &uartReadData, dataBytesToRead, &UARTUSARTRead_o2);
  } else {
    MW_LPUART_GetReadErrorStatus(Progetto_Gruppo21_IZ_DW.obj.UARTHandle);

    /* MATLABSystem: '<Root>/UART//USART Read' */
    UARTUSARTRead_o2 = 0U;
  }

  /* ASCIIToString: '<Root>/ASCII to String' incorporates:
   *  MATLABSystem: '<Root>/UART//USART Read'
   * */
  Progetto_Gruppo21_IZ_B.ASCIItoString[0] = (int8_T)uartReadData;
  Progetto_Gruppo21_IZ_B.ASCIItoString[1] = '\x00';

  /* MATLABSystem: '<S13>/Digital Port Read' */
  dataBytesToRead = LL_GPIO_ReadInputPort(GPIOC);

  /* MATLABSystem: '<S13>/Digital Port Read' */
  DigitalPortRead_o = ((dataBytesToRead & 8192U) != 0U);

  /* MATLABSystem: '<S15>/Digital Port Read' */
  dataBytesToRead = LL_GPIO_ReadInputPort(GPIOB);

  /* MATLABSystem: '<S15>/Digital Port Read' */
  DigitalPortRead_k = ((dataBytesToRead & 1U) != 0U);

  /* MATLABSystem: '<S17>/Digital Port Read' */
  dataBytesToRead = LL_GPIO_ReadInputPort(GPIOC);

  /* MATLABSystem: '<S17>/Digital Port Read' */
  DigitalPortRead_g = ((dataBytesToRead & 1024U) != 0U);

  /* MATLABSystem: '<S19>/Digital Port Read' */
  dataBytesToRead = LL_GPIO_ReadInputPort(GPIOA);

  /* Chart: '<Root>/Chart' incorporates:
   *  MATLABSystem: '<S19>/Digital Port Read'
   * */
  if (Progetto_Gruppo21_IZ_DW.temporalCounter_i1 < MAX_uint32_T) {
    Progetto_Gruppo21_IZ_DW.temporalCounter_i1++;
  }

  if (Progetto_Gruppo21_IZ_DW.temporalCounter_i2 < 31) {
    Progetto_Gruppo21_IZ_DW.temporalCounter_i2++;
  }

  if (Progetto_Gruppo21_IZ_DW.temporalCounter_i3 < 1) {
    Progetto_Gruppo21_IZ_DW.temporalCounter_i3 = 1U;
  }

  resultZC6 = ((int32_T)rt_ZCFcn(RISING_ZERO_CROSSING,
    &Progetto_Gruppo21_IZ_DW.previousZC_mc,
    ((real_T)DigitalPortRead_o)) != 0);
  resultZC5 = ((int32_T)rt_ZCFcn(RISING_ZERO_CROSSING,
    &Progetto_Gruppo21_IZ_DW.previousZC_cs,
    ((real_T)DigitalPortRead_o)) != 0);
  resultZC4 = ((int32_T)rt_ZCFcn(RISING_ZERO_CROSSING,
    &Progetto_Gruppo21_IZ_DW.previousZC_a,
    ((real_T)DigitalPortRead_k)) != 0);
  resultZC3 = ((int32_T)rt_ZCFcn(RISING_ZERO_CROSSING,
    &Progetto_Gruppo21_IZ_DW.previousZC_c,
    ((real_T)DigitalPortRead_k)) != 0);
  resultZC2 = ((int32_T)rt_ZCFcn(RISING_ZERO_CROSSING,
    &Progetto_Gruppo21_IZ_DW.previousZC_g,
    ((real_T)DigitalPortRead_g)) != 0);
  resultZC1 = ((int32_T)rt_ZCFcn(RISING_ZERO_CROSSING,
    &Progetto_Gruppo21_IZ_DW.previousZC_m,
    ((real_T)((dataBytesToRead & 32768U) != 0U))) != 0);
  resultZC0 = ((int32_T)rt_ZCFcn(RISING_ZERO_CROSSING,
    &Progetto_Gruppo21_IZ_DW.previousZC,
    ((real_T)DigitalPortRead_g)) != 0);
  if (Progetto_Gruppo21_IZ_DW.is_active_c3_Progetto_Gruppo21_ == 0) {
    Progetto_Gruppo21_IZ_DW.is_active_c3_Progetto_Gruppo21_ = 1U;
    Progetto_Gruppo21_IZ_DW.valoreVeneziane = -1.0;
    Progetto_Gruppo21_IZ_DW.valoreRiscaldamento = -1.0;
    Progetto_Gruppo21_IZ_DW.modLuci = -1.0;
    Progetto_Gruppo21_IZ_DW.valoreTemporizzazione = -1.0;
    Progetto_Gruppo21_IZ_DW.configurazioneValida = false;
    Progetto_Gruppo21_IZ_DW.is_Inizializzazione =
      Progetto_Grup_IN_Stato_Inattivo;
    strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
    Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
    for (led_utente = 0; led_utente < 33; led_utente++) {
      Progetto_Gruppo21_IZ_B.msgOut[led_utente] = c_Value[led_utente];
    }

    Progetto_Gruppo21_IZ_B.msgOut[33] = '\x00';
    led_utente = (int32_T)Progetto_Gruppo21_IZ_OFF;
    Progetto_Gruppo21_IZ_B.outputVeneziane = 0.0;
    Progetto_Gruppo21_IZ_B.outputLuci = Progetto_Gruppo21_IZ_OFF;
    Progetto_Gruppo21_IZ_B.outputRiscaldamento = 0.0;
  } else if (Progetto_Gruppo21_IZ_DW.is_Inizializzazione ==
             Progetto_Gruppo_IN_Stato_Attivo) {
    if (resultZC6) {
      Progetto_Gruppo21_IZ_DW.valoreVeneziane =
        Progetto_Gruppo21_IZ_DW.tmpVeneziane;
      Progetto_Gruppo21_IZ_DW.valoreRiscaldamento =
        Progetto_Gruppo21_IZ_DW.tmpRiscaldamento;
      Progetto_Gruppo21_IZ_DW.valoreTemporizzazione =
        Progetto_Gruppo21_IZ_DW.tmpTemporizzazione;
      Progetto_Gruppo21_IZ_DW.modLuci = Progetto_Gruppo21_IZ_DW.tmpModLuci;
      Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci =
        Progetto_Gru_IN_NO_ACTIVE_CHILD;
      Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci_TMP =
        Progetto_Gru_IN_NO_ACTIVE_CHILD;
      Progetto_Gruppo21_IZ_DW.is_Gestione_Pulsanti_Luci =
        Progetto_Gru_IN_NO_ACTIVE_CHILD;
      Progetto_Gruppo21_IZ_DW.is_Led_utente = Progetto_Gru_IN_NO_ACTIVE_CHILD;
      if (Progetto_Gruppo21_IZ_DW.is_Gestore_logica ==
          Prog_IN_Stato_di_configurazione) {
        exit_internal_Stato_di_configur();
        Progetto_Gruppo21_IZ_DW.is_Gestore_logica =
          Progetto_Gru_IN_NO_ACTIVE_CHILD;
      } else {
        Progetto_Gruppo21_IZ_DW.is_Gestore_logica =
          Progetto_Gru_IN_NO_ACTIVE_CHILD;
      }

      Progetto_Gruppo21_IZ_DW.is_Inizializzazione =
        Progetto_Grup_IN_Stato_Inattivo;
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      for (led_utente = 0; led_utente < 33; led_utente++) {
        Progetto_Gruppo21_IZ_B.msgOut[led_utente] = c_Value[led_utente];
      }

      Progetto_Gruppo21_IZ_B.msgOut[33] = '\x00';
      led_utente = (int32_T)Progetto_Gruppo21_IZ_OFF;
      Progetto_Gruppo21_IZ_B.outputVeneziane = 0.0;
      Progetto_Gruppo21_IZ_B.outputLuci = Progetto_Gruppo21_IZ_OFF;
      Progetto_Gruppo21_IZ_B.outputRiscaldamento = 0.0;
    } else {
      Progetto_Gruppo2_Gestore_logica(&UARTUSARTRead_o2);
      if (Progetto_Gruppo21_IZ_DW.is_Led_utente ==
          Progetto_Gruppo2_IN_Accendi_led) {
        Progetto_Gruppo21_IZ_DW.temporalCounter_i3 = 0U;
        Progetto_Gruppo21_IZ_DW.is_Led_utente = Progetto_Gruppo21_IN_Spegni_led;
        led_utente = (int32_T)Progetto_Gruppo21_IZ_OFF;
      } else {
        /* case IN_Spegni_led: */
        Progetto_Gruppo21_IZ_DW.temporalCounter_i3 = 0U;
        Progetto_Gruppo21_IZ_DW.is_Led_utente = Progetto_Gruppo2_IN_Accendi_led;
        led_utente = (int32_T)Progetto_Gruppo21_IZ_ON;
      }

      switch (Progetto_Gruppo21_IZ_DW.is_Gestione_Pulsanti_Luci) {
       case Proget_IN_Gestore_pulsante_Luci:
        switch (Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci) {
         case Progetto_Gr_IN_Caso_luci_accese:
          Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci =
            Progetto_Gru_IN_NO_ACTIVE_CHILD;
          Progetto_Gruppo21_IZ_DW.is_Gestione_Pulsanti_Luci =
            Progetto_Gru_IN_Stato_di_Attesa;
          break;

         case Progetto_Gr_IN_Caso_luci_spente:
          Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci =
            Progetto_Gru_IN_NO_ACTIVE_CHILD;
          Progetto_Gruppo21_IZ_DW.is_Gestione_Pulsanti_Luci =
            Progetto_Gru_IN_Stato_di_Attesa;
          break;

         default:
          /* case IN_Caso_luci_tmp: */
          Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci =
            Progetto_Gru_IN_NO_ACTIVE_CHILD;
          Progetto_Gruppo21_IZ_DW.is_Gestione_Pulsanti_Luci =
            Progetto_Gru_IN_Stato_di_Attesa;
          break;
        }
        break;

       case Pr_IN_Gestore_pulsante_Luci_TMP:
        if (resultZC2) {
          Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci_TMP =
            Progetto_Gru_IN_NO_ACTIVE_CHILD;
          Progetto_Gruppo21_IZ_DW.is_Gestione_Pulsanti_Luci =
            Proget_IN_Gestore_pulsante_Luci;
          enter_internal_Gestore_pulsante();
        } else {
          switch (Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci_TMP) {
           case Progetto_Gr_IN_Caso_luci_accese:
            if (Progetto_Gruppo21_IZ_DW.stopTimer) {
              Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci_TMP =
                Progetto_Gru_IN_NO_ACTIVE_CHILD;
              Progetto_Gruppo21_IZ_DW.is_Gestione_Pulsanti_Luci =
                Progetto_Gru_IN_Stato_di_Attesa;
            } else if (Progetto_Gruppo21_IZ_DW.temporalCounter_i1 >= (uint32_T)
                       ceil(Progetto_Gruppo21_IZ_DW.tempo * 2.0)) {
              Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci_TMP =
                Progetto_Gruppo21_IN_Fine_Tempo;
              Progetto_Gruppo21_IZ_DW.luci = 2.0;
              Progetto_Gruppo21_IZ_B.outputLuci = Progetto_Gruppo21_IZ_OFF;
            } else {
              Progetto_Gruppo21_IZ_DW.stopTimer = (Progetto_Gruppo21_IZ_DW.luci
                != 3.0);
            }
            break;

           case Progetto_Gr_IN_Caso_luci_spente:
            if (Progetto_Gruppo21_IZ_DW.stopTimer) {
              Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci_TMP =
                Progetto_Gru_IN_NO_ACTIVE_CHILD;
              Progetto_Gruppo21_IZ_DW.is_Gestione_Pulsanti_Luci =
                Progetto_Gru_IN_Stato_di_Attesa;
            } else if (Progetto_Gruppo21_IZ_DW.temporalCounter_i1 >= (uint32_T)
                       ceil(Progetto_Gruppo21_IZ_DW.tempo * 2.0)) {
              Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci_TMP =
                Progetto_Gruppo21_IN_Fine_Tempo;
              Progetto_Gruppo21_IZ_DW.luci = 2.0;
              Progetto_Gruppo21_IZ_B.outputLuci = Progetto_Gruppo21_IZ_OFF;
            } else {
              Progetto_Gruppo21_IZ_DW.stopTimer = (Progetto_Gruppo21_IZ_DW.luci
                != 3.0);
            }
            break;

           default:
            /* case IN_Fine_Tempo: */
            Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci_TMP =
              Progetto_Gru_IN_NO_ACTIVE_CHILD;
            Progetto_Gruppo21_IZ_DW.is_Gestione_Pulsanti_Luci =
              Progetto_Gru_IN_Stato_di_Attesa;
            break;
          }
        }
        break;

       default:
        /* case IN_Stato_di_Attesa: */
        if (resultZC0 && Progetto_Gruppo21_IZ_DW.configurazioneValida) {
          Progetto_Gruppo21_IZ_DW.is_Gestione_Pulsanti_Luci =
            Proget_IN_Gestore_pulsante_Luci;
          enter_internal_Gestore_pulsante();
        } else if (resultZC1 && Progetto_Gruppo21_IZ_DW.configurazioneValida &&
                   (Progetto_Gruppo21_IZ_DW.valoreTemporizzazione > 0.0)) {
          Progetto_Gruppo21_IZ_DW.is_Gestione_Pulsanti_Luci =
            Pr_IN_Gestore_pulsante_Luci_TMP;
          Progetto_Gruppo21_IZ_DW.stopTimer = false;
          if (Progetto_Gruppo21_IZ_DW.luci == 1.0) {
            Progetto_Gruppo21_IZ_DW.temporalCounter_i1 = 0U;
            Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci_TMP =
              Progetto_Gr_IN_Caso_luci_accese;
            Progetto_Gruppo21_IZ_DW.luci = 3.0;
          } else {
            Progetto_Gruppo21_IZ_DW.temporalCounter_i1 = 0U;
            Progetto_Gruppo21_IZ_DW.is_Gestore_pulsante_Luci_TMP =
              Progetto_Gr_IN_Caso_luci_spente;
            Progetto_Gruppo21_IZ_DW.luci = 3.0;
            Progetto_Gruppo21_IZ_B.outputLuci = Progetto_Gruppo21_IZ_ON;
          }
        }
        break;
      }
    }
  } else {
    /* case IN_Stato_Inattivo: */
    led_utente = (int32_T)Progetto_Gruppo21_IZ_OFF;
    if (resultZC5) {
      Progetto_Gruppo21_IZ_DW.is_Inizializzazione =
        Progetto_Gruppo_IN_Stato_Attivo;
      if (!Progetto_Gruppo21_IZ_DW.configurazioneValida) {
        Progetto_Gruppo21_IZ_DW.is_Gestore_logica =
          Prog_IN_Stato_di_configurazione;
        enter_internal_Stato_di_configu();
      } else {
        Progetto_Gruppo21_IZ_DW.is_Gestore_logica =
          Progetto_Gru_IN_Stato_Operativo;
        enter_internal_Stato_Operativo();
      }

      Progetto_Gruppo21_IZ_DW.temporalCounter_i3 = 0U;
      Progetto_Gruppo21_IZ_DW.is_Led_utente = Progetto_Gruppo2_IN_Accendi_led;
      led_utente = (int32_T)Progetto_Gruppo21_IZ_ON;
      Progetto_Gruppo21_IZ_DW.is_Gestione_Pulsanti_Luci =
        Progetto_Gru_IN_Stato_di_Attesa;
    } else {
      strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
      Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';
      Progetto_Gruppo21_IZ_B.msgOut[0] = '\x00';
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* StringToASCII: '<Root>/String to ASCII' incorporates:
   *  MATLABSystem: '<Root>/UART//USART Write'
   */
  strncpy((char_T *)&uartWriteData[0], &Progetto_Gruppo21_IZ_B.msgOut[0], 127U);

  /* MATLABSystem: '<Root>/UART//USART Write' */
  MW_LPUART_TransmitUsingInterrupt(Progetto_Gruppo21_IZ_DW.obj_g.UARTHandle,
    &uartWriteData[0], 127U, 0U, &UARTUSARTRead_o2);

  /* MATLABSystem: '<S21>/Digital Port Write' */
  portNameLoc = GPIOA;
  if (led_utente != 0) {
    led_utente = 32;
  } else {
    led_utente = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)led_utente);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)led_utente & 32U);

  /* End of MATLABSystem: '<S21>/Digital Port Write' */

  /* MATLABSystem: '<S23>/Digital Port Write' */
  portNameLoc = GPIOC;
  if (Progetto_Gruppo21_IZ_B.outputLuci != 0.0) {
    led_utente = 4;
  } else {
    led_utente = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)led_utente);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)led_utente & 4U);

  /* End of MATLABSystem: '<S23>/Digital Port Write' */

  /* MATLAB Function: '<Root>/MATLAB Function' */
  switch ((int32_T)Progetto_Gruppo21_IZ_B.outputRiscaldamento) {
   case 0:
    led_utente = 0;
    rtb_green = 0;
    rtb_blue = 255;
    break;

   case 1:
    led_utente = 155;
    rtb_green = 0;
    rtb_blue = 155;
    break;

   case 2:
    led_utente = 255;
    rtb_green = 90;
    rtb_blue = 0;
    break;

   case 3:
    led_utente = 255;
    rtb_green = 20;
    rtb_blue = 0;
    break;

   case 4:
    led_utente = 255;
    rtb_green = 0;
    rtb_blue = 0;
    break;

   default:
    led_utente = 0;
    rtb_green = 0;
    rtb_blue = 0;
    break;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */

  /* MATLABSystem: '<S25>/PWM Output' */
  UARTUSARTRead_o2 = checkFrequencyAndDutyCycleLimits
    (Progetto_Gruppo21_IZ_DW.obj_l.TimerHandle, (uint32_T)led_utente);
  setDutyCycleChannel1(Progetto_Gruppo21_IZ_DW.obj_l.TimerHandle,
                       UARTUSARTRead_o2);
  UARTUSARTRead_o2 = checkFrequencyAndDutyCycleLimits
    (Progetto_Gruppo21_IZ_DW.obj_l.TimerHandle, (uint32_T)rtb_green);
  setDutyCycleChannel2(Progetto_Gruppo21_IZ_DW.obj_l.TimerHandle,
                       UARTUSARTRead_o2);
  UARTUSARTRead_o2 = checkFrequencyAndDutyCycleLimits
    (Progetto_Gruppo21_IZ_DW.obj_l.TimerHandle, (uint32_T)rtb_blue);
  setDutyCycleChannel4(Progetto_Gruppo21_IZ_DW.obj_l.TimerHandle,
                       UARTUSARTRead_o2);

  /* MATLABSystem: '<S27>/PWM Output' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function1'
   */
  tmp = rt_roundd_snf(Progetto_Gruppo21_IZ_B.outputVeneziane / 180.0 * 2000.0 +
                      500.0);
  if (tmp < 4.294967296E+9) {
    if (tmp >= 0.0) {
      UARTUSARTRead_o2 = (uint32_T)tmp;
    } else {
      UARTUSARTRead_o2 = 0U;
    }
  } else {
    UARTUSARTRead_o2 = MAX_uint32_T;
  }

  UARTUSARTRead_o2 = checkFrequencyAndDutyCycleLimits
    (Progetto_Gruppo21_IZ_DW.obj_e.TimerHandle, UARTUSARTRead_o2);
  setDutyCycleChannel1(Progetto_Gruppo21_IZ_DW.obj_e.TimerHandle,
                       UARTUSARTRead_o2);

  /* End of MATLABSystem: '<S27>/PWM Output' */
}

/* Model initialize function */
void Progetto_Gruppo21_IZ_initialize(void)
{
  Progetto_Gruppo21_IZ_PrevZCX.SFunction_edgeDetectionSignal_Z =
    UNINITIALIZED_ZCSIG;
  Progetto_Gruppo21_IZ_PrevZCX.SFunction_edgeDetectionSignal_h =
    UNINITIALIZED_ZCSIG;
  Progetto_Gruppo21_IZ_PrevZCX.SFunction_edgeDetectionSigna_hs =
    UNINITIALIZED_ZCSIG;
  Progetto_Gruppo21_IZ_PrevZCX.SFunction_edgeDetectionSign_hsa =
    UNINITIALIZED_ZCSIG;
  Progetto_Gruppo21_IZ_PrevZCX.SFunction_edgeDetectionSig_hsa4 =
    UNINITIALIZED_ZCSIG;
  Progetto_Gruppo21_IZ_PrevZCX.SFunction_edgeDetectionSi_hsa4f =
    UNINITIALIZED_ZCSIG;
  Progetto_Gruppo21_IZ_PrevZCX.SFunction_edgeDetectionS_hsa4fq =
    UNINITIALIZED_ZCSIG;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Progetto_Gruppo21_IZ_DW.previousZC = 3U;
  Progetto_Gruppo21_IZ_DW.previousZC_m = 3U;
  Progetto_Gruppo21_IZ_DW.previousZC_g = 3U;
  Progetto_Gruppo21_IZ_DW.previousZC_c = 3U;
  Progetto_Gruppo21_IZ_DW.previousZC_a = 3U;
  Progetto_Gruppo21_IZ_DW.previousZC_cs = 3U;
  Progetto_Gruppo21_IZ_DW.previousZC_mc = 3U;
  strncpy(&Progetto_Gruppo21_IZ_B.msgOut[0], "", 255U);
  Progetto_Gruppo21_IZ_B.msgOut[255] = '\x00';

  /* SystemInitialize for Chart: '<Root>/Chart' */
  strncpy(&Progetto_Gruppo21_IZ_DW.msg[0], "", 255U);
  Progetto_Gruppo21_IZ_DW.msg[255] = '\x00';

  /* Start for MATLABSystem: '<Root>/UART//USART Read' */
  Progetto_Gruppo21_IZ_DW.obj.isInitialized = 0;
  Progetto_Gruppo21_IZ_DW.obj.matlabCodegenIsDeleted = false;
  Progetto_Grupp_SystemCore_setup(&Progetto_Gruppo21_IZ_DW.obj);

  /* Start for MATLABSystem: '<Root>/UART//USART Write' */
  Progetto_Gruppo21_IZ_DW.obj_g.matlabCodegenIsDeleted = false;
  Progetto_Gruppo21_IZ_DW.obj_g.isSetupComplete = false;
  Progetto_Gruppo21_IZ_DW.obj_g.isInitialized = 1;
  Progetto_Gr_UARTWrite_setupImpl(&Progetto_Gruppo21_IZ_DW.obj_g);
  Progetto_Gruppo21_IZ_DW.obj_g.isSetupComplete = true;

  /* Start for MATLABSystem: '<S25>/PWM Output' */
  Progetto_Gruppo21_IZ_DW.obj_l.matlabCodegenIsDeleted = false;
  Progetto_Gruppo21_IZ_DW.obj_l.isSetupComplete = false;
  Progetto_Gruppo21_IZ_DW.obj_l.isInitialized = 1;
  Progetto_Gr_PWMOutput_setupImpl(&Progetto_Gruppo21_IZ_DW.obj_l);
  Progetto_Gruppo21_IZ_DW.obj_l.isSetupComplete = true;

  /* Start for MATLABSystem: '<S27>/PWM Output' */
  Progetto_Gruppo21_IZ_DW.obj_e.matlabCodegenIsDeleted = false;
  Progetto_Gruppo21_IZ_DW.obj_e.isSetupComplete = false;
  Progetto_Gruppo21_IZ_DW.obj_e.isInitialized = 1;
  Progetto__PWMOutput_setupImpl_o(&Progetto_Gruppo21_IZ_DW.obj_e);
  Progetto_Gruppo21_IZ_DW.obj_e.isSetupComplete = true;
}

/* Model terminate function */
void Progetto_Gruppo21_IZ_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/UART//USART Read' */
  if (!Progetto_Gruppo21_IZ_DW.obj.matlabCodegenIsDeleted) {
    Progetto_Gruppo21_IZ_DW.obj.matlabCodegenIsDeleted = true;
    if ((Progetto_Gruppo21_IZ_DW.obj.isInitialized == 1) &&
        Progetto_Gruppo21_IZ_DW.obj.isSetupComplete) {
      MW_LPUART_DeInit(Progetto_Gruppo21_IZ_DW.obj.UARTHandle);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/UART//USART Read' */

  /* Terminate for MATLABSystem: '<Root>/UART//USART Write' */
  if (!Progetto_Gruppo21_IZ_DW.obj_g.matlabCodegenIsDeleted) {
    Progetto_Gruppo21_IZ_DW.obj_g.matlabCodegenIsDeleted = true;
    if ((Progetto_Gruppo21_IZ_DW.obj_g.isInitialized == 1) &&
        Progetto_Gruppo21_IZ_DW.obj_g.isSetupComplete) {
      MW_LPUART_DeInit(Progetto_Gruppo21_IZ_DW.obj_g.UARTHandle);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/UART//USART Write' */

  /* Terminate for MATLABSystem: '<S25>/PWM Output' */
  if (!Progetto_Gruppo21_IZ_DW.obj_l.matlabCodegenIsDeleted) {
    Progetto_Gruppo21_IZ_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((Progetto_Gruppo21_IZ_DW.obj_l.isInitialized == 1) &&
        Progetto_Gruppo21_IZ_DW.obj_l.isSetupComplete) {
      disableCounter(Progetto_Gruppo21_IZ_DW.obj_l.TimerHandle);
      disableTimerInterrupts(Progetto_Gruppo21_IZ_DW.obj_l.TimerHandle, 0);
      disableTimerChannel1(Progetto_Gruppo21_IZ_DW.obj_l.TimerHandle, ENABLE_CH);
      disableTimerChannel2(Progetto_Gruppo21_IZ_DW.obj_l.TimerHandle, ENABLE_CH);
      disableTimerChannel4(Progetto_Gruppo21_IZ_DW.obj_l.TimerHandle, ENABLE_CH);
    }
  }

  /* End of Terminate for MATLABSystem: '<S25>/PWM Output' */

  /* Terminate for MATLABSystem: '<S27>/PWM Output' */
  if (!Progetto_Gruppo21_IZ_DW.obj_e.matlabCodegenIsDeleted) {
    Progetto_Gruppo21_IZ_DW.obj_e.matlabCodegenIsDeleted = true;
    if ((Progetto_Gruppo21_IZ_DW.obj_e.isInitialized == 1) &&
        Progetto_Gruppo21_IZ_DW.obj_e.isSetupComplete) {
      disableCounter(Progetto_Gruppo21_IZ_DW.obj_e.TimerHandle);
      disableTimerInterrupts(Progetto_Gruppo21_IZ_DW.obj_e.TimerHandle, 0);
      disableTimerChannel1(Progetto_Gruppo21_IZ_DW.obj_e.TimerHandle, ENABLE_CH);
    }
  }

  /* End of Terminate for MATLABSystem: '<S27>/PWM Output' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
