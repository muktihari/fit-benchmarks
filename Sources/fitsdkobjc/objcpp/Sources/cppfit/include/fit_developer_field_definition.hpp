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


#if !defined(FIT_DEVELOPER_FIELD_DEFINITION_HPP)
#define FIT_DEVELOPER_FIELD_DEFINITION_HPP

#include <iosfwd>
#include "fit.hpp"
#include "fit_field_description_mesg.hpp"
#include "fit_developer_data_id_mesg.hpp"

namespace fit
{
class DeveloperField;

class DeveloperFieldDefinition
{
public:
    DeveloperFieldDefinition();
    DeveloperFieldDefinition(const DeveloperFieldDefinition& other);
    DeveloperFieldDefinition(FIT_UINT8 fieldNum, FIT_UINT8 size, FIT_UINT8 developerDataIndex);
    DeveloperFieldDefinition(const FieldDescriptionMesg& desc, const DeveloperDataIdMesg& developer, FIT_UINT8 size);
    explicit DeveloperFieldDefinition(const DeveloperField& field);
    virtual ~DeveloperFieldDefinition();

    FIT_BOOL IsDefined() const;
    FIT_UINT8 GetNum() const;
    FIT_UINT8 GetSize() const;
    FIT_UINT8 GetType() const;
    FIT_UINT8 GetDeveloperDataIndex() const;
    const FieldDescriptionMesg& GetDescription() const;
    const DeveloperDataIdMesg& GetDeveloper() const;

    FIT_BOOL operator==(const DeveloperFieldDefinition& field) const;
    FIT_BOOL operator!=(const DeveloperFieldDefinition& field) const;
    DeveloperFieldDefinition& operator=(const DeveloperFieldDefinition& other);
    FIT_UINT8 Write(std::ostream &file) const;

private:
    FIT_UINT8 num;
    FIT_UINT8 size;
    FIT_UINT8 developerDataIndex;

    FieldDescriptionMesg* mesg;
    DeveloperDataIdMesg* developer;
};

} // namespace fit

#endif // defined(FIT_FIELD_DEFINITION_HPP)
