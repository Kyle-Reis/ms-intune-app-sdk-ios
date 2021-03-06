//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <IntuneMAM/IntuneMAMEnrollmentStatus.h>

/**
 *  This delegate will return status and debug information for operations 
 *  completed by the Intune MAM SDK. 
 */
@protocol IntuneMAMEnrollmentDelegate <NSObject>

#pragma mark - Delegate Methods

@optional

/**
 *  Called when an enrollment request operation is completed.
 *
 *  @param status status object containing status
 */
- (void)enrollmentRequestWithStatus:(IntuneMAMEnrollmentStatus *)status;

/**
 *  Called when a MAM policy request operation is completed.
 *
 *  @param status status object containing status
 */
- (void)policyRequestWithStatus:(IntuneMAMEnrollmentStatus *)status;

/**
 *  Called when a un-enroll request operation is completed.
 *
 *  @Note: when a user is un-enrolled, the user is also de-registered with the SDK
 *
 *  @param status status object containing status
 */
- (void)unenrollRequestWithStatus:(IntuneMAMEnrollmentStatus *)status;

@end
