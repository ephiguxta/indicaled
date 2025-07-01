#include <stdio.h>
#include "unity.h"

void app_main(void)
{
	UNITY_BEGIN();
	unity_run_test_by_name("foo");
	UNITY_END();

	unity_run_menu();
}
