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

#import "FITDecoder.h"
#import "FITMessage.h"

#import "FITFileIdMesg.h"
#import "FITFileCreatorMesg.h"
#import "FITTimestampCorrelationMesg.h"
#import "FITSoftwareMesg.h"
#import "FITSlaveDeviceMesg.h"
#import "FITCapabilitiesMesg.h"
#import "FITFileCapabilitiesMesg.h"
#import "FITMesgCapabilitiesMesg.h"
#import "FITFieldCapabilitiesMesg.h"
#import "FITDeviceSettingsMesg.h"
#import "FITUserProfileMesg.h"
#import "FITHrmProfileMesg.h"
#import "FITSdmProfileMesg.h"
#import "FITBikeProfileMesg.h"
#import "FITConnectivityMesg.h"
#import "FITWatchfaceSettingsMesg.h"
#import "FITOhrSettingsMesg.h"
#import "FITZonesTargetMesg.h"
#import "FITSportMesg.h"
#import "FITHrZoneMesg.h"
#import "FITSpeedZoneMesg.h"
#import "FITCadenceZoneMesg.h"
#import "FITPowerZoneMesg.h"
#import "FITMetZoneMesg.h"
#import "FITDiveSettingsMesg.h"
#import "FITDiveAlarmMesg.h"
#import "FITDiveGasMesg.h"
#import "FITGoalMesg.h"
#import "FITActivityMesg.h"
#import "FITSessionMesg.h"
#import "FITLapMesg.h"
#import "FITLengthMesg.h"
#import "FITRecordMesg.h"
#import "FITEventMesg.h"
#import "FITDeviceInfoMesg.h"
#import "FITTrainingFileMesg.h"
#import "FITWeatherConditionsMesg.h"
#import "FITWeatherAlertMesg.h"
#import "FITGpsMetadataMesg.h"
#import "FITCameraEventMesg.h"
#import "FITGyroscopeDataMesg.h"
#import "FITAccelerometerDataMesg.h"
#import "FITMagnetometerDataMesg.h"
#import "FITBarometerDataMesg.h"
#import "FITThreeDSensorCalibrationMesg.h"
#import "FITOneDSensorCalibrationMesg.h"
#import "FITVideoFrameMesg.h"
#import "FITObdiiDataMesg.h"
#import "FITNmeaSentenceMesg.h"
#import "FITAviationAttitudeMesg.h"
#import "FITVideoMesg.h"
#import "FITVideoTitleMesg.h"
#import "FITVideoDescriptionMesg.h"
#import "FITVideoClipMesg.h"
#import "FITSetMesg.h"
#import "FITJumpMesg.h"
#import "FITClimbProMesg.h"
#import "FITFieldDescriptionMesg.h"
#import "FITDeveloperDataIdMesg.h"
#import "FITCourseMesg.h"
#import "FITCoursePointMesg.h"
#import "FITSegmentIdMesg.h"
#import "FITSegmentLeaderboardEntryMesg.h"
#import "FITSegmentPointMesg.h"
#import "FITSegmentLapMesg.h"
#import "FITSegmentFileMesg.h"
#import "FITWorkoutMesg.h"
#import "FITWorkoutSessionMesg.h"
#import "FITWorkoutStepMesg.h"
#import "FITExerciseTitleMesg.h"
#import "FITScheduleMesg.h"
#import "FITTotalsMesg.h"
#import "FITWeightScaleMesg.h"
#import "FITBloodPressureMesg.h"
#import "FITMonitoringInfoMesg.h"
#import "FITMonitoringMesg.h"
#import "FITHrMesg.h"
#import "FITStressLevelMesg.h"
#import "FITMemoGlobMesg.h"
#import "FITAntChannelIdMesg.h"
#import "FITAntRxMesg.h"
#import "FITAntTxMesg.h"
#import "FITExdScreenConfigurationMesg.h"
#import "FITExdDataFieldConfigurationMesg.h"
#import "FITExdDataConceptConfigurationMesg.h"
#import "FITDiveSummaryMesg.h"
#import "FITHrvMesg.h"
#import "FITPadMesg.h"

