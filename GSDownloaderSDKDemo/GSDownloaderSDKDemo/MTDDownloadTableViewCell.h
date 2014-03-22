//
//  MTDDownloadTableViewCell.h
//  GSDownloaderSDKDemo
//
//  Created by Chaoqian Wu on 14-3-10.
//  Copyright (c) 2014年 4399 Network CO.ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MTDDownloadTableViewCellDelegate.h"

@protocol GSSingleDownloadTaskProtocol;

@interface MTDDownloadTableViewCell : UITableViewCell
{
    
}

@property (nonatomic) int index;

@property (nonatomic,assign) id<MTDDownloadTableViewCellDelegate> delegate;

@property (nonatomic,strong) UIButton* downloadButton;

@property (nonatomic,strong) UILabel* downloadRateLabel;

@property (nonatomic,strong) UILabel* downloadPercentLabel;

@property (nonatomic,strong) UIProgressView* downloadProgress;

- (void)customCellByDownloadTask:(GSDownloadTask*)task;

@end
