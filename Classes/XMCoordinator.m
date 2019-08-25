//
//  XMCoordinator.m
//  XMCoordinator
//
//  Created by mxm on 2018/8/13.
//  Copyright © 2018年 mxm. All rights reserved.
//

#import "XMCoordinator.h"

@implementation XMCoordinator

+ (Class)coordinatorForProtocol:(Protocol *)protocol
{
    if (![self conformsToProtocol:protocol]) {
        @throw [NSException exceptionWithName:NSGenericException reason:[NSString stringWithFormat:@"您没有引入协议<%@>的相关服务模块", NSStringFromProtocol(protocol)] userInfo:nil];
    }
    return self;
}

@end
