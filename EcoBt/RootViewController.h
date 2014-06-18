//
//  RootViewController.h
//  EcoBt
//
//  Created by Derrick on 4/1/14.
//  Copyright (c) 2014 ___Derrick_Lo___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CorePlot-CocoaTouch.h"

@protocol CPTPlotDataSource <NSObject>
-(NSUInteger)numberOfRecordsForPlot:(CPTPlot *)plot;   // we implement this one

@optional
// Implement one of the following
-(NSArray *)numbersForPlot:(CPTPlot *)plot
                     field:(NSUInteger)fieldEnum
          recordIndexRange:(NSRange)indexRange;

-(NSNumber *)numberForPlot:(CPTPlot *)plot            // and this one
                     field:(NSUInteger)fieldEnum
               recordIndex:(NSUInteger)index;

-(NSRange)recordIndexRangeForPlot:(CPTPlot *)plot
                        plotRange:(CPTPlotRange *)plotRect;

@end

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>
{
    CPTXYGraph *graph;
    
}

@property (strong, nonatomic) UIPageViewController *pageViewController;



@end
