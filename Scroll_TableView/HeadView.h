//
//  HeadView.h
//  Scroll_TableView
//
//  Created by  on 2017/6/19.
//  Copyright © 2017年 . All rights reserved.
//

#import <UIKit/UIKit.h>
@class HeadView;

@protocol HeadViewDelegate <NSObject>

@optional
-(void)HeadViewSelectedBtutton:(NSInteger)indexs;

@end

@interface HeadView : UIView

@property (nonatomic,weak)id<HeadViewDelegate>delegate;

-(void)headViewUpdateBottomLineState:(int)indexs;

@end
