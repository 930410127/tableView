//
//  TableViewController.h
//  Scroll_TableView
//
//  Created by 廖磊 on 2017/6/19.
//  Copyright © 2017年 廖磊. All rights reserved.
//

#import "ViewController.h"


@protocol TableViewControllerDelegate <NSObject>

@optional
-(void)TableViewControllerScrollto:(CGFloat)locattionY;
@end

@interface TableViewController : UIViewController

@property (nonatomic,strong)UITableView *tbView;

@property (nonatomic,weak)id<TableViewControllerDelegate>delegate;

@end
