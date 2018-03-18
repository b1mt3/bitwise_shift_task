/*
 * declarations.h
 *
 *  Created on: Mar 16, 2018
 *      Author: b1mt3
 */

#ifndef DECLARATIONS_H_
#define DECLARATIONS_H_

int bin_repr (int32_t *to_convert, char* bin);
int dec_repr (char *bin, uint32_t* conv_result);
int left (int32_t *given_num, int *step, uint32_t* out);
int right (int32_t *given_num, int *step, uint32_t* out);
int write_result (int32_t *task_num, int *shift_step, char* direction);
int analyze_input_and_run (int param_count, char **input_params);

int write_result_64 (int64_t *task_num, int *shift_step, char* direction);
int bin_repr_64 (int64_t* to_convert, char* bin);
int dec_repr_64 (char *bin, uint64_t* conv_result);
int left_64 (int64_t *given_num, int *step, uint64_t* out);
int right_64 (int64_t given_num, int step, uint64_t* out);

#endif /* DECLARATIONS_H_ */
