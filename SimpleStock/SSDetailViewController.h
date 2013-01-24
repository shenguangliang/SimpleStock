//
//  SSDetailViewController.h
//  SimpleStock
//
//  Created by siglea on 1/22/13.
//  Copyright (c) 2013 siglea. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SSDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
