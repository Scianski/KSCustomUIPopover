//
//  KSCustomPopoverMainViewController.h
//  KSCustomPopover
//
//  Created by Chris Smith on 12.02.2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "KSCustomPopoverFlipsideViewController.h"

@interface KSCustomPopoverMainViewController : UIViewController <KSCustomPopoverFlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
