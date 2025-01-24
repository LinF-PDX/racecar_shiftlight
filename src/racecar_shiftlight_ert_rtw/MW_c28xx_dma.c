#include "c2000BoardSupport.h"
#include "MW_f2837xD_includes.h"
#include "rtwtypes.h"
#include "racecar_shiftlight.h"
#include "racecar_shiftlight_private.h"

void StartDMA()
{
  DMA_startChannel(DMA_CH1_BASE);
}

void initDMA_ch1()
{
  /* DMA Channel1 destination address and source address configuration */
  DMA_configAddresses(DMA_CH1_BASE,(unsigned int*) ((unsigned int)&
    EPwm8Regs.CMPA)+1,(unsigned int*) duty_cycle_table);

  /* DMA Channel1 Burst size 1, Source burst step 0, Destination burst step 0 */
  DMA_configBurst(DMA_CH1_BASE,(uint16_T) 1,(int16) 0,(int16) 0);

  /* DMA Channel1 Transfer size 396, Source transfer step 1, Destination transfer step 0 */
  DMA_configTransfer(DMA_CH1_BASE,(uint16_T) 396,(int16) 1,(int16) 0);

  /* DMA Channel1 Source wrap size 65536, Source wrap step 0, Destination wrap size 65536, Destination wrap step 0 */
  DMA_configWrap(DMA_CH1_BASE,(uint16_T)65536,(int16) 0,(uint16_T)65536,(int16)
                 0);

  /* DMA Channel1 peripheral interrupt trigger 50, One shot mode 0, Continuous mode 1, Data size 16 bits */
  DMA_configMode(DMA_CH1_BASE, (DMA_Trigger)50, 2048);

  /* Enable DMA Channel1 peripheral interrupt trigger */
  DMA_enableTrigger(DMA_CH1_BASE);

  /* DMA Channel1 high priority enable 0 */
  DMA_setPriorityMode(0);
}
