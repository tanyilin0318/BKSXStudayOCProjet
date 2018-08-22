//
//  AppDelegate.h
//  BKSXStudayOCProjet
//
//  Created by 谭林杰 on 2018/8/22.
//  Copyright © 2018年 Bksx-cp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

