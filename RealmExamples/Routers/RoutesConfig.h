//
//  RoutesConfig.h
//  RealmExamples
//  
//  Created by ash on 2019/4/10.
//  Copyright © 2019 whty. All rights reserved.
//
    

#ifndef RoutesConfig_h
#define RoutesConfig_h
#import <UIKit/UIKit.h>

typedef UIViewController *(^RoutesCallBack)(void);

@protocol RoutesProtocol <NSObject>

@required
+ (instancetype)routeWithParameters:(NSDictionary<NSString *,id> *)parameters;

@end

static NSString *routePath1 = @"/view/RouteViewController1";

static NSString *routePath2 = @"/view/RouteViewController2";

static NSString *route_scheme = @"whty";
static NSString *route_host = @"whty.com";

#endif /* RoutesConfig_h */
