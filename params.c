#include "main.h"
/**
 * init_params - initializes the fields back to zero
 * @params: the struct containning the paramters
 * @ap: pointer
 * Return: void
 **/
void init_params(params_t *params, va_list ap __attribute__((unused)))
{
params->unsign = 0;
params->plus_flag = 0;
params->space_flag = 0;
params->zero_flag = 0;
params->minus_flag = 0;
params->width = 0;
params->precision = UINT_MAX;
params->h_modifier = 0;
params->l_modifier = 0;
}
