#ifndef PARSER_H
#define PARSER_H

#include "lex.h"
#include "proto.h"

typedef struct IrParser {
    IrLex lex;
    char *path;
    FILE *file;
} IrParser;

#endif