NS_ASSUME_NONNULL_BEGIN


@class FITMessageBroadcaster;

@protocol FITFileIdMesgDelegate <NSObject>
- (void)onFileIdMesg:(FITFileIdMesg*)mesg;
@end

@protocol FITFileCreatorMesgDelegate <NSObject>
- (void)onFileCreatorMesg:(FITFileCreatorMesg*)mesg;
@end

@protocol FITTimestampCorrelationMesgDelegate <NSObject>
- (void)onTimestampCorrelationMesg:(FITTimestampCorrelationMesg*)mesg;
@end

@protocol FITSoftwareMesgDelegate <NSObject>
- (void)onSoftwareMesg:(FITSoftwareMesg*)mesg;
@end

@protocol FITSlaveDeviceMesgDelegate <NSObject>
- (void)onSlaveDeviceMesg:(FITSlaveDeviceMesg*)mesg;
@end

@protocol FITCapabilitiesMesgDelegate <NSObject>
- (void)onCapabilitiesMesg:(FITCapabilitiesMesg*)mesg;
@end

@protocol FITFileCapabilitiesMesgDelegate <NSObject>
- (void)onFileCapabilitiesMesg:(FITFileCapabilitiesMesg*)mesg;
@end

@protocol FITMesgCapabilitiesMesgDelegate <NSObject>
- (void)onMesgCapabilitiesMesg:(FITMesgCapabilitiesMesg*)mesg;
@end

@protocol FITFieldCapabilitiesMesgDelegate <NSObject>
- (void)onFieldCapabilitiesMesg:(FITFieldCapabilitiesMesg*)mesg;
@end

@protocol FITDeviceSettingsMesgDelegate <NSObject>
- (void)onDeviceSettingsMesg:(FITDeviceSettingsMesg*)mesg;
@end

@protocol FITUserProfileMesgDelegate <NSObject>
- (void)onUserProfileMesg:(FITUserProfileMesg*)mesg;
@end

@protocol FITHrmProfileMesgDelegate <NSObject>
- (void)onHrmProfileMesg:(FITHrmProfileMesg*)mesg;
@end

@protocol FITSdmProfileMesgDelegate <NSObject>
- (void)onSdmProfileMesg:(FITSdmProfileMesg*)mesg;
@end

@protocol FITBikeProfileMesgDelegate <NSObject>
- (void)onBikeProfileMesg:(FITBikeProfileMesg*)mesg;
@end

@protocol FITConnectivityMesgDelegate <NSObject>
- (void)onConnectivityMesg:(FITConnectivityMesg*)mesg;
@end

@protocol FITWatchfaceSettingsMesgDelegate <NSObject>
- (void)onWatchfaceSettingsMesg:(FITWatchfaceSettingsMesg*)mesg;
@end

@protocol FITOhrSettingsMesgDelegate <NSObject>
- (void)onOhrSettingsMesg:(FITOhrSettingsMesg*)mesg;
@end

@protocol FITZonesTargetMesgDelegate <NSObject>
- (void)onZonesTargetMesg:(FITZonesTargetMesg*)mesg;
@end

@protocol FITSportMesgDelegate <NSObject>
- (void)onSportMesg:(FITSportMesg*)mesg;
@end

@protocol FITHrZoneMesgDelegate <NSObject>
- (void)onHrZoneMesg:(FITHrZoneMesg*)mesg;
@end

@protocol FITSpeedZoneMesgDelegate <NSObject>
- (void)onSpeedZoneMesg:(FITSpeedZoneMesg*)mesg;
@end

@protocol FITCadenceZoneMesgDelegate <NSObject>
- (void)onCadenceZoneMesg:(FITCadenceZoneMesg*)mesg;
@end

@protocol FITPowerZoneMesgDelegate <NSObject>
- (void)onPowerZoneMesg:(FITPowerZoneMesg*)mesg;
@end

