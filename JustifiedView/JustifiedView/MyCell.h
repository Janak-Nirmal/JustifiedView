//
//  MyCell.h
//  JustifiedView
//
//  Created by Hang Chen on 1/12/13.
//  Copyright (c) 2013 Hang Chen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CHStylizedView.h"

@interface MyCell : UIView<CHResusableCell>
{
    NSString *reuseIdentifier;
}

@property (nonatomic, readonly) UILabel *label;

@end

@interface CHDemoView : UIView
- (void)singleTapAction:(UITapGestureRecognizer*)ges;
@property (nonatomic,assign)CGRect originRect;
@end