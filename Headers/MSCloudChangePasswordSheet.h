//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CHSheetController.h"

@class MSCloudAuthAPI, NSButton, NSTextField;

@interface MSCloudChangePasswordSheet : CHSheetController
{
    BOOL _showingCurrentPasswordIsInvalid;
    BOOL _showingNewPasswordIsInvalid;
    BOOL _showingNewPasswordDoesntMatch;
    id <MSCloudChangePasswordSheetDelegate> _delegate;
    NSTextField *_currentPasswordTextField;
    NSTextField *_passwordTextField;
    NSTextField *_passwordConfirmTextField;
    NSButton *_confirmButton;
    MSCloudAuthAPI *_cloudAuthAPI;
    NSTextField *_errorTextField;
}

@property(nonatomic) BOOL showingNewPasswordDoesntMatch; // @synthesize showingNewPasswordDoesntMatch=_showingNewPasswordDoesntMatch;
@property(nonatomic) BOOL showingNewPasswordIsInvalid; // @synthesize showingNewPasswordIsInvalid=_showingNewPasswordIsInvalid;
@property(nonatomic) BOOL showingCurrentPasswordIsInvalid; // @synthesize showingCurrentPasswordIsInvalid=_showingCurrentPasswordIsInvalid;
@property(nonatomic) __weak NSTextField *errorTextField; // @synthesize errorTextField=_errorTextField;
@property(retain, nonatomic) MSCloudAuthAPI *cloudAuthAPI; // @synthesize cloudAuthAPI=_cloudAuthAPI;
@property(nonatomic) __weak NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak NSTextField *passwordConfirmTextField; // @synthesize passwordConfirmTextField=_passwordConfirmTextField;
@property(nonatomic) __weak NSTextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(nonatomic) __weak NSTextField *currentPasswordTextField; // @synthesize currentPasswordTextField=_currentPasswordTextField;
@property(nonatomic) __weak id <MSCloudChangePasswordSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)confirm:(id)arg1;
- (void)enableFields:(BOOL)arg1;
- (void)dealloc;
- (void)validateInputs:(id)arg1;
- (void)textDidChange:(id)arg1;
- (BOOL)newPasswordsMatches;
- (void)windowDidLoad;

@end

