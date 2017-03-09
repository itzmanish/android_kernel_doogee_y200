#include <linux/types.h>
#include <cust_acc.h>
#include <mach/mt_pm_ldo.h>

#if defined(CONFIG_T96_PROJ)||defined(CONFIG_T89_PROJ)
	#define ACC_I2C_BUS_NUM		2
	#define ACC_DIRECTION		4
#elif defined(CONFIG_T93_PROJ)
	#define ACC_I2C_BUS_NUM		2
	#define ACC_DIRECTION		5
#else
	#define ACC_I2C_BUS_NUM		2
	#define ACC_DIRECTION		5
#endif

