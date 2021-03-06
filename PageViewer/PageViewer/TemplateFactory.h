//
//  TemplateFactory.h
//  PageViewer
//
//  Created by Dave on 2013-03-23.
//  Copyright (c) 2013 Dave. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Template.h"

// Creates and manages the set of templates in use.
@interface TemplateFactory : NSObject {
    @private
    NSMutableDictionary * dictionary;
}

-(id)init;
-(Template *)template:(NSString *)name;

@end