@protocol FITMetZoneMesgDelegate <NSObject>
- (void)onMetZoneMesg:(FITMetZoneMesg*)mesg;
@end

@protocol FITDiveSettingsMesgDelegate <NSObject>
- (void)onDiveSettingsMesg:(FITDiveSettingsMesg*)mesg;
@end

@protocol FITDiveAlarmMesgDelegate <NSObject>
- (void)onDiveAlarmMesg:(FITDiveAlarmMesg*)mesg;
@end

@protocol FITDiveGasMesgDelegate <NSObject>
- (void)onDiveGasMesg:(FITDiveGasMesg*)mesg;
@end

@protocol FITGoalMesgDelegate <NSObject>
- (void)onGoalMesg:(FITGoalMesg*)mesg;
@end

@protocol FITActivityMesgDelegate <NSObject>
- (void)onActivityMesg:(FITActivityMesg*)mesg;
@end

@protocol FITSessionMesgDelegate <NSObject>
- (void)onSessionMesg:(FITSessionMesg*)mesg;
@end

@protocol FITLapMesgDelegate <NSObject>
- (void)onLapMesg:(FITLapMesg*)mesg;
@end

@protocol FITLengthMesgDelegate <NSObject>
- (void)onLengthMesg:(FITLengthMesg*)mesg;
@end

@protocol FITRecordMesgDelegate <NSObject>
- (void)onRecordMesg:(FITRecordMesg*)mesg;
@end

@protocol FITEventMesgDelegate <NSObject>
- (void)onEventMesg:(FITEventMesg*)mesg;
@end

@protocol FITDeviceInfoMesgDelegate <NSObject>
- (void)onDeviceInfoMesg:(FITDeviceInfoMesg*)mesg;
@end

@protocol FITTrainingFileMesgDelegate <NSObject>
- (void)onTrainingFileMesg:(FITTrainingFileMesg*)mesg;
@end

@protocol FITWeatherConditionsMesgDelegate <NSObject>
- (void)onWeatherConditionsMesg:(FITWeatherConditionsMesg*)mesg;
@end

@protocol FITWeatherAlertMesgDelegate <NSObject>
- (void)onWeatherAlertMesg:(FITWeatherAlertMesg*)mesg;
@end

@protocol FITGpsMetadataMesgDelegate <NSObject>
- (void)onGpsMetadataMesg:(FITGpsMetadataMesg*)mesg;
@end

@protocol FITCameraEventMesgDelegate <NSObject>
- (void)onCameraEventMesg:(FITCameraEventMesg*)mesg;
@end

@protocol FITGyroscopeDataMesgDelegate <NSObject>
- (void)onGyroscopeDataMesg:(FITGyroscopeDataMesg*)mesg;
@end

@protocol FITAccelerometerDataMesgDelegate <NSObject>
- (void)onAccelerometerDataMesg:(FITAccelerometerDataMesg*)mesg;
@end

@protocol FITMagnetometerDataMesgDelegate <NSObject>
- (void)onMagnetometerDataMesg:(FITMagnetometerDataMesg*)mesg;
@end

@protocol FITBarometerDataMesgDelegate <NSObject>
- (void)onBarometerDataMesg:(FITBarometerDataMesg*)mesg;
@end

@protocol FITThreeDSensorCalibrationMesgDelegate <NSObject>
- (void)onThreeDSensorCalibrationMesg:(FITThreeDSensorCalibrationMesg*)mesg;
@end

@protocol FITOneDSensorCalibrationMesgDelegate <NSObject>
- (void)onOneDSensorCalibrationMesg:(FITOneDSensorCalibrationMesg*)mesg;
@end

@protocol FITVideoFrameMesgDelegate <NSObject>
- (void)onVideoFrameMesg:(FITVideoFrameMesg*)mesg;
@end

@protocol FITObdiiDataMesgDelegate <NSObject>
- (void)onObdiiDataMesg:(FITObdiiDataMesg*)mesg;
@end

