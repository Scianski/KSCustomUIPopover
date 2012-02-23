//
//  GTPopoverBackgorundView.h
//
//  Created by Chris Scianski on 12.02.2012.
//  Copyright (c) 2012 www.scinaski.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIKit/UIPopoverBackgroundView.h>

@interface KSCustomPopoverBackgroundView : UIPopoverBackgroundView
{    
    CGFloat                     _arrowOffset;
    UIPopoverArrowDirection     _arrowDirection;
    UIImageView                *_arrowImageView;
    UIImageView                *_popoverBackgroundImageView;   
}

@property (nonatomic, readwrite)            CGFloat                  arrowOffset;
@property (nonatomic, readwrite)            UIPopoverArrowDirection  arrowDirection;
@property (nonatomic, readwrite, strong)    UIImageView             *arrowImageView;
@property (nonatomic, readwrite, strong)    UIImageView             *popoverBackgroundImageView;

+ (CGFloat)arrowHeight;
+ (CGFloat)arrowBase;
+ (UIEdgeInsets)contentViewInsets;

@end
