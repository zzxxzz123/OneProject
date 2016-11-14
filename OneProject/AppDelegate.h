//
//  AppDelegate.h
//  OneProject
//
//  Created by 赵鑫哲 on 2016/11/15.
//  Copyright © 2016年 zhaoxinzhe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

