#include <stdlib.h>
#include <stdbool.h>
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
//#include <CUnit/Console.h>
//#include <CUnit/CUCurses.h>
#include "func.h"


void test_assert()
{
	CU_ASSERT(true);

	int j = 4;
	CU_ASSERT(f_x2(j) == 8);
}

void test_assert2()
{
	int j = 4;
	CU_ASSERT(f_x2(j+1) == 10);
}
	

void test_assert_equal()
{
	int j=3;
	CU_ASSERT_EQUAL(f_x2(j+1),8);
	CU_ASSERT_EQUAL(f_x2(j),6);

	CU_ASSERT_DOUBLE_EQUAL(root(16.0f),4.0f,0.000001f);
	CU_ASSERT_DOUBLE_EQUAL(root(25.0f),5.0f,0.000001f);
}

void test_string()
{
	char* h = hello();
	CU_ASSERT_PTR_NOT_NULL_FATAL(h);
	CU_ASSERT_STRING_EQUAL(h,"hello");

/*	h = fake_hello();
	CU_ASSERT_PTR_NOT_NULL_FATAL(h);
	CU_ASSERT_STRING_EQUAL(h,"hello");
*/
}



int setup(void)  { return 0; }
int teardown(void) { return 0; }


CU_pSuite add_suite(const char* msg)
{
	CU_pSuite s = CU_add_suite(msg, setup, teardown);
	if (s == NULL)
	{
		printf("Error in add_suite %s ,%s\n",msg,CU_get_error_msg());
		CU_cleanup_registry();
		exit(1);
	}
	return s;
}


CU_pTest add_test(CU_pSuite s, const char* msg,  CU_TestFunc test_func)
{
	CU_pTest t = CU_add_test(s,msg,test_func);
	if (t == NULL)
	{
		printf("Error in add_test %s ,%s\n",msg,CU_get_error_msg());
		CU_cleanup_registry();
		exit(1);
	}
	return t;
}


int main()
{
	if (CU_initialize_registry() != CUE_SUCCESS)
		return CU_get_error();

	CU_pSuite s1 = add_suite("basics");
	add_test(s1,"assert", test_assert);
	add_test(s1,"equality", test_assert_equal);

	CU_pSuite s2 = add_suite("strings");
	add_test(s2,"equals", test_string);

	CU_basic_run_tests();
	CU_basic_show_failures(CU_get_failure_list());
	
	return CU_get_number_of_failures();
}
