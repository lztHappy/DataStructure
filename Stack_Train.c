/*
 ============================================================================
 Name        : Stack_Train.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#if 1
#include "Stack_Train.h"

/*初始化数组栈*/
int STACK_Init_Array(STACK_Str_Array_t* STACK_Array, STACK_Element* pdata, int length)
{
	if (STACK_Array == NULL || pdata == NULL || length <= 2) {
		return FALSE;
	}

	STACK_Array->pData = pdata;
	STACK_Array->STACK_Botton = 0;
	STACK_Array->STACK_Top = 0;
	STACK_Array->STACK_MaxElement = length - 2;
	STACK_Array->STACK_Element = 0;

	return TRUE;
}

/*判断是否空栈*/
int STACK_IsEmpty_Array(STACK_Str_Array_t STACK_Array)
{
	return STACK_Array.STACK_Element == 0;
}
/*判断是否满栈*/
int STACK_IsFull_Array(STACK_Str_Array_t STACK_Array)
{
    return STACK_Array.STACK_Element == STACK_Array.STACK_MaxElement;
}
/*获得栈顶位置*/
int STACK_GetTop_Array(STACK_Str_Array_t STACK_Array)
{
    return STACK_Array.STACK_Top;
}
/*获得栈中元素个数*/
int STACK_GetNum_Array(STACK_Str_Array_t STACK_Array)
{
    return STACK_Array.STACK_Element;
}
/*入栈*/
int STACK_Push_Array(STACK_Str_Array_t STACK_Array, STACK_Element element_push)
{
    if (STACK_IsFull_Array(STACK_Array) == 1) {
    	printf("Stack Full!\n");
    	return FALSE;
    }

    (STACK_Array.pData)[++STACK_Array.STACK_Top] = element_push;
    ++STACK_Array.STACK_Element;

    return TRUE;
}
/*获得栈顶元素*/
int STACK_Top_Array(STACK_Str_Array_t STACK_Array, STACK_Element* element_top)
{
    if (STACK_IsEmpty_Array(STACK_Array) == 1) {
    	printf("Stack Empty!\n");
    	return FALSE;
    }

    *element_top = (STACK_Array.pData)[STACK_Array.STACK_Top];

    return TRUE;
}
/*出栈*/
int STACK_Pop_Array(STACK_Str_Array_t STACK_Array)
{
	if (STACK_IsEmpty_Array(STACK_Array) == 1) {
	    printf("Stack Empty!\n");
	    return FALSE;
	}

	--STACK_Array.STACK_Top;
	--STACK_Array.STACK_Element;

	return TRUE;
}

#endif
