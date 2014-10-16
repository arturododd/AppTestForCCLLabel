//
//  ADDBManager.h
//  AppTestForCCLLabel
//
//  Created by Arturo Dodd Vaudrecourt on 10/16/14.
//  Copyright (c) 2014 Dodd.mx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ADDBManager : NSObject

-(instancetype)initWithDatabaseFilename:(NSString *)dbFilename;

-(NSArray *)loadDataFromDB:(NSString *)query;

-(void)executeQuery:(NSString *)query;

@property (nonatomic, strong) NSMutableArray *arrColumnNames;
@property (nonatomic) int affectedRows;
@property (nonatomic) long long lastInsertedRowID;

@end
