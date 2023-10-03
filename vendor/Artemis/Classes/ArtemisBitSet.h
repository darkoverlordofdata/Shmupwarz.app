/**
 ARGH! not in Artemis, instead a Java 7 feature
 */
#import <Foundation/Foundation.h>
#if OBJC_RUNTIME == 20
#import "CoreFoundation/CFBitVector.h"
#endif
#if OBJC_RUNTIME == 21
#import <CoreFoundation/CFBitVector.h>
#define kCFAllocatorDefault NULL
#endif

// #define TRUE (BOOL)1
// #define FALSE (BOOL)0
#define kCFAllocatorDefault NULL

@interface ArtemisBitSet : NSObject

+(ArtemisBitSet*) bitSet;

-(void) clear;
-(void) clear:(CFIndex) index;
-(void) set:(CFIndex) index;
-(BOOL) get:(CFIndex) index;

@property(nonatomic,readonly) BOOL isEmpty;

/** "Returns true if the specified BitSet has any bits set to true that are also set to true in this BitSet." */
-(BOOL) intersects:(ArtemisBitSet*) otherBitSet;

/** "Returns the index of the first bit that is set to true that occurs on or after the specified starting index." */
-(CFIndex) nextSetBit:(CFIndex) startIndex;

@end
