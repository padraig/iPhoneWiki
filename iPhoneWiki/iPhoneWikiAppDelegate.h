//
//  iPhoneWikiAppDelegate.h
//  iPhoneWiki
//
//  Created by Padraig Scott on 21/03/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class iPhoneWikiViewController;

@interface iPhoneWikiAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet iPhoneWikiViewController *viewController;

@end
