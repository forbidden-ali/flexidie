/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "SBAwayViewPluginController.h"

//#import "SBLockScreenBundleController-Protocol.h"

@class IMAVChat, NSString, NSTimer, TPLCDView, TPWallpaperView, TUCall, UIImage;

@interface InCallLockScreenController : NSObject //SBAwayViewPluginController <SBLockScreenBundleController>
{
    BOOL _showingInCallInfo;
    BOOL _shouldShowInCallInfo;
    BOOL _isFullScreen;
    TUCall *_displayedCall;
    IMAVChat *_displayedChat;
    TPLCDView *_lcdView;
    TPWallpaperView *_wallpaperView;
    NSTimer *_durationTimer;
    UIImage *_callerImage;
    NSString *_localizedLabel;
}

+ (id)rootViewController;
@property(nonatomic) BOOL isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) BOOL shouldShowInCallInfo; // @synthesize shouldShowInCallInfo=_shouldShowInCallInfo;
@property(nonatomic) BOOL showingInCallInfo; // @synthesize showingInCallInfo=_showingInCallInfo;
@property(retain, nonatomic) NSString *localizedLabel; // @synthesize localizedLabel=_localizedLabel;
@property(retain, nonatomic) UIImage *callerImage; // @synthesize callerImage=_callerImage;
@property(retain, nonatomic) NSTimer *durationTimer; // @synthesize durationTimer=_durationTimer;
@property(retain, nonatomic) TPWallpaperView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
@property(retain, nonatomic) TPLCDView *lcdView; // @synthesize lcdView=_lcdView;
@property(retain, nonatomic) IMAVChat *displayedChat; // @synthesize displayedChat=_displayedChat;
@property(retain, nonatomic) TUCall *displayedCall; // @synthesize displayedCall=_displayedCall;
- (BOOL)shouldShowLockStatusBarTime;
- (void)callStatusChanged:(id)arg1;
- (void)_updateWallpaperViewWithContactImageIfNecessary:(id)arg1;
- (void)reload;
- (BOOL)multipleCallsExist;
- (void)updateDuration;
- (void)fetchCallInformation:(id *)arg1 name:(id *)arg2 label:(id *)arg3 image:(id *)arg4 isFullScreen:(char *)arg5 wantsHighResolution:(BOOL)arg6;
- (BOOL)showDateView;
- (BOOL)allowsLockScreenCamera;
- (BOOL)allowsLockScreenMediaControls;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)backgroundView;
- (unsigned int)overlayStyle;
- (unsigned int)presentationStyle;
- (int)pluginPriority;
- (void)dealloc;
- (id)init;

@end
