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


#import "FITMessage+Internal.h"

#import "FITString.h"

#import "FITBikeProfileMesg.h"

@implementation FITBikeProfileMesg

- (instancetype)init {
    self = [super initWithFitMesgIndex:fit::Profile::MESG_BIKE_PROFILE];

    return self;
}

// MessageIndex 
- (BOOL)isMessageIndexValid {
	const fit::Field* field = [super getField:254];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITMessageIndex)getMessageIndex {
    return ([super getFieldUINT16ValueForField:254 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setMessageIndex:(FITMessageIndex)messageIndex {
    [super setFieldUINT16ValueForField:254 andValue:(messageIndex) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Name 
- (BOOL)isNameValid {
	const fit::Field* field = [super getField:0];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (NSString *)getName {
    return ([super getFieldSTRINGValueForField:0 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setName:(NSString *)name {
    [super setFieldSTRINGValueForField:0 andValue:(name) forIndex:0];
} 

// Sport 
- (BOOL)isSportValid {
	const fit::Field* field = [super getField:1];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITSport)getSport {
    return ([super getFieldENUMValueForField:1 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setSport:(FITSport)sport {
    [super setFieldENUMValueForField:1 andValue:(sport) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// SubSport 
- (BOOL)isSubSportValid {
	const fit::Field* field = [super getField:2];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITSubSport)getSubSport {
    return ([super getFieldENUMValueForField:2 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setSubSport:(FITSubSport)subSport {
    [super setFieldENUMValueForField:2 andValue:(subSport) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Odometer 
- (BOOL)isOdometerValid {
	const fit::Field* field = [super getField:3];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getOdometer {
    return ([super getFieldFLOAT32ValueForField:3 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setOdometer:(FITFloat32)odometer {
    [super setFieldFLOAT32ValueForField:3 andValue:(odometer) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// BikeSpdAntId 
- (BOOL)isBikeSpdAntIdValid {
	const fit::Field* field = [super getField:4];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt16z)getBikeSpdAntId {
    return ([super getFieldUINT16ZValueForField:4 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setBikeSpdAntId:(FITUInt16z)bikeSpdAntId {
    [super setFieldUINT16ZValueForField:4 andValue:(bikeSpdAntId) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// BikeCadAntId 
- (BOOL)isBikeCadAntIdValid {
	const fit::Field* field = [super getField:5];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt16z)getBikeCadAntId {
    return ([super getFieldUINT16ZValueForField:5 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setBikeCadAntId:(FITUInt16z)bikeCadAntId {
    [super setFieldUINT16ZValueForField:5 andValue:(bikeCadAntId) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// BikeSpdcadAntId 
- (BOOL)isBikeSpdcadAntIdValid {
	const fit::Field* field = [super getField:6];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt16z)getBikeSpdcadAntId {
    return ([super getFieldUINT16ZValueForField:6 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setBikeSpdcadAntId:(FITUInt16z)bikeSpdcadAntId {
    [super setFieldUINT16ZValueForField:6 andValue:(bikeSpdcadAntId) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// BikePowerAntId 
- (BOOL)isBikePowerAntIdValid {
	const fit::Field* field = [super getField:7];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt16z)getBikePowerAntId {
    return ([super getFieldUINT16ZValueForField:7 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setBikePowerAntId:(FITUInt16z)bikePowerAntId {
    [super setFieldUINT16ZValueForField:7 andValue:(bikePowerAntId) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// CustomWheelsize 
- (BOOL)isCustomWheelsizeValid {
	const fit::Field* field = [super getField:8];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getCustomWheelsize {
    return ([super getFieldFLOAT32ValueForField:8 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setCustomWheelsize:(FITFloat32)customWheelsize {
    [super setFieldFLOAT32ValueForField:8 andValue:(customWheelsize) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// AutoWheelsize 
- (BOOL)isAutoWheelsizeValid {
	const fit::Field* field = [super getField:9];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getAutoWheelsize {
    return ([super getFieldFLOAT32ValueForField:9 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setAutoWheelsize:(FITFloat32)autoWheelsize {
    [super setFieldFLOAT32ValueForField:9 andValue:(autoWheelsize) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// BikeWeight 
- (BOOL)isBikeWeightValid {
	const fit::Field* field = [super getField:10];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getBikeWeight {
    return ([super getFieldFLOAT32ValueForField:10 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setBikeWeight:(FITFloat32)bikeWeight {
    [super setFieldFLOAT32ValueForField:10 andValue:(bikeWeight) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// PowerCalFactor 
- (BOOL)isPowerCalFactorValid {
	const fit::Field* field = [super getField:11];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getPowerCalFactor {
    return ([super getFieldFLOAT32ValueForField:11 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setPowerCalFactor:(FITFloat32)powerCalFactor {
    [super setFieldFLOAT32ValueForField:11 andValue:(powerCalFactor) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// AutoWheelCal 
- (BOOL)isAutoWheelCalValid {
	const fit::Field* field = [super getField:12];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getAutoWheelCal {
    return ([super getFieldENUMValueForField:12 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setAutoWheelCal:(FITBool)autoWheelCal {
    [super setFieldENUMValueForField:12 andValue:(autoWheelCal) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// AutoPowerZero 
- (BOOL)isAutoPowerZeroValid {
	const fit::Field* field = [super getField:13];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getAutoPowerZero {
    return ([super getFieldENUMValueForField:13 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setAutoPowerZero:(FITBool)autoPowerZero {
    [super setFieldENUMValueForField:13 andValue:(autoPowerZero) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Id 
- (BOOL)isIdValid {
	const fit::Field* field = [super getField:14];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getId {
    return ([super getFieldUINT8ValueForField:14 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setId:(FITUInt8)id {
    [super setFieldUINT8ValueForField:14 andValue:(id) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// SpdEnabled 
- (BOOL)isSpdEnabledValid {
	const fit::Field* field = [super getField:15];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getSpdEnabled {
    return ([super getFieldENUMValueForField:15 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setSpdEnabled:(FITBool)spdEnabled {
    [super setFieldENUMValueForField:15 andValue:(spdEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// CadEnabled 
- (BOOL)isCadEnabledValid {
	const fit::Field* field = [super getField:16];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getCadEnabled {
    return ([super getFieldENUMValueForField:16 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setCadEnabled:(FITBool)cadEnabled {
    [super setFieldENUMValueForField:16 andValue:(cadEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// SpdcadEnabled 
- (BOOL)isSpdcadEnabledValid {
	const fit::Field* field = [super getField:17];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getSpdcadEnabled {
    return ([super getFieldENUMValueForField:17 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setSpdcadEnabled:(FITBool)spdcadEnabled {
    [super setFieldENUMValueForField:17 andValue:(spdcadEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// PowerEnabled 
- (BOOL)isPowerEnabledValid {
	const fit::Field* field = [super getField:18];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getPowerEnabled {
    return ([super getFieldENUMValueForField:18 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setPowerEnabled:(FITBool)powerEnabled {
    [super setFieldENUMValueForField:18 andValue:(powerEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// CrankLength 
- (BOOL)isCrankLengthValid {
	const fit::Field* field = [super getField:19];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getCrankLength {
    return ([super getFieldFLOAT32ValueForField:19 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setCrankLength:(FITFloat32)crankLength {
    [super setFieldFLOAT32ValueForField:19 andValue:(crankLength) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Enabled 
- (BOOL)isEnabledValid {
	const fit::Field* field = [super getField:20];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getEnabled {
    return ([super getFieldENUMValueForField:20 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setEnabled:(FITBool)enabled {
    [super setFieldENUMValueForField:20 andValue:(enabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// BikeSpdAntIdTransType 
- (BOOL)isBikeSpdAntIdTransTypeValid {
	const fit::Field* field = [super getField:21];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8z)getBikeSpdAntIdTransType {
    return ([super getFieldUINT8ZValueForField:21 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setBikeSpdAntIdTransType:(FITUInt8z)bikeSpdAntIdTransType {
    [super setFieldUINT8ZValueForField:21 andValue:(bikeSpdAntIdTransType) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// BikeCadAntIdTransType 
- (BOOL)isBikeCadAntIdTransTypeValid {
	const fit::Field* field = [super getField:22];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8z)getBikeCadAntIdTransType {
    return ([super getFieldUINT8ZValueForField:22 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setBikeCadAntIdTransType:(FITUInt8z)bikeCadAntIdTransType {
    [super setFieldUINT8ZValueForField:22 andValue:(bikeCadAntIdTransType) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// BikeSpdcadAntIdTransType 
- (BOOL)isBikeSpdcadAntIdTransTypeValid {
	const fit::Field* field = [super getField:23];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8z)getBikeSpdcadAntIdTransType {
    return ([super getFieldUINT8ZValueForField:23 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setBikeSpdcadAntIdTransType:(FITUInt8z)bikeSpdcadAntIdTransType {
    [super setFieldUINT8ZValueForField:23 andValue:(bikeSpdcadAntIdTransType) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// BikePowerAntIdTransType 
- (BOOL)isBikePowerAntIdTransTypeValid {
	const fit::Field* field = [super getField:24];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8z)getBikePowerAntIdTransType {
    return ([super getFieldUINT8ZValueForField:24 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setBikePowerAntIdTransType:(FITUInt8z)bikePowerAntIdTransType {
    [super setFieldUINT8ZValueForField:24 andValue:(bikePowerAntIdTransType) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// OdometerRollover 
- (BOOL)isOdometerRolloverValid {
	const fit::Field* field = [super getField:37];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getOdometerRollover {
    return ([super getFieldUINT8ValueForField:37 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setOdometerRollover:(FITUInt8)odometerRollover {
    [super setFieldUINT8ValueForField:37 andValue:(odometerRollover) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// FrontGearNum 
- (BOOL)isFrontGearNumValid {
	const fit::Field* field = [super getField:38];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8z)getFrontGearNum {
    return ([super getFieldUINT8ZValueForField:38 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setFrontGearNum:(FITUInt8z)frontGearNum {
    [super setFieldUINT8ZValueForField:38 andValue:(frontGearNum) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// FrontGear 
- (uint8_t)numFrontGearValues {
    return [super getFieldNumValuesForField:39 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isFrontGearValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:39];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8z)getFrontGearforIndex:(uint8_t)index {
    return ([super getFieldUINT8ZValueForField:39 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setFrontGear:(FITUInt8z)frontGear forIndex:(uint8_t)index {
    [super setFieldUINT8ZValueForField:39 andValue:(frontGear) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// RearGearNum 
- (BOOL)isRearGearNumValid {
	const fit::Field* field = [super getField:40];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8z)getRearGearNum {
    return ([super getFieldUINT8ZValueForField:40 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setRearGearNum:(FITUInt8z)rearGearNum {
    [super setFieldUINT8ZValueForField:40 andValue:(rearGearNum) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// RearGear 
- (uint8_t)numRearGearValues {
    return [super getFieldNumValuesForField:41 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isRearGearValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:41];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8z)getRearGearforIndex:(uint8_t)index {
    return ([super getFieldUINT8ZValueForField:41 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setRearGear:(FITUInt8z)rearGear forIndex:(uint8_t)index {
    [super setFieldUINT8ZValueForField:41 andValue:(rearGear) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// ShimanoDi2Enabled 
- (BOOL)isShimanoDi2EnabledValid {
	const fit::Field* field = [super getField:44];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getShimanoDi2Enabled {
    return ([super getFieldENUMValueForField:44 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setShimanoDi2Enabled:(FITBool)shimanoDi2Enabled {
    [super setFieldENUMValueForField:44 andValue:(shimanoDi2Enabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

@end
