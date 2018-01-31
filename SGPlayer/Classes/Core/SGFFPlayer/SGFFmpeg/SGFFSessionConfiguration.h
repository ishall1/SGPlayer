//
//  SGFFSessionConfiguration.h
//  SGPlayer
//
//  Created by Single on 2018/1/31.
//  Copyright © 2018年 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGFFSource.h"
#import "SGFFCodec.h"
#import "SGFFFilter.h"
#import "SGFFOutput.h"

@interface SGFFSessionConfiguration : NSObject

@property (nonatomic, strong) id <SGFFSource> customSource;

@property (nonatomic, strong) id <SGFFCodec> customAudioCodec;
@property (nonatomic, strong) id <SGFFCodec> customVideoCodec;
@property (nonatomic, assign) BOOL videoCodecVideoToolBoxEnable;

@property (nonatomic, strong) NSArray <id <SGFFFilter>> * customAudioFilters;
@property (nonatomic, strong) NSArray <id <SGFFFilter>> * customVideoFilters;

@property (nonatomic, strong) id <SGFFOutput> audioOutput;
@property (nonatomic, strong) id <SGFFOutput> videoOutput;

@end