#include "Header.h"
#import <XCTest/XCTest.h>

@interface teest : XCTestCase

@end

@implementation teest

- (void)testLab {
    
       char fname[100];
       int t = ProcessTXT1(fname);
       XCTAssertEqual(t, 0);

    
}



@end