@protocol FITNmeaSentenceMesgDelegate <NSObject>
- (void)onNmeaSentenceMesg:(FITNmeaSentenceMesg*)mesg;
@end

@protocol FITAviationAttitudeMesgDelegate <NSObject>
- (void)onAviationAttitudeMesg:(FITAviationAttitudeMesg*)mesg;
@end

@protocol FITVideoMesgDelegate <NSObject>
- (void)onVideoMesg:(FITVideoMesg*)mesg;
@end

@protocol FITVideoTitleMesgDelegate <NSObject>
- (void)onVideoTitleMesg:(FITVideoTitleMesg*)mesg;
@end

@protocol FITVideoDescriptionMesgDelegate <NSObject>
- (void)onVideoDescriptionMesg:(FITVideoDescriptionMesg*)mesg;
@end

@protocol FITVideoClipMesgDelegate <NSObject>
- (void)onVideoClipMesg:(FITVideoClipMesg*)mesg;
@end

@protocol FITSetMesgDelegate <NSObject>
- (void)onSetMesg:(FITSetMesg*)mesg;
@end

@protocol FITJumpMesgDelegate <NSObject>
- (void)onJumpMesg:(FITJumpMesg*)mesg;
@end

@protocol FITClimbProMesgDelegate <NSObject>
- (void)onClimbProMesg:(FITClimbProMesg*)mesg;
@end

@protocol FITFieldDescriptionMesgDelegate <NSObject>
- (void)onFieldDescriptionMesg:(FITFieldDescriptionMesg*)mesg;
@end

@protocol FITDeveloperDataIdMesgDelegate <NSObject>
- (void)onDeveloperDataIdMesg:(FITDeveloperDataIdMesg*)mesg;
@end

@protocol FITCourseMesgDelegate <NSObject>
- (void)onCourseMesg:(FITCourseMesg*)mesg;
@end

@protocol FITCoursePointMesgDelegate <NSObject>
- (void)onCoursePointMesg:(FITCoursePointMesg*)mesg;
@end

@protocol FITSegmentIdMesgDelegate <NSObject>
- (void)onSegmentIdMesg:(FITSegmentIdMesg*)mesg;
@end

@protocol FITSegmentLeaderboardEntryMesgDelegate <NSObject>
- (void)onSegmentLeaderboardEntryMesg:(FITSegmentLeaderboardEntryMesg*)mesg;
@end

@protocol FITSegmentPointMesgDelegate <NSObject>
- (void)onSegmentPointMesg:(FITSegmentPointMesg*)mesg;
@end

@protocol FITSegmentLapMesgDelegate <NSObject>
- (void)onSegmentLapMesg:(FITSegmentLapMesg*)mesg;
@end

@protocol FITSegmentFileMesgDelegate <NSObject>
- (void)onSegmentFileMesg:(FITSegmentFileMesg*)mesg;
@end

@protocol FITWorkoutMesgDelegate <NSObject>
- (void)onWorkoutMesg:(FITWorkoutMesg*)mesg;
@end

@protocol FITWorkoutSessionMesgDelegate <NSObject>
- (void)onWorkoutSessionMesg:(FITWorkoutSessionMesg*)mesg;
@end

@protocol FITWorkoutStepMesgDelegate <NSObject>
- (void)onWorkoutStepMesg:(FITWorkoutStepMesg*)mesg;
@end

@protocol FITExerciseTitleMesgDelegate <NSObject>
- (void)onExerciseTitleMesg:(FITExerciseTitleMesg*)mesg;
@end

@protocol FITScheduleMesgDelegate <NSObject>
- (void)onScheduleMesg:(FITScheduleMesg*)mesg;
@end

@protocol FITTotalsMesgDelegate <NSObject>
- (void)onTotalsMesg:(FITTotalsMesg*)mesg;
@end

@protocol FITWeightScaleMesgDelegate <NSObject>
- (void)onWeightScaleMesg:(FITWeightScaleMesg*)mesg;
@end

