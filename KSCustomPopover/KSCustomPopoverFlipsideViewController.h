//
//  KSCustomPopoverFlipsideViewController.h
//  KSCustomPopover
//
//  Created by Chris Scianski on 12.02.2012.

#import <UIKit/UIKit.h>

@class KSCustomPopoverFlipsideViewController;

@protocol KSCustomPopoverFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(KSCustomPopoverFlipsideViewController *)controller;
@end

@interface KSCustomPopoverFlipsideViewController : UIViewController

@property (weak, nonatomic) IBOutlet id <KSCustomPopoverFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
