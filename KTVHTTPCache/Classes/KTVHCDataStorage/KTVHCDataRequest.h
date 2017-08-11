//
//  KTVHCDataRequest.h
//  KTVHTTPCache
//
//  Created by Single on 2017/8/11.
//  Copyright © 2017年 Single. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSInteger const KTVHCDataRequestRangeVaule = -1;

@interface KTVHCDataRequest : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)requestWithURLString:(NSString *)URLString;

@property (nonatomic, copy, readonly) NSString * URLString;

@property (nonatomic, assign) NSInteger rangeMin;      // default is KTVHCDataRequestRangeVaule.
@property (nonatomic, assign) NSInteger rangeMax;      // default is KTVHCDataRequestRangeVaule.

@end