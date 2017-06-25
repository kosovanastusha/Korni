#include <ctest.h>
#include <../src/Korni.h>

// Korni
CTEST(Test_1_Korni, input_3_6_3_0)
{
    float result = Korni(3,6,3,0);
	
    float expected = -1;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_2_Korni, input_4_8_4_0)
{
    float result = Korni(4,8,4,0);
    
    float expected = -1;
    
    ASSERT_DBL_NEAR(expected, result);
}
CTEST(Test_3_Korni, input_0)
{
    int result = Korni(0);
	
    int expected = 0;
	
    ASSERT_EQUAL(expected, result);
}
// Dec
CTEST(Test_1_Dec, input_3_2_1)
{
    float result = Dec(3,2,1);
	
    float expected = -8;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_2_Dec, input_1_3_2)
{
    float result = Dec(1,3,2);
	
    float expected = 1;
	
   ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_3_Dec, input_4_4_1)
{
    float result = Dec(4,4,1);
	
    float expected = 0;
	
    ASSERT_DBL_NEAR(expected, result);
}

// Znach
CTEST(Test_1_Znach, input_1_1_3_2_1)
{
    float result = Znach(1,1,3,2,1);
	
    float expected = -1;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_2_Znach, input_1_1_3_2_m_1)
{
    float result = Znach(1,1,3,2,-1);
	
    float expected = -2;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_3_Znach, input_0_4_4_1_m_1)
{
    float result = Znach(0,4,4,1,-1);
	
    float expected = -0.5;
	
    ASSERT_DBL_NEAR(expected, result);
}
