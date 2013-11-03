//
//  stack.h
//  stack
//
//  Created by siqi on 13-10-15.
//  Copyright (c) 2013年 flp. All rights reserved.
//

#ifndef stack_stack_h
#define stack_stack_h

#define STACK_INIT_SIZE 100   
#define STACKINCREMENT  10
#define OK              1
#define ERROR           -1
#define OVERFLOW        -1
#define TRUE            1
#define FALSE           0

typedef int Status;
typedef int SElemType;

typedef struct {
    SElemType   *base;
    SElemType   *top;
    int         stacksize;
}SqStack;

Status  InitStack(SqStack *);
Status  GetTop(SqStack, SElemType *);
Status  Push(SqStack *, SElemType);
Status  Pop(SqStack *, SElemType *);
Status  StackEmtpy(SqStack);
void    LineEdit();
#endif
