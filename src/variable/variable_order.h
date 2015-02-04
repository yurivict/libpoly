/*
 * variable_order.h
 *
 *  Created on: Mar 22, 2014
 *      Author: dejan
 */

#pragma once

#include <variable_order.h>

void variable_order_simple_construct(lp_variable_order_simple_t* var_order);

void variable_order_simple_destruct(lp_variable_order_simple_t* var_order);

void variable_order_simple_attach(lp_variable_order_t* var_order);

void variable_order_simple_detach(lp_variable_order_t* var_order);

lp_variable_order_t* variable_order_simple_new(void);

int variable_order_simple_cmp(const lp_variable_order_t* var_order, lp_variable_t x, lp_variable_t y);

size_t variable_order_simple_size(const lp_variable_order_simple_t* var_order);

void variable_order_simple_clear(lp_variable_order_simple_t* var_order);

void variable_order_simple_push(lp_variable_order_simple_t* var_order, lp_variable_t var);

void variable_order_simple_pop(lp_variable_order_simple_t* var_order);

int variable_order_simple_print(const lp_variable_order_simple_t* var_order, const lp_variable_db_t* var_db, FILE* out);

char* variable_order_simple_to_string(const lp_variable_order_simple_t* var_order, const lp_variable_db_t* var_db);

int variable_order_simple_contains(lp_variable_order_simple_t* var_order, lp_variable_t x);
