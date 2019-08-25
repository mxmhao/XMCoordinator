//
//  DemoService_ShowImage.h
//  XMCoordinator
//
//  Created by mxm on 2018/8/30.
//  Copyright © 2018年 mxm. All rights reserved.

//  这是一个Demo用例，请仿照下面的方式去自定义协议
//  此文件最好由协议的实现者去维护
/*
 使用方式：Class<YourProtocol> obj = [XMCoordinator coordinatorForProtocol:@protocol(YourProtocol)];
 
 */

//协议最好是用这种宏定义包裹
#ifndef DemoService_ShowImage_h
#define DemoService_ShowImage_h

#import <UIKit/UIKit.h>

@protocol DemoService_ShowImage <NSObject>
//用类方法
+ (UIViewController *)showImage:(UIImage *)image;

@end

#endif /* DemoService_ShowImage_h */
