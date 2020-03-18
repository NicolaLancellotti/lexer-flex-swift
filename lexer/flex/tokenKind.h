//
// Copyright © 2018 Nicola Lancellotti. All rights reserved.
//

#ifndef tokenKind_h
#define tokenKind_h

#include <stdio.h>

typedef enum {
#define TOK(X) TOKEN_ ## X,
#include "tokenKinds.h"
} TokenKind;

char* token_name(TokenKind kind);

#endif /* token_h */