@protocol FITBloodPressureMesgDelegate <NSObject>
- (void)onBloodPressureMesg:(FITBloodPressureMesg*)mesg;
@end

@protocol FITMonitoringInfoMesgDelegate <NSObject>
- (void)onMonitoringInfoMesg:(FITMonitoringInfoMesg*)mesg;
@end

@protocol FITMonitoringMesgDelegate <NSObject>
- (void)onMonitoringMesg:(FITMonitoringMesg*)mesg;
@end

@protocol FITHrMesgDelegate <NSObject>
- (void)onHrMesg:(FITHrMesg*)mesg;
@end

@protocol FITStressLevelMesgDelegate <NSObject>
- (void)onStressLevelMesg:(FITStressLevelMesg*)mesg;
@end

@protocol FITMemoGlobMesgDelegate <NSObject>
- (void)onMemoGlobMesg:(FITMemoGlobMesg*)mesg;
@end

@protocol FITAntChannelIdMesgDelegate <NSObject>
- (void)onAntChannelIdMesg:(FITAntChannelIdMesg*)mesg;
@end

@protocol FITAntRxMesgDelegate <NSObject>
- (void)onAntRxMesg:(FITAntRxMesg*)mesg;
@end

@protocol FITAntTxMesgDelegate <NSObject>
- (void)onAntTxMesg:(FITAntTxMesg*)mesg;
@end

@protocol FITExdScreenConfigurationMesgDelegate <NSObject>
- (void)onExdScreenConfigurationMesg:(FITExdScreenConfigurationMesg*)mesg;
@end

@protocol FITExdDataFieldConfigurationMesgDelegate <NSObject>
- (void)onExdDataFieldConfigurationMesg:(FITExdDataFieldConfigurationMesg*)mesg;
@end

@protocol FITExdDataConceptConfigurationMesgDelegate <NSObject>
- (void)onExdDataConceptConfigurationMesg:(FITExdDataConceptConfigurationMesg*)mesg;
@end

@protocol FITDiveSummaryMesgDelegate <NSObject>
- (void)onDiveSummaryMesg:(FITDiveSummaryMesg*)mesg;
@end

@protocol FITHrvMesgDelegate <NSObject>
- (void)onHrvMesg:(FITHrvMesg*)mesg;
@end

@protocol FITPadMesgDelegate <NSObject>
- (void)onPadMesg:(FITPadMesg*)mesg;
@end

@interface FITMessageBroadcaster : NSObject<FITMesgDelegate>
@property (weak) id<FITMesgDelegate>mesgDelegate;

