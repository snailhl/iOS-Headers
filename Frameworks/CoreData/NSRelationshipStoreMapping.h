/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSPropertyStoreMapping.h>

@class NSArray, NSString;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping
{
    NSString *_destinationEntityExternalName;
    NSArray *_foreignKeys;
    NSArray *_joins;
    unsigned int _joinSemantic;
}

- (id)constraintDefinitions;
- (id)columnDefinitions;
- (void)setJoinSemantic:(unsigned int)arg1;
- (unsigned int)joinSemantic;
- (void)setJoins:(id)arg1;
- (id)joins;
- (void)setForeignKeys:(id)arg1;
- (id)foreignKeys;
- (void)setDestinationEntityExternalName:(id)arg1;
- (id)destinationEntityExternalName;
- (id)relationship;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
