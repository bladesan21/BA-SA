#ifndef SRC_TESTS_TEST_H
#define SRC_TESTS_TEST_H

#include <check.h>
#include <stdlib.h>
#include <time.h>

#include "../s21_decimal.h"

Suite *convertors_suite(void);
Suite *comparison_suite(void);
Suite *other_suite(void);
Suite *helper_suite(void);
Suite *arithmetic_suite(void);

#endif
