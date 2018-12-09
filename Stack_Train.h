/*
 * Stack_Train.h
 *
 *  Created on: 2018��10��26��
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
#define STACK_MAX_NUMBERS 1024     /*XXX ջԪ�ش�С������*/
typedef int STACK_Element;

typedef struct _STACK_Str_Array {
	STACK_Element* pData;
	int STACK_Botton;
	int STACK_Top;
	int STACK_MaxElement;
	int STACK_Element;
}STACK_Str_Array_t;

/*
 *XXX ջ����ջ�ײ�����Ԫ�أ��������ã������ж���ջ�Ϳ�ջ��������Ԫ�ظ���Ϊ(STACK_MAX_NUMBERS - 2),�����ɲ�����֡�
 * */

/*��ʼ������ջ*/
int STACK_Init_Array(STACK_Str_Array_t* STACK_Array, STACK_Element* pdata, int length);
/*�ж��Ƿ��ջ*/
int STACK_IsEmpty_Array(STACK_Str_Array_t STACK_Array);
/*�ж��Ƿ���ջ*/
int STACK_IsFull_Array(STACK_Str_Array_t STACK_Array);
/*���ջ��λ��*/
int STACK_GetTop_Array(STACK_Str_Array_t STACK_Array);
/*���ջ��Ԫ�ظ���*/
int STACK_GetNum_Array(STACK_Str_Array_t STACK_Array);
/*��ջ*/
int STACK_Push_Array(STACK_Str_Array_t STACK_Array, STACK_Element element_push);
/*���ջ��Ԫ��*/
int STACK_Top_Array(STACK_Str_Array_t STACK_Array, STACK_Element* element_top);
/*��ջ*/
int STACK_Pop_Array(STACK_Str_Array_t STACK_Array);

#endif

#endif /* STACK_TRAIN_H_ */

#endif
