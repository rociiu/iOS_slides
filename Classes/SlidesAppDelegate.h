//
//  SlidesAppDelegate.h
//  Slides
//
//  Created by roc on 11-3-19.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SlidesViewController;

@interface SlidesAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    SlidesViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet SlidesViewController *viewController;

@end

