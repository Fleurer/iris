#ifndef OBJECT_H
#define OBJECT_H

typedef unsigned long VALUE;

enum {
    T_ARRAY = 1,
    T_STRING = 2
};

typedef struct IrObject {
    unsigned int type;
    unsigned int flag;
} IrObject;

#define FL_MARK 1

typedef struct IrArray {
    struct ir_object *ohead;
    VALUE *values;
    size_t size;
} IrArray;

typedef struct IrString {
    struct ir_object *ohead;
    char *cstring;
    size_t size;
} IrString;

#endif