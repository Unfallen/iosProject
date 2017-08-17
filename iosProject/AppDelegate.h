//
//  AppDelegate.h
//  iosProject
//
//  Created by Filadelfo Sandalo Jr. on 17/08/2017.
//  Copyright © 2017 training. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

