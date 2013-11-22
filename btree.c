//
//  btree.c
//  btree
//
//  Created by siqi on 13-11-22.
//  Copyright (c) 2013年 flp. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "btree.h"

void insert(BTREE  * t, BTNode *s){
    if (*t == NULL) {
        *t = s;
    }
    else if ((*t)->data == s->data)
        return;
    else if ((*t)->data > s->data)
        insert(&((*t)->lchild), s);
    else
        insert(&((*t)->rchild), s);
        
}

void create(BTREE * T){
    int d;
    BTNode * s;
    
    do{
        printf("input a number(-1 exit):");
        scanf("%d",&d);
        s = (BTNode *)malloc(sizeof(BTNode));
        s->data = d;
        s->lchild = s->rchild = NULL;
        insert(T, s);
    }while (d != -1);
}

void visit(TElemType data){
    printf("%d ",data);
}
void preOrderTraverse(BTREE T,void(*visit)(TElemType e)){
    if (T) {
        visit(T->data);
        preOrderTraverse(T->lchild,visit);
        preOrderTraverse(T->rchild,visit);
    }
}