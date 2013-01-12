//
//  CHViewController.h
//  JustifiedView
//
//  Created by Hang Chen on 1/12/13.
//  Copyright (c) 2013 Hang Chen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CHStylizedView.h"

@interface CHViewController : UIViewController <CHStylizedViewDelegate>

{
    NSMutableArray *randomSizes;
    int page;
}

@property ( nonatomic) IBOutlet CHStylizedView *stylizedView;
@property (nonatomic,assign)float lastContentOffsetY;
@end