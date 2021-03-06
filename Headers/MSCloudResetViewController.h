//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCloudPreferenceViewController.h"

@class NSButton, NSProgressIndicator, NSTextField;

@interface MSCloudResetViewController : MSCloudPreferenceViewController
{
    NSTextField *_resetTokenTextField;
    NSTextField *_resetPasswordTextField;
    NSTextField *_resetConformPasswordTextField;
    NSButton *_resetButton;
    NSProgressIndicator *_resetProgressIndicator;
}

@property(nonatomic) __weak NSProgressIndicator *resetProgressIndicator; // @synthesize resetProgressIndicator=_resetProgressIndicator;
@property(nonatomic) __weak NSButton *resetButton; // @synthesize resetButton=_resetButton;
@property(nonatomic) __weak NSTextField *resetConformPasswordTextField; // @synthesize resetConformPasswordTextField=_resetConformPasswordTextField;
@property(nonatomic) __weak NSTextField *resetPasswordTextField; // @synthesize resetPasswordTextField=_resetPasswordTextField;
@property(nonatomic) __weak NSTextField *resetTokenTextField; // @synthesize resetTokenTextField=_resetTokenTextField;
- (void).cxx_destruct;
- (void)cloudURLDidOpenNotification:(id)arg1;
- (void)userDidLogin;
- (void)userDidLogout;
- (void)resetAccount:(id)arg1;
- (void)enableResetFields:(BOOL)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

@end

