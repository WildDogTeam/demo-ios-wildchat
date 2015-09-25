//
//  ViewController.h
//  WildChat
//
//  Created by Garin on 15/7/22.
//  Copyright (c) 2015年 Wilddog. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Wilddog/Wilddog.h>

@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>

@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSMutableArray* chat;
@property (nonatomic, strong) Wilddog* wilddog;


@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UIButton *nameField;

@end

