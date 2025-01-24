#include "c2000BoardSupport.h"
#include "MW_f2837xD_includes.h"
#include "rtwtypes.h"
#include "racecar_shiftlight.h"
#include "racecar_shiftlight_private.h"

void config_ePWM_GPIO (void)
{
  EALLOW;
  ClkCfgRegs.PERCLKDIVSEL.bit.EPWMCLKDIV = 1U;

  /*-- Configure pin assignments for ePWM8 --*/
  GpioCtrlRegs.GPAGMUX1.bit.GPIO15 = 0U;
  GpioCtrlRegs.GPAMUX1.bit.GPIO15 = 1U;/* Configure GPIOGPIO15 as EPWM8B*/
  EDIS;
}

void config_ePWM_TBSync (void)
{
  /* Enable TBCLK within the EPWM*/
  EALLOW;

  //Reassigning CMPA register of linked ePWM8
  {
    volatile Uint32 tempRead = EPwm8Regs.CMPA.bit.CMPA;
    EPwm8Regs.CMPA.bit.CMPA = tempRead;
  }

  /* Enable TBCLK after the ePWM configurations */
  CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1U;
  EDIS;
}

void config_ePWMSyncSource (void)
{
  /* Configuring EXTSYNCOUT source selection */
  EALLOW;
  SyncSocRegs.SYNCSELECT.bit.SYNCOUT = 0U;

  /* Configuring ePWM Sync in source selection */
  SyncSocRegs.SYNCSELECT.bit.EPWM4SYNCIN = 0U;
  SyncSocRegs.SYNCSELECT.bit.EPWM7SYNCIN = 0U;
  SyncSocRegs.SYNCSELECT.bit.EPWM10SYNCIN = 0U;
  EDIS;
}
