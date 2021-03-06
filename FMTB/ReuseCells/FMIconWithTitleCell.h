//
//  FMIconWithTitleCell.h
//  FMTBExample
//
//  Created by 刘彬 on 16/9/20.
//  Copyright © 2016年 刘彬. All rights reserved.
//

#import <FMTB/FMTB.h>


@interface FMIconWithTitleCellModel : FMBaseCellModel

@property (nonatomic, strong) UIImage *icon;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) UIFont *titleFont;
@property (nonatomic, strong) UIColor *titleColor;
@property (nonatomic, assign) NSTextAlignment titleAlignment;

@end

/*!
 @class
 @abstract title带icon的cell
 */
@interface FMIconWithTitleCell : FMBaseTableViewCell

@end
