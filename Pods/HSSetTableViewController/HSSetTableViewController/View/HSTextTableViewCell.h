//
//  HSShowTextRightCell.h
//  HSSetTableView
//
//  Created by hushaohui on 2017/4/19.
//  Copyright © 2017年 ZLHD. All rights reserved.
//

#import "HSBaseTableViewCell.h"

//右边有文本（箭头可显示也可隐藏）
@interface HSTextTableViewCell : HSBaseTableViewCell
@property (nonatomic, weak)UILabel *detailLabel;  ///<详细文本内容

@end
