//
//  KSCustomPopoverMainViewController.h
//  KSCustomPopover
//
//  Created by Chris Scianski on 12.02.2012.
//  Copyright (c) 2012 www.scinaski.com. All rights reserved.
//

#import "KSCustomPopoverFlipsideViewController.h"

@interface KSCustomPopoverMainViewController : UIViewController <KSCustomPopoverFlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
