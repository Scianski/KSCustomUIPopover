//
//  KSCustomPopoverFlipsideViewController.h
//  KSCustomPopover
//
//  Created by Chris Smith on 12.02.2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KSCustomPopoverFlipsideViewController;

@protocol KSCustomPopoverFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(KSCustomPopoverFlipsideViewController *)controller;
@end

@interface KSCustomPopoverFlipsideViewController : UIViewController

@property (weak, nonatomic) IBOutlet id <KSCustomPopoverFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
