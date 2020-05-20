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

/*��ʼ������ջ*/
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

/*�ж��Ƿ��ջ*/
int STACK_IsEmpty_Array(STACK_Str_Array_t STACK_Array)
{
	return STACK_Array.STACK_Element == 0;
}
/*�ж��Ƿ���ջ*/
int STACK_IsFull_Array(STACK_Str_Array_t STACK_Array)
{
    return STACK_Array.STACK_Element == STACK_Array.STACK_MaxElement;
}
/*���ջ��λ��*/
int STACK_GetTop_Array(STACK_Str_Array_t STACK_Array)
{
    return STACK_Array.STACK_Top;
}
/*���ջ��Ԫ�ظ���*/
int STACK_GetNum_Array(STACK_Str_Array_t STACK_Array)
{
    return STACK_Array.STACK_Element;
}
/*��ջ*/
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
/*���ջ��Ԫ��*/
int STACK_Top_Array(STACK_Str_Array_t STACK_Array, STACK_Element* element_top)
{
    if (STACK_IsEmpty_Array(STACK_Array) == 1) {
    	printf("Stack Empty!\n");
    	return FALSE;
    }

    *element_top = (STACK_Array.pData)[STACK_Array.STACK_Top];

    return TRUE;
}
/*��ջ*/
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
