//
//  MultitaskingAppDelegate.h
//  Multitasking
//
//  Created by Vandad Nahavandipoor on 10-07-23.
//  Copyright 2010  All rights reserved.
//

#import <UIKit/UIKit.h>

/* ------------------------------------------- */

@interface MultitaskingAppDelegate : NSObject <UIApplicationDelegate> {
  UIWindow                    *window;
  UIBackgroundTaskIdentifier  backgroundTaskIdentifier;
}

/* ------------------------------------------- */

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, assign) UIBackgroundTaskIdentifier
                              backgroundTaskIdentifier;

/* ------------------------------------------- */

@end

