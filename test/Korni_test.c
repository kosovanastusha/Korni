#include <ctest.h>
#include <../src/Korni.h>

// Korni
CTEST(Test_1_function, input_3_6_3_0)
{
    float result = function(3,6,3,0);
	
    float expected = -1;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_2_function, input_4_8_4_0)
{
    float result = function(4,8,4,0);
    
    float expected = -1;
    
    ASSERT_DBL_NEAR(expected, result);
}
