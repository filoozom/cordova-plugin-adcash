//
//  ACConversionTracker.h
//  adcash-ios-sdk
//
//  Created by Martin on 12/22/14.
//  Copyright (c) 2014 AdCash. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
 Tracks conversion in your app to Adcash.
 
 Sample usage:
 
    - (BOOL) application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)options
    {
        // Track launching the app
        [ACConversionTracker trackApplicationOpenForAppID:@"ITUNES_APPLICATION_ID"];
        return YES;
    }
*/
@interface ACConversionTracker : NSObject


/**
 @brief  Use this method to track
 
 @param appID Your application id, generated by iTunes.
 
 @discussion The easiest way to find the correct ID for your application is to generate an iTunes URL using the [iTunes Link Maker](https://itunes.apple.com/linkmaker), and then extract the number immediately following the "id" string. <br>For example, the iTunes URL for the "Find My Friends" application is [https://itunes.apple.com/us/app/find-my-friends/id466122094](https://itunes.apple.com/us/app/find-my-friends/id466122094), so its application ID is `466122094`.
 @since 1.2
 */
+ (void) trackApplicationOpenForAppID:(NSString *)appID;

@end
