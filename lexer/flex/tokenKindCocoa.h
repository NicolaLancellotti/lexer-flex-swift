//
// Copyright © 2018 Nicola Lancellotti. All rights reserved.
//

#ifndef tokenKindCocoa_h
#define tokenKindCocoa_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, TokenKind) {
#define TOK(X) TokenKind_ ## X,
#include "tokenKinds.h"
};

char* token_name(TokenKind kind);

#endif
