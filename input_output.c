/*
 * input_output.c
 *
 *  Created on: Mar 16, 2018
 *      Author: b1mt3
 */
#include "libs.h"
#include "declarations.h"

int analyze_input_and_run (int param_count, char **input_params)
{
	int32_t task_num;
	int shift_step, call_result;
	if (param_count < 2) return -17;
	else if (atoi(input_params[1]) == 32)
	{
		task_num = (int32_t)atoi(input_params[2]);
		shift_step = atoi(input_params[4]);
		return write_result(&task_num, &shift_step, input_params[3]);
	}
	else if (atoi(input_params[1]) == 64)
	{
		task_num = (int64_t)atoi(input_params[2]);
		shift_step = atoi(input_params[4]);
		return write_result_64(&task_num, &shift_step, input_params[3]);
	}
	else return -9;
}

int write_result (int32_t *task_num, int *shift_step, char* direction)
{
	uint32_t result;
	int call_result;
    if (direction[0] == 'l')
	{
    	call_result = left(task_num, shift_step, &result);
    	printf ("%" PRIu32 "\n", result);
    	return call_result;
	}
    else if (direction[0] == 'r')
    {
    	call_result = right(task_num, shift_step, &result);
    	printf ("%" PRIu32 "\n", result);
    	return call_result;
    }
    else return -33;
}

int write_result_64 (int64_t *task_num, int *shift_step, char* direction)
{
	uint64_t result;
	int call_result;
    if (direction[0] == 'l')
	{
    	call_result = left(task_num, shift_step, &result);
    	printf ("%" PRIu64 "\n", result);
    	return call_result;
	}
    else if (direction[0] == 'r')
    {
    	call_result = right(task_num, shift_step, &result);
    	printf ("%" PRIu64 "\n", result);
    	return call_result;
    }
    else return -33;
}
