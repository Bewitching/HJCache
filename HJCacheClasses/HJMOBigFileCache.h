//
//  HJMOBigFileCache.h
//  hjlib
//
//  Copyright Hunter and Johnson 2009, 2010, 2011
//  HJCache may be used freely in any iOS or Mac application free or commercial.
//  May be redistributed as source code only if all the original files are included.
//  See http://www.markj.net

#import <Foundation/Foundation.h>
#import "HJMOFileCache.h"



@interface HJMOBigFileCache : HJMOFileCache {

	NSNumber* lastTrimDirNum;
	NSDate* lastTrimDate;
}

@property (retain) NSNumber* lastTrimDirNum;
@property (retain) NSDate* lastTrimDate;

@end