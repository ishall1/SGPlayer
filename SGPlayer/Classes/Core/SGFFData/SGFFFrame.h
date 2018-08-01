//
//  SGFFFrame.h
//  SGPlayer
//
//  Created by Single on 2018/1/18.
//  Copyright © 2018年 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGDefines.h"
#import "SGFFPacket.h"
#import "SGFFObjectPool.h"
#import "SGFFObjectQueue.h"

@interface SGFFFrame : NSObject <SGFFObjectPoolItem, SGFFObjectQueueItem>

- (SGMediaType)mediaType;

@property (nonatomic, assign) CMTime position;
@property (nonatomic, assign) CMTime duration;
@property (nonatomic, assign) long long size;

@end