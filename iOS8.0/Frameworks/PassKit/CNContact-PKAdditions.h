//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNContact.h"

@interface CNContact (PKAdditions)
+ (id)pkContactWithFirstName:(id)arg1 lastName:(id)arg2 postalAddresses:(id)arg3 emailAddresses:(id)arg4 phoneNumbers:(id)arg5;
+ (void)pkAddLabeledValues:(id)arg1 toRecord:(void *)arg2 withProperty:(int)arg3;
+ (id)pkContactWithNameFromContact:(id)arg1 labeledValue:(id)arg2 propertyID:(int)arg3;
+ (id)pkContactWithFirstName:(id)arg1 lastName:(id)arg2 labeledValue:(id)arg3 propertyID:(int)arg4;
- (id)pkSingleLineFormattedContactAddress;
- (id)pkFormattedContactAddress;
@end
