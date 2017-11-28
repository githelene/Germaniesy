//
//  AppDelegate.h
//  Germanisy-ObjectiveC
//
//  Created by Mirza Jhanzaib Iqbal on 28.11.17.
//  Copyright © 2017 inskire. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

