//
//  btree.h
//  btree
//
//  Created by siqi on 13-11-22.
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
void visit(TElemType);
void preOrderTraverse(BTREE,void(*)(TElemType));
void inOrderTraverse(BTREE,void(*)(TElemType));
void postOrderTraverse(BTREE,void(*)(TElemType));
int Depth (BTREE);
void CountLeaf(BTREE, int *);

#endif
