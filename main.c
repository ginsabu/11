#include <stdio.h>

#define MAX_NODETYPE 7
#define MAX_CHARNAME 32

#define SMMNODE_TYPE_LECTURE     0
#define SMMNODE_TYPE_RESTAURANT  1
#define SMMNODE_TYPE_LABORATORY  2
#define SMMNODE_TYPE_HOME        3
#define SMMNODE_TYPE_GOTOLAB     4
#define SMMNODE_TYPE_FOODCHANCE  5
#define SMMNODE_TYPE_FESTIVAL    6

typedef int smmNode_e;

static char smmNodeName[MAX_NODETYPE][MAX_CHARNAME] = {
    "lecture",
    "restaurant",
    "laboratory",
    "home",
    "gotoLab",
    "foodChance",
    "festival"
};

char* getName(smmNode_e type)
{
    if (type < 0 || type >= MAX_NODETYPE)
        return NULL;
    return smmNodeName[type];
}

int main(void)
{
    smmNode_e t1 = SMMNODE_TYPE_LECTURE;
    smmNode_e t2 = SMMNODE_TYPE_FOODCHANCE;

    printf("Type name = %s\n", getName(t1));
    printf("Type name = %s\n", getName(t2));

    return 0;
}