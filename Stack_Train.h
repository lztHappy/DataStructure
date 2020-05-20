/*
 * Stack_Train.h
 *
 *  Created on: 2018年10月26日
 *      Author: 93585
 */
#if 1
#ifndef STACK_TRAIN_H_
#define STACK_TRAIN_H_

#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

#if 1
#define STACK_MAX_NUMBERS 1024     /*XXX 栈元素大小，保留*/
typedef int STACK_Element;

typedef struct _STACK_Str_Array {
	STACK_Element* pData;
	int STACK_Botton;
	int STACK_Top;
	int STACK_MaxElement;
	int STACK_Element;
}STACK_Str_Array_t;

/*
 *XXX 栈顶和栈底不保存元素，留待他用，用于判断满栈和空栈，所以总元素个数为(STACK_MAX_NUMBERS - 2),“理由不够充分”
 * */

/*初始化数组栈*/
int STACK_Init_Array(STACK_Str_Array_t* STACK_Array, STACK_Element* pdata, int length);
/*判断是否空栈*/
int STACK_IsEmpty_Array(STACK_Str_Array_t STACK_Array);
/*判断是否满栈*/
int STACK_IsFull_Array(STACK_Str_Array_t STACK_Array);
/*获得栈顶位置*/
int STACK_GetTop_Array(STACK_Str_Array_t STACK_Array);
/*获得栈中元素个数*/
int STACK_GetNum_Array(STACK_Str_Array_t STACK_Array);
/*入栈*/
int STACK_Push_Array(STACK_Str_Array_t STACK_Array, STACK_Element element_push);
/*获得栈顶元素*/
int STACK_Top_Array(STACK_Str_Array_t STACK_Array, STACK_Element* element_top);
/*出栈*/
int STACK_Pop_Array(STACK_Str_Array_t STACK_Array);

#endif

#endif /* STACK_TRAIN_H_ */

#endif
