//
//  ModelController.h
//  EcoBt
//
//  Created by Derrick on 4/1/14.
//  Copyright (c) 2014 ___Derrick_Lo___. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
