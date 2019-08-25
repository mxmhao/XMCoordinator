//
//  ShowImageViewController.h
//  XMCoordinator
//
//  Created by noontec on 2018/8/30.
//  Copyright © 2018年 mxm. All rights reserved.
//
//  单独运行此模块时，去掉TARGETS->Phases->Compile Sources中的XMCoordinator+ShowImage.m文件即可；或者用pod引入XMCoordinator

#import <UIKit/UIKit.h>

@interface ShowImageViewController : UIViewController

- (instancetype)initWithImage:(UIImage *)image;

@end
