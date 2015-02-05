//
//  HMShop.h
//  06-瀑布流
//
//  Created by apple on 14-7-28.
//  Copyright (c) 2014年 heima. All rights reserved.
//  shop模型

#import <UIKit/UIKit.h>

@interface HMShop : NSObject
@property (nonatomic, assign) CGFloat w;     //item宽度
@property (nonatomic, assign) CGFloat h;     //item高度
@property (nonatomic, copy) NSString *img;   //图片url
@property (nonatomic, copy) NSString *price; //价格
@end
