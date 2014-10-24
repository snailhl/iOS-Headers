//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSConcretePortCoder.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSKeyedPortCoder : NSConcretePortCoder
{
    id sndPort;
    id rcvPort;
    NSMutableDictionary *root;
    NSMutableArray *containers;
    NSMutableArray *components;
    BOOL mainDataFinished;
    unsigned int nextGenericIndex;
    unsigned int nextOutOfLineGenericIndex;
    BOOL isBycopy;
    BOOL isByref;
    BOOL isValid;
    NSMutableArray *importedObjects;
}

- (void)decodeReturnValueOfInvocation:(id)arg1 forKey:(id)arg2;
- (void)encodeReturnValueOfInvocation:(id)arg1 forKey:(id)arg2;
- (id)decodeInvocation;
- (void)encodeInvocation:(id)arg1;
- (id)decodeObject;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (void *)decodeBytesWithReturnedLength:(unsigned int *)arg1;
- (id)decodePortObject;
- (id)decodeDataObject;
- (id)_decodeObjectNoKey;
- (void)encodeBytes:(const void *)arg1 length:(unsigned int)arg2;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (void)encodePortObject:(id)arg1;
- (void)encodeDataObject:(id)arg1;
- (void)_encodeObjectNoKey:(id)arg1;
- (void)_setByref:(BOOL)arg1;
- (void)_setBycopy:(BOOL)arg1;
- (int)versionForClassName:(id)arg1;
- (id)decodePortObjectForKey:(id)arg1;
- (id)decodeDataObjectForKey:(id)arg1;
- (id)_getOutOfLineObjectForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned int *)arg2;
- (int)decodeIntegerForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (id)_decodePropertyListForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)_getObjectFromTopForKey:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
- (void)encodePortObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1 forKey:(id)arg2;
- (void)_addOutOfLineObject:(id)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned int)arg2 forKey:(id)arg3;
- (void)encodeInteger:(int)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)_encodePropertyList:(id)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)_finishUpObject;
- (void)_prepareToEncodeObjectForKey:(id)arg1;
- (BOOL)allowsKeyedCoding;
- (void)_addObjectToTop:(id)arg1 forKey:(id)arg2;
- (id)_topContainer;
- (void)importObject:(id)arg1;
- (id)importedObjects;
- (BOOL)isByref;
- (BOOL)isBycopy;
- (id)_proxyForLocalObject:(id)arg1;
- (id)connection;
- (id)finishedComponents;
- (void)dispatch;
- (void)_buildMainData;
- (id)debugDescription;
- (void)invalidate;
- (void)dealloc;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;

@end
