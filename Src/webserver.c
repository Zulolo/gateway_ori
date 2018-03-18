
#include "stm32f4xx_hal.h"
#include "cmsis_os.h"

void httpd_cgi_handler(const char* uri, int iNumParams, char **pcParam, char **pcValue)
{
	
}

void start_webserver(void const * argument)
{
  /* USER CODE BEGIN 5 */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END 5 */ 
}
