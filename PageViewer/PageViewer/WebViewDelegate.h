//
//  WebViewDelegate.h
//  PageViewer
//
//  Created by Dave on 2013-03-22.
//  Copyright (c) 2013 Dave. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIWebView.h>

@interface WebViewDelegate : NSObject <UIWebViewDelegate> {
    @private
    UIWebView * __weak webView;
}

-(id)initWith:(UIWebView *)webView;

@end
