//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKShareInvitationResponseOperationInfo : CKOperationInfo
{
    NSArray *_invitationsToAccept;
    NSArray *_invitationsToDecline;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *invitationsToDecline; // @synthesize invitationsToDecline=_invitationsToDecline;
@property(retain, nonatomic) NSArray *invitationsToAccept; // @synthesize invitationsToAccept=_invitationsToAccept;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
