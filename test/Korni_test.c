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
// Dec
CTEST(Test_1_discriment, input_3_2_1)
{
    float result = Discriment(3,2,1);
	
    float expected = -8;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_2_discriment, input_1_3_2)
{
    float result = Discriment(1,3,2);
	
    float expected = 1;
	
   ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_3_discriment, input_4_4_1)
{
    float result = Discriment(4,4,1);
	
    float expected = 0;
	
    ASSERT_DBL_NEAR(expected, result);
}

// Znach
CTEST(Test_1_Znachenie, input_1_1_3_2_1)
{
    float result = Znachenie(1,1,3,2,1);
	
    float expected = -1;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_2_Znachenie, input_1_1_3_2_m_1)
{
    float result = Znachenie(1,1,3,2,-1);
	
    float expected = -2;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_3_Znachenie, input_0_4_4_1_m_1)
{
    float result = Znachenie(0,4,4,1,-1);
	
    float expected = -0.5;
	
    ASSERT_DBL_NEAR(expected, result);
}
