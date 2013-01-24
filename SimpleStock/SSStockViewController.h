//
//  SSStockViewController.h
//  SimpleStock
//
//  Created by siglea on 1/22/13.
//  Copyright (c) 2013 siglea. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface SSStockViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;

@end


@interface SSStockTableViewCell : UITableViewCell{
    UIProgressView *_progressView;
    CGFloat _progress;
}

@property (assign, nonatomic) CGFloat progress;

@end