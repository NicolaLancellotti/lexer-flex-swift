//
// Copyright © 2018 Nicola Lancellotti. All rights reserved.
//

#ifndef TOK
#define TOK(X)
#endif

TOK(EOF)
TOK(ERROR)

TOK(L_PAREN)
TOK(R_PAREN)
TOK(L_SQUARE)
TOK(R_SQUARE)
TOK(COMMA)
TOK(SEMI)

TOK(OP_REL_LT)
TOK(OP_REL_LE)
TOK(OP_REL_EQ)
TOK(OP_REL_NE)
TOK(OP_REL_GT)
TOK(OP_REL_GE)

TOK(IF)
TOK(THEN)
TOK(ELSE)
TOK(WHILE)
TOK(FOR)

TOK(ID) // with attribute

TOK(NCONST) // with attribute
TOK(FCONST) // with attribute

#undef TOK
