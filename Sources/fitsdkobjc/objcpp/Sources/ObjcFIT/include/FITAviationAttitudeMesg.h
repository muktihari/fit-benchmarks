////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Garmin Canada Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2021 Garmin International, Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.67Release
// Tag = production/akw/21.67.00-0-gd790f76b
////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITDate.h"
#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITAviationAttitudeMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// TimestampMs 
- (BOOL)isTimestampMsValid;
- (FITUInt16)getTimestampMs;
- (void)setTimestampMs:(FITUInt16)timestampMs;
// SystemTime 
@property(readonly,nonatomic) uint8_t numSystemTimeValues;
- (BOOL)isSystemTimeValidforIndex : (uint8_t)index;
- (FITUInt32)getSystemTimeforIndex : (uint8_t)index;
- (void)setSystemTime:(FITUInt32)systemTime forIndex:(uint8_t)index;
// Pitch 
@property(readonly,nonatomic) uint8_t numPitchValues;
- (BOOL)isPitchValidforIndex : (uint8_t)index;
- (FITFloat32)getPitchforIndex : (uint8_t)index;
- (void)setPitch:(FITFloat32)pitch forIndex:(uint8_t)index;
// Roll 
@property(readonly,nonatomic) uint8_t numRollValues;
- (BOOL)isRollValidforIndex : (uint8_t)index;
- (FITFloat32)getRollforIndex : (uint8_t)index;
- (void)setRoll:(FITFloat32)roll forIndex:(uint8_t)index;
// AccelLateral 
@property(readonly,nonatomic) uint8_t numAccelLateralValues;
- (BOOL)isAccelLateralValidforIndex : (uint8_t)index;
- (FITFloat32)getAccelLateralforIndex : (uint8_t)index;
- (void)setAccelLateral:(FITFloat32)accelLateral forIndex:(uint8_t)index;
// AccelNormal 
@property(readonly,nonatomic) uint8_t numAccelNormalValues;
- (BOOL)isAccelNormalValidforIndex : (uint8_t)index;
- (FITFloat32)getAccelNormalforIndex : (uint8_t)index;
- (void)setAccelNormal:(FITFloat32)accelNormal forIndex:(uint8_t)index;
// TurnRate 
@property(readonly,nonatomic) uint8_t numTurnRateValues;
- (BOOL)isTurnRateValidforIndex : (uint8_t)index;
- (FITFloat32)getTurnRateforIndex : (uint8_t)index;
- (void)setTurnRate:(FITFloat32)turnRate forIndex:(uint8_t)index;
// Stage 
@property(readonly,nonatomic) uint8_t numStageValues;
- (BOOL)isStageValidforIndex : (uint8_t)index;
- (FITAttitudeStage)getStageforIndex : (uint8_t)index;
- (void)setStage:(FITAttitudeStage)stage forIndex:(uint8_t)index;
// AttitudeStageComplete 
@property(readonly,nonatomic) uint8_t numAttitudeStageCompleteValues;
- (BOOL)isAttitudeStageCompleteValidforIndex : (uint8_t)index;
- (FITUInt8)getAttitudeStageCompleteforIndex : (uint8_t)index;
- (void)setAttitudeStageComplete:(FITUInt8)attitudeStageComplete forIndex:(uint8_t)index;
// Track 
@property(readonly,nonatomic) uint8_t numTrackValues;
- (BOOL)isTrackValidforIndex : (uint8_t)index;
- (FITFloat32)getTrackforIndex : (uint8_t)index;
- (void)setTrack:(FITFloat32)track forIndex:(uint8_t)index;
// Validity 
@property(readonly,nonatomic) uint8_t numValidityValues;
- (BOOL)isValidityValidforIndex : (uint8_t)index;
- (FITAttitudeValidity)getValidityforIndex : (uint8_t)index;
- (void)setValidity:(FITAttitudeValidity)validity forIndex:(uint8_t)index;

@end

NS_ASSUME_NONNULL_END
