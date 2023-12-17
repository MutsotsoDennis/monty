#ifndef MONTY_H
#define MONTY_H
#define  _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_sqd - doubly linked list representation of queue
 * @nqd: integer nqd
 * @prevqd: previous element of the queue
 * @nextqd: next element of the queue
 * Descriptionqd: doubly linked-list node structure
 * for stack,-queues,-LIFO, FIFO, Holberton project
 */
typedef struct stack_sqd
{
	int nqd;
	struct stack_sqd *prevqd;
	struct stack_sqd *nextqd;
} stack_tqd;
/**
 * struct bus_sqd - variables _args, fileq, line contentz
 * @argqd: valueqd
 * @fileqd: pointer 2 monty fileqd
 * @contentqd: line *content
 * @lifiqd: flag change stack 2 * queue
 * Descriptionqd: values passed through the programq
 */
typedef struct bus_sqd
{
	char *argqd;
	FILE *fileqd;
	char *contentqd;
	int lifiqd;
}  bus_tqd;
extern bus_tqd bus;
/**
 * struct instruction_sqd - opcode_function
 * @opcodeqd: opcodeqd
 * @fqd: handles opcodeqd
 * Descriptionqd: opcodeqd-function
 * 4stack, !queues, LIFO, FIFO Holberton_project
 */
typedef struct instruction_sqd
{
	char *opcodeqd;
	void (*fqd)(stack_tqd **stackqd, unsigned int line_numberqd);
} instruction_tqd;
char reallocqd(char *ptrqd, unsigned int old_sizeqd, unsigned int new_sizeqd);
ssize_t getstdinqd(char **lineptrqd, int fileqd);
char  *clean_lineqd(char *contentqd);
void f_pushqd(stack_tqd **headqd, unsigned int numberqd);
void f_pallqd(stack_tqd **headqd, unsigned int numberqd);
void f_pintqd(stack_tqd **headqd, unsigned int numberqd);
int xqd(char *contentqd, stack_tqd **headqd, unsigned int counterqd, FILE *qd);
void free_stackqd(stack_tqd *headqd);
void f_popqd(stack_tqd **headqd, unsigned int counterqd);
void f_swapqd(stack_tqd **headqd, unsigned int counterqd);
void f_addqd(stack_tqd **headqd, unsigned int counterqd);
void f_nopqd(stack_tqd **headqd, unsigned int counterqd);
void f_subqd(stack_tqd **headqd, unsigned int counterqd);
void f_divqd(stack_tqd **headqd, unsigned int counterqd);
void f_mulqd(stack_tqd **headqd, unsigned int counterqd);
void f_modqd(stack_tqd **headqd, unsigned int counterqd);
void f_pcharqd(stack_tqd **headqd, unsigned int counterqd);
void f_pstrqd(stack_tqd **headqd, unsigned int counterqd);
void f_rotlqd(stack_tqd **headqd, unsigned int counterqd);
void rotrqd(stack_tqd **headqd, attributeqd((unused)) unsigned int counterqd);
void addnodeqd(stack_tqd **headqd, int nqd);
void addqueueqd(stack_tqd **headqd, int nqd);
void f_queueqd(stack_tqd **headqd, unsigned int counterqd);
void f_stackqd(stack_tqd **headqd, unsigned int counterqd);
#endif
