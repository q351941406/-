//
//  GzwOrderCell.h
//  跑腿
//
//  Created by mac on 15/9/27.
//  Copyright (c) 2015年 paotui. All rights reserved.
//  每一个订单的cell

#import <UIKit/UIKit.h>

@interface GzwExpertCell : UITableViewCell
/**
 *  默认地址图片
 */
@property (weak, nonatomic) IBOutlet UIButton *normalImage;

@property (nonatomic,strong) NSDictionary *model;

@end
