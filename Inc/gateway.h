#ifndef __GATEWAY_H__
#define __GATEWAY_H__

#ifdef __cplusplus
 extern "C" {
#endif

typedef struct modbus_rtu_task_def  {
  uint8_t		unSlaveAddr;
  uint8_t		unFuncCode;      
  uint16_t		unRegAddr;
  uint16_t		unRegLeng;
} modbus_rtu_task_t;

#endif /* __GATEWAY_H__ */