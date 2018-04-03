//
//  MBLicensePlatesParser.h
//  MicroBlinkDev
//
//  Created by Jura Skrlec on 09/03/2018.
//

#import <Foundation/Foundation.h>
#import "PPMicroBlinkDefines.h"
#import "MBParser.h"
#import "MBLicensePlatesParserResult.h"
#import "MBMicroBlinkInitialization.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * MBLicensePlatesParser is used for parsing license plates
 */
PP_CLASS_AVAILABLE_IOS(8.0)
@interface MBLicensePlatesParser : MBParser <NSCopying>

MB_INIT

/**
 * License plates parser result
 */
@property (nonatomic, strong, readonly) MBLicensePlatesParserResult *result;

@end

NS_ASSUME_NONNULL_END
