//
//  TokenManager.h
//  THttpRequest
//
//  Created by Ted on 2016. 11. 14..
//  Copyright © 2016년 tedkim. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TokenManager : NSObject

+ (NSString *)getBasicToken;

+ (void)setToken:(id)response;
+ (void)resetToken;

+ (NSString *)getAccessToken;
+ (NSString *)getRefreshToken;
+ (NSString *)getSID;

@end
