#include "libs.h"
#include "declarations.h"

int bin_repr (int32_t* to_convert, char* bin)
{
	int i = 0;
	int32_t buffer, reference;
	buffer = *to_convert;
	reference = 2147483647;
// assign the sign bit
	if (*to_convert < 0) { bin[0] = 1; buffer = *to_convert * (-1); }
	else bin[0] = 0;
// in case of -2,147,483,648
	if ((reference * (-1)) >= *to_convert)
	{
		bin[1] = 1;
		for (i = 2; i <= 31; i++) bin[i] = 1;
		return 0;
	}
// bit representation
	else
	{
		reference = reference / 2 + 1;
		for (i = 1; reference >= 1; i++)
		{
			if (buffer < reference) { bin[i] = 0; }
			else { bin[i] = 1; buffer = buffer - reference; }
			reference /= 2;
		}
		return 0;
	}
}

int dec_repr (char *bin, uint32_t* conv_result)
{
	uint32_t reference;
    int i = 0;
    *conv_result = 0;
    reference = 2147483648;

    for (i = 0; i <= 31; i++)
    {
    	*conv_result += bin[i] * reference;
    	reference /= 2;
    }
	return 0;
}

int left (int32_t *given_num, int *step, uint32_t* out)
{
	char bin_num[32];
	int call_result, i;
    call_result = 0;

    call_result = bin_repr(given_num, bin_num);
// shift
    for (i = 0; (i + *step)-1 < 31; i++)
    {
    	bin_num[i] = bin_num[i+*step];
    }
// fill the shifted positions with 0s
    for (i = *step; i < 31; i++)
    {
    	bin_num[i] = 0;
    }
    call_result = dec_repr(bin_num, out);
	return call_result;
}

int right (int32_t *given_num, int *step, uint32_t* out)
{
	char bin_num[32];
	int call_result, i;
    call_result = 0;

    call_result = bin_repr(given_num, bin_num);
// shift
    for (i = 0; i < 31; i++)
    {
    	bin_num[*step + i - 1] = bin_num[i];
    }
// fill the shifted positions with 0s
    for (i = 0; i < *step; i++)
    {
    	bin_num[i] = 0;
    }
    call_result = dec_repr(bin_num, out);
	return call_result;
}

int bin_repr_64 (int64_t* to_convert, char* bin)
{
	int i = 0;
	int64_t buffer, reference;
	buffer = *to_convert;
	reference = 9223372036854775807;
// assign the sign bit
	if (*to_convert < 0) { bin[0] = 1; buffer = *to_convert * (-1); }
	else bin[0] = 0;
// in case of -2,147,483,648
	if ((reference * (-1)) >= *to_convert)
	{
		bin[1] = 1;
		for (i = 2; i <= 63; i++) bin[i] = 1;
		return 0;
	}
// bit representation
	else
	{
		reference = reference / 2 + 1;
		for (i = 1; reference >= 1; i++)
		{
			if (buffer < reference) { bin[i] = 0; }
			else { bin[i] = 1; buffer = buffer - reference; }
			reference /= 2;
		}
		return 0;
	}
}

int dec_repr_64 (char *bin, uint64_t* conv_result)
{
	uint64_t reference;
    int i = 0;
    *conv_result = 0;
    reference = 9223372036854775808;

    for (i = 0; i <= 63; i++)
    {
    	*conv_result += bin[i] * reference;
    	reference /= 2;
    }
	return 0;
}

int left_64 (int64_t *given_num, int *step, uint64_t* out)
{
	char bin_num[64];
	int call_result, i;
    call_result = 0;

    call_result = bin_repr(given_num, bin_num);
// shift
    for (i = 0; (i + *step)-1 < 63; i++)
    {
    	bin_num[i] = bin_num[i+*step];
    }
// fill the shifted positions with 0s
    for (i = *step; i < 63; i++)
    {
    	bin_num[i] = 0;
    }
    call_result = dec_repr(bin_num, out);
	return call_result;
}

int right_64 (int64_t given_num, int step, uint64_t* out)
{
	char bin_num[64];
	int call_result, i;
    call_result = 0;

    call_result = bin_repr(given_num, bin_num);
// shift
    for (i = 0; i < 63; i++)
    {
    	bin_num[step + i - 1] = bin_num[i];
    }
// fill the shifted positions with 0s
    for (i = 0; i < step; i++)
    {
    	bin_num[i] = 0;
    }
    call_result = dec_repr(bin_num, out);
	return call_result;
}
