CC := gcc
CFLAGS = -Wall -Wextra -std=c11 -pedantic
SRC_DIR := func

SRCS := $(shell find $(SRC_DIR) -name "*.c")
OBJS := $(SRCS:.c=.o)

OS_NAME := $(shell uname)
ifeq ($(OS_NAME), Linux) 
	MATH_FLAGS = -lm -lpthread -lrt -lsubunit
else ifeq ($(OS_NAME), Darwin) 
	MATH_FLAGS :=
endif

all: s21_math.a

s21_math.a: $(OBJS)
	ar rcs $@ $^

%.o: %.c s21_math.h
	$(CC) $(CFLAGS) -c $< -o $@ -I$(CURDIR)

test: CFLAGS += -fprofile-arcs -ftest-coverage
test: s21_test.c s21_math.a
	$(CC) $(CFLAGS) $^ -o math_test -I$(CURDIR) -lcheck $(MATH_FLAGS)
	./math_test

gcov_report: clean test
	gcov $(SRC_DIR)/*.c -o ./gcov_report
	mv ./*.gcda ./*.gcno ./func/*.gcno ./func/*.gcda ./gcov_report
	lcov -t ./gcov_report -o report -c -d ./gcov_report
	genhtml -o report_html report

clang:
	clang-format --style=Google -n *.c *.h func/*.c
	clang-format --style=Google -i *.c *.h func/*.c

clean:
	rm -f s21_math.a $(OBJS) ./func/*.gcno
	rm -rf math_test *.gc* report report_html ./gcov_report/*.gc*

.PHONY: all clean clear_o test gcov_report
