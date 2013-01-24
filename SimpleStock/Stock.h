//
//  Stock.h
//  SimpleStock
//
//  Created by siglea on 1/22/13.
//  Copyright (c) 2013 siglea. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Stock : NSManagedObject

@property (nonatomic, retain) NSDate * createTime;
@property (nonatomic, retain) NSNumber * indicator;
@property (nonatomic, retain) NSDate * modifyTime;
@property (nonatomic, retain) NSString * name;

@end
