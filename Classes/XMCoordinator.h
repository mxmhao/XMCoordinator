//
//  XMCoordinator.h
//  XMCoordinator
//
//  Created by mxm on 2018/8/13.
//  Copyright © 2018年 mxm. All rights reserved.

//  所有对外提供服务的模块的协议都应该放在Services文件夹下
//  一般不直接引入此文件，此文件应该被引入到XMServices.h文件夹下的协议文件中
//  所有的协议实现都用此类的分类去实现，并且所有的协议方法都用类方法

#import <Foundation/Foundation.h>

@interface XMCoordinator : NSObject

+ (Class)coordinatorForProtocol:(Protocol *)protocol;

@end
