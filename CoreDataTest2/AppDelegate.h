//
//  AppDelegate.h
//  CoreDataTest2
//
//  Created by Александр on 07.10.17.
//  Copyright © 2017 Александр. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

