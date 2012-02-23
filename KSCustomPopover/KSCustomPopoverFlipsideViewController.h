//
//  KSCustomPopoverFlipsideViewController.h
//  KSCustomPopover
//
//  Created by Chris Scianski on 12.02.2012.
//  Copyright (c) 2012 www.scinaski.com. All rights reserved.
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
