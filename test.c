#include "unity.h"
#include "firmware.h"
void setUp(void){}void tearDown(void){}
void test_limits(void){TEST_ASSERT_EQUAL_INT(0,safe_output(-1,1));TEST_ASSERT_EQUAL_INT(100,safe_output(200,1));TEST_ASSERT_EQUAL_INT(0,safe_output(50,0));}
int main(void){UNITY_BEGIN();RUN_TEST(test_limits);return UNITY_END();}
