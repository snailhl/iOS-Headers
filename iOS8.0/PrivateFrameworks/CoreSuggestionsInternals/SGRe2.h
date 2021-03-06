//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SGRe2 : NSObject
{
    char *_patternString;
    struct RE2 *_pattern;
    NSArray *_subregexps;
    BOOL _isTrivial;
    long _isTrivialOnceToken;
}

+ (id)convertPerlStyleLiteralToRegexpString:(id)arg1;
- (void).cxx_destruct;
- (id)traceMatchesInString:(id)arg1;
- (id)description;
- (BOOL)_enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned int)arg3 block:(CDUnknownBlockType)arg4;
- (void)enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned int)arg3 block:(CDUnknownBlockType)arg4;
- (void)enumerateMatchesInString:(id)arg1 ngroups:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)matchesUtf8:(const char *)arg1;
- (BOOL)matchesString:(id)arg1;
- (BOOL)existsInUtf8:(const char *)arg1;
- (BOOL)existsInString:(id)arg1;
- (BOOL)isTrivial;
- (void)dealloc;
- (id)initWithSubregexps:(id)arg1;
- (id)initWithRegexp:(id)arg1;

@end

