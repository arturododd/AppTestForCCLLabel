//
//  ADViewController.h
//  AppTestForCCLLabel
//
//  Created by Arturo Dodd Vaudrecourt on 10/16/14.
//  Copyright (c) 2014 Dodd.mx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADEditInfoViewController.h"

@interface ADViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, EditInfoViewControllerDelegate>

@property (strong, nonatomic) IBOutlet UITableView *tblPeople;

- (IBAction)addNewRecord:(id)sender;

@end
