//
//  btree.h
//  btree
//
//  Created by siqi on 13-11-9.
//  Copyright (c) 2013年 flp. All rights reserved.
//

#ifndef btree_btree_h
#define btree_btree_h

typedef int TElemType;

typedef struct BTNode{
    TElemType data;
    struct BTNode *lchild, *rchild;
}BTNode,*BTREE;

void insert(BTREE *, BTNode *);
void create(BTREE* );
void preOrderTraverse(BTREE);
void inOrderTraverse(BTREE);
void postOrderTraverse(BTREE);
int Depth (BTREE);
void CountLeaf(BTREE, int *);

#endif
