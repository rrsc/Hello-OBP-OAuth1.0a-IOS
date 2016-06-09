//
//  DetailsViewController.h
//  HelloOBP-iOS
//
//  Created by Dunia Reviriego on 8/15/14.
//  Copyright (c) 2014 TESOBE. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

- (void)setAccount:(NSDictionary*)account viewOfAccount:(NSDictionary*)viewOfAccount transactionsDict:(NSDictionary*)transactionsDict;

@property (nonatomic, strong, readonly) NSDictionary* account;
@property (nonatomic, strong, readonly) NSDictionary* viewOfAccount;
@property (nonatomic, strong, readonly) NSDictionary* transactionsDict;

@end
