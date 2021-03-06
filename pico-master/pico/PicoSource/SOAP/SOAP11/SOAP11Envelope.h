// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class SOAP11Header;
@class SOAP11Body;

/**
 (public class)
 
*/
@interface SOAP11Envelope : NSObject <PicoBindable> {

@private
    SOAP11Header *_header;
    SOAP11Body *_body;
    NSMutableArray *_any;

}


/**
 (public property)
 
 type : class SOAP11Header
*/
@property (nonatomic, retain) SOAP11Header *header;

/**
 (public property)
 
 type : class SOAP11Body
*/
@property (nonatomic, retain) SOAP11Body *body;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