@property (weak) id<FITFileIdMesgDelegate> fitFileIdMesgDelegate;
@property (weak) id<FITFileCreatorMesgDelegate> fitFileCreatorMesgDelegate;
@property (weak) id<FITTimestampCorrelationMesgDelegate> fitTimestampCorrelationMesgDelegate;
@property (weak) id<FITSoftwareMesgDelegate> fitSoftwareMesgDelegate;
@property (weak) id<FITSlaveDeviceMesgDelegate> fitSlaveDeviceMesgDelegate;
@property (weak) id<FITCapabilitiesMesgDelegate> fitCapabilitiesMesgDelegate;
@property (weak) id<FITFileCapabilitiesMesgDelegate> fitFileCapabilitiesMesgDelegate;
@property (weak) id<FITMesgCapabilitiesMesgDelegate> fitMesgCapabilitiesMesgDelegate;
@property (weak) id<FITFieldCapabilitiesMesgDelegate> fitFieldCapabilitiesMesgDelegate;
@property (weak) id<FITDeviceSettingsMesgDelegate> fitDeviceSettingsMesgDelegate;
@property (weak) id<FITUserProfileMesgDelegate> fitUserProfileMesgDelegate;
@property (weak) id<FITHrmProfileMesgDelegate> fitHrmProfileMesgDelegate;
@property (weak) id<FITSdmProfileMesgDelegate> fitSdmProfileMesgDelegate;
@property (weak) id<FITBikeProfileMesgDelegate> fitBikeProfileMesgDelegate;
@property (weak) id<FITConnectivityMesgDelegate> fitConnectivityMesgDelegate;
@property (weak) id<FITWatchfaceSettingsMesgDelegate> fitWatchfaceSettingsMesgDelegate;
@property (weak) id<FITOhrSettingsMesgDelegate> fitOhrSettingsMesgDelegate;
@property (weak) id<FITZonesTargetMesgDelegate> fitZonesTargetMesgDelegate;
@property (weak) id<FITSportMesgDelegate> fitSportMesgDelegate;
@property (weak) id<FITHrZoneMesgDelegate> fitHrZoneMesgDelegate;
@property (weak) id<FITSpeedZoneMesgDelegate> fitSpeedZoneMesgDelegate;
@property (weak) id<FITCadenceZoneMesgDelegate> fitCadenceZoneMesgDelegate;
@property (weak) id<FITPowerZoneMesgDelegate> fitPowerZoneMesgDelegate;
@property (weak) id<FITMetZoneMesgDelegate> fitMetZoneMesgDelegate;
@property (weak) id<FITDiveSettingsMesgDelegate> fitDiveSettingsMesgDelegate;
@property (weak) id<FITDiveAlarmMesgDelegate> fitDiveAlarmMesgDelegate;
@property (weak) id<FITDiveGasMesgDelegate> fitDiveGasMesgDelegate;
@property (weak) id<FITGoalMesgDelegate> fitGoalMesgDelegate;
@property (weak) id<FITActivityMesgDelegate> fitActivityMesgDelegate;
@property (weak) id<FITSessionMesgDelegate> fitSessionMesgDelegate;
@property (weak) id<FITLapMesgDelegate> fitLapMesgDelegate;
@property (weak) id<FITLengthMesgDelegate> fitLengthMesgDelegate;
@property (weak) id<FITRecordMesgDelegate> fitRecordMesgDelegate;
@property (weak) id<FITEventMesgDelegate> fitEventMesgDelegate;
@property (weak) id<FITDeviceInfoMesgDelegate> fitDeviceInfoMesgDelegate;
@property (weak) id<FITTrainingFileMesgDelegate> fitTrainingFileMesgDelegate;
@property (weak) id<FITWeatherConditionsMesgDelegate> fitWeatherConditionsMesgDelegate;
@property (weak) id<FITWeatherAlertMesgDelegate> fitWeatherAlertMesgDelegate;
@property (weak) id<FITGpsMetadataMesgDelegate> fitGpsMetadataMesgDelegate;
@property (weak) id<FITCameraEventMesgDelegate> fitCameraEventMesgDelegate;
@property (weak) id<FITGyroscopeDataMesgDelegate> fitGyroscopeDataMesgDelegate;
@property (weak) id<FITAccelerometerDataMesgDelegate> fitAccelerometerDataMesgDelegate;
@property (weak) id<FITMagnetometerDataMesgDelegate> fitMagnetometerDataMesgDelegate;
@property (weak) id<FITBarometerDataMesgDelegate> fitBarometerDataMesgDelegate;
@property (weak) id<FITThreeDSensorCalibrationMesgDelegate> fitThreeDSensorCalibrationMesgDelegate;
@property (weak) id<FITOneDSensorCalibrationMesgDelegate> fitOneDSensorCalibrationMesgDelegate;
@property (weak) id<FITVideoFrameMesgDelegate> fitVideoFrameMesgDelegate;
@property (weak) id<FITObdiiDataMesgDelegate> fitObdiiDataMesgDelegate;
@property (weak) id<FITNmeaSentenceMesgDelegate> fitNmeaSentenceMesgDelegate;
@property (weak) id<FITAviationAttitudeMesgDelegate> fitAviationAttitudeMesgDelegate;
@property (weak) id<FITVideoMesgDelegate> fitVideoMesgDelegate;
@property (weak) id<FITVideoTitleMesgDelegate> fitVideoTitleMesgDelegate;
@property (weak) id<FITVideoDescriptionMesgDelegate> fitVideoDescriptionMesgDelegate;
@property (weak) id<FITVideoClipMesgDelegate> fitVideoClipMesgDelegate;
@property (weak) id<FITSetMesgDelegate> fitSetMesgDelegate;
@property (weak) id<FITJumpMesgDelegate> fitJumpMesgDelegate;
@property (weak) id<FITClimbProMesgDelegate> fitClimbProMesgDelegate;
@property (weak) id<FITFieldDescriptionMesgDelegate> fitFieldDescriptionMesgDelegate;
@property (weak) id<FITDeveloperDataIdMesgDelegate> fitDeveloperDataIdMesgDelegate;
@property (weak) id<FITCourseMesgDelegate> fitCourseMesgDelegate;
@property (weak) id<FITCoursePointMesgDelegate> fitCoursePointMesgDelegate;
@property (weak) id<FITSegmentIdMesgDelegate> fitSegmentIdMesgDelegate;
@property (weak) id<FITSegmentLeaderboardEntryMesgDelegate> fitSegmentLeaderboardEntryMesgDelegate;
@property (weak) id<FITSegmentPointMesgDelegate> fitSegmentPointMesgDelegate;
@property (weak) id<FITSegmentLapMesgDelegate> fitSegmentLapMesgDelegate;
@property (weak) id<FITSegmentFileMesgDelegate> fitSegmentFileMesgDelegate;
@property (weak) id<FITWorkoutMesgDelegate> fitWorkoutMesgDelegate;
@property (weak) id<FITWorkoutSessionMesgDelegate> fitWorkoutSessionMesgDelegate;
@property (weak) id<FITWorkoutStepMesgDelegate> fitWorkoutStepMesgDelegate;
@property (weak) id<FITExerciseTitleMesgDelegate> fitExerciseTitleMesgDelegate;
@property (weak) id<FITScheduleMesgDelegate> fitScheduleMesgDelegate;
@property (weak) id<FITTotalsMesgDelegate> fitTotalsMesgDelegate;
@property (weak) id<FITWeightScaleMesgDelegate> fitWeightScaleMesgDelegate;
@property (weak) id<FITBloodPressureMesgDelegate> fitBloodPressureMesgDelegate;
@property (weak) id<FITMonitoringInfoMesgDelegate> fitMonitoringInfoMesgDelegate;
@property (weak) id<FITMonitoringMesgDelegate> fitMonitoringMesgDelegate;
@property (weak) id<FITHrMesgDelegate> fitHrMesgDelegate;
@property (weak) id<FITStressLevelMesgDelegate> fitStressLevelMesgDelegate;
@property (weak) id<FITMemoGlobMesgDelegate> fitMemoGlobMesgDelegate;
@property (weak) id<FITAntChannelIdMesgDelegate> fitAntChannelIdMesgDelegate;
@property (weak) id<FITAntRxMesgDelegate> fitAntRxMesgDelegate;
@property (weak) id<FITAntTxMesgDelegate> fitAntTxMesgDelegate;
@property (weak) id<FITExdScreenConfigurationMesgDelegate> fitExdScreenConfigurationMesgDelegate;
@property (weak) id<FITExdDataFieldConfigurationMesgDelegate> fitExdDataFieldConfigurationMesgDelegate;
@property (weak) id<FITExdDataConceptConfigurationMesgDelegate> fitExdDataConceptConfigurationMesgDelegate;
@property (weak) id<FITDiveSummaryMesgDelegate> fitDiveSummaryMesgDelegate;
@property (weak) id<FITHrvMesgDelegate> fitHrvMesgDelegate;
@property (weak) id<FITPadMesgDelegate> fitPadMesgDelegate;

@end

NS_ASSUME_NONNULL_END
