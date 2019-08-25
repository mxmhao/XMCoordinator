//
//  XMCoordinator+ShowImage.m
//  XMCoordinator
//
//  Created by noontec on 2018/8/13.
//  Copyright © 2018年 mxm. All rights reserved.
//

#import "XMCoordinator+ShowImage.h"
#import "ShowImageViewController.h"

@implementation XMCoordinator (DemoService_ShowImage)

//实现类方法
+ (UIViewController *)showImage:(UIImage *)image
{
    NSLog(@"显示图片");
    return [[ShowImageViewController alloc] initWithImage:image];
}

@end
