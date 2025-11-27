#define MAX_GRADETYPE 5
#define MAX_GRADENAME 16

#define GRADE_A 0
#define GRADE_B 1
#define GRADE_C 2
#define GRADE_D 3
#define GRADE_F 4

static char gradeName[MAX_GRADETYPE][MAX_GRADENAME] = {
    "A",
    "B",
    "C",
    "D",
    "F"
};

char* getGradeName(int g)
{
    if (g < 0 || g >= MAX_GRADETYPE)
        return NULL;
    return gradeName[g];
}
