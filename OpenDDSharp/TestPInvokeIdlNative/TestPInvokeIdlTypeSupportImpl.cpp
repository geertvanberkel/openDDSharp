/* Generated by E:\PROJECTS\OPENDDS\ext\OpenDDS\bin\opendds_idl version 3.13 (ACE version 6.2a_p15) running on input file TestPInvokeIdl.idl */
#include "TestPInvokeIdlTypeSupportImpl.h"

#include <cstring>
#include <stdexcept>
#include "dds/CorbaSeq/LongSeqTypeSupportImpl.h"
#include "dds/DCPS/BuiltInTopicUtils.h"
#include "dds/DCPS/ContentFilteredTopicImpl.h"
#include "dds/DCPS/DataReaderImpl_T.h"
#include "dds/DCPS/DataWriterImpl_T.h"
#include "dds/DCPS/FilterEvaluator.h"
#include "dds/DCPS/MultiTopicDataReader_T.h"
#include "dds/DCPS/PoolAllocator.h"
#include "dds/DCPS/PublicationInstance.h"
#include "dds/DCPS/PublisherImpl.h"
#include "dds/DCPS/Qos_Helper.h"
#include "dds/DCPS/RakeData.h"
#include "dds/DCPS/RakeResults_T.h"
#include "dds/DCPS/ReceivedDataElementList.h"
#include "dds/DCPS/Registered_Data_Types.h"
#include "dds/DCPS/Service_Participant.h"
#include "dds/DCPS/SubscriberImpl.h"
#include "dds/DCPS/Util.h"
#include "dds/DCPS/debug.h"
#include "dds/DdsDcpsDomainC.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: BooleanSeq */


/* End TYPEDEF: BooleanSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: CharSeq */


/* End TYPEDEF: CharSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: DoubleSeq */


/* End TYPEDEF: DoubleSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: FloatSeq */


/* End TYPEDEF: FloatSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: LongDoubleSeq */


/* End TYPEDEF: LongDoubleSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: LongSeq */


/* End TYPEDEF: LongSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: OctetSeq */


/* End TYPEDEF: OctetSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: ShortSeq */


/* End TYPEDEF: ShortSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: StringSeq */


/* End TYPEDEF: StringSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: ULongSeq */


/* End TYPEDEF: ULongSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: UShortSeq */


/* End TYPEDEF: UShortSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: WCharSeq */


/* End TYPEDEF: WCharSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: WStringSeq */


/* End TYPEDEF: WStringSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: LongLongSeq */


/* End TYPEDEF: LongLongSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: ULongLongSeq */


/* End TYPEDEF: ULongLongSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin INTERFACE: Current */


/* End INTERFACE: Current */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: PolicyType */


/* End TYPEDEF: PolicyType */


/* Begin INTERFACE-FWD: Policy */


/* End INTERFACE-FWD: Policy */


/* Begin TYPEDEF: PolicyList */


/* End TYPEDEF: PolicyList */


/* Begin TYPEDEF: PolicyTypeSeq */


/* End TYPEDEF: PolicyTypeSeq */


/* Begin INTERFACE-FWD: PolicyCurrent */


/* End INTERFACE-FWD: PolicyCurrent */


/* Begin ENUM: SetOverrideType */


/* End ENUM: SetOverrideType */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: PolicyErrorCode */


/* End TYPEDEF: PolicyErrorCode */


/* Begin CONST: BAD_POLICY */


/* End CONST: BAD_POLICY */


/* Begin CONST: UNSUPPORTED_POLICY */


/* End CONST: UNSUPPORTED_POLICY */


/* Begin CONST: BAD_POLICY_TYPE */


/* End CONST: BAD_POLICY_TYPE */


/* Begin CONST: BAD_POLICY_VALUE */


/* End CONST: BAD_POLICY_VALUE */


/* Begin CONST: UNSUPPORTED_POLICY_VALUE */


/* End CONST: UNSUPPORTED_POLICY_VALUE */


/* Begin INTERFACE: Policy */


/* End INTERFACE: Policy */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin INTERFACE: PolicyManager */


/* End INTERFACE: PolicyManager */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin INTERFACE: PolicyCurrent */


/* End INTERFACE: PolicyCurrent */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: ServiceType */


/* End TYPEDEF: ServiceType */


/* Begin TYPEDEF: ServiceOption */


/* End TYPEDEF: ServiceOption */


/* Begin TYPEDEF: ServiceDetailType */


/* End TYPEDEF: ServiceDetailType */


/* Begin TYPEDEF: ServiceDetailData */


/* End TYPEDEF: ServiceDetailData */


/* Begin TYPEDEF: ServiceOptionSeq */


/* End TYPEDEF: ServiceOptionSeq */


/* Begin CONST: Security */


/* End CONST: Security */


/* Begin STRUCT: ServiceDetail */


/* End STRUCT: ServiceDetail */


/* Begin TYPEDEF: ServiceDetailSeq */


/* End TYPEDEF: ServiceDetailSeq */


/* Begin STRUCT: ServiceInformation */


/* End STRUCT: ServiceInformation */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin ENUM: ParameterMode */


/* End ENUM: ParameterMode */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: ORBid */


/* End TYPEDEF: ORBid */


/* Begin TYPEDEF: Flags */


/* End TYPEDEF: Flags */


/* Begin TYPEDEF: Identifier */


/* End TYPEDEF: Identifier */


/* Begin TYPEDEF: RepositoryId */


/* End TYPEDEF: RepositoryId */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin ENUM: TCKind */


/* End ENUM: TCKind */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin STRUCT: NamedValue */


/* End STRUCT: NamedValue */


/* Begin ENUM: exception_type */


/* End ENUM: exception_type */


/* Begin NATIVE: ValueFactory */


/* End NATIVE: ValueFactory */

/* End MODULE: CORBA */


/* Begin MODULE: Test */



/* Begin TYPEDEF: LongList */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const Test::LongList& seq, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(seq);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  find_size_ulong(size, padding);
  if (seq.length() == 0) {
    return;
  }
  size += seq.length() * gen_max_marshaled_size(CORBA::Long());
}

bool operator<<(Serializer& strm, const Test::LongList& seq)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(seq);
  const CORBA::ULong length = seq.length();
  if (!(strm << length)) {
    return false;
  }
  if (length == 0) {
    return true;
  }
  return strm.write_long_array(seq.get_buffer(), length);
}

bool operator>>(Serializer& strm, Test::LongList& seq)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(seq);
  CORBA::ULong length;
  if (!(strm >> length)) {
    return false;
  }
  seq.length(length);
  if (length == 0) {
    return true;
  }
  return strm.read_long_array(seq.get_buffer(), length);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

bool gen_skip_over(Serializer& ser, Test::LongList*)
{
  ACE_UNUSED_ARG(ser);
  ACE_CDR::ULong length;
  if (!(ser >> length)) return false;
  return ser.skip(static_cast<ACE_UINT16>(length), 4);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: LongList */


/* Begin TYPEDEF: StringList */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const Test::StringList& seq, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(seq);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  find_size_ulong(size, padding);
  if (seq.length() == 0) {
    return;
  }
  for (CORBA::ULong i = 0; i < seq.length(); ++i) {
    find_size_ulong(size, padding);
    if (seq[i]) {
      size += ACE_OS::strlen(seq[i]) + 1;
    }
  }
}

bool operator<<(Serializer& strm, const Test::StringList& seq)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(seq);
  const CORBA::ULong length = seq.length();
  if (!(strm << length)) {
    return false;
  }
  if (length == 0) {
    return true;
  }
  for (CORBA::ULong i = 0; i < length; ++i) {
    if (!(strm << seq[i])) {
      return false;
    }
  }
  return true;
}

bool operator>>(Serializer& strm, Test::StringList& seq)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(seq);
  CORBA::ULong length;
  if (!(strm >> length)) {
    return false;
  }
  seq.length(length);
  for (CORBA::ULong i = 0; i < length; ++i) {
    if (!(strm >> seq.get_buffer()[i])) {
      return false;
    }
  }
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

bool gen_skip_over(Serializer& ser, Test::StringList*)
{
  ACE_UNUSED_ARG(ser);
  ACE_CDR::ULong length;
  if (!(ser >> length)) return false;
  for (ACE_CDR::ULong i = 0; i < length; ++i) {
    ACE_CDR::ULong strlength;
    if (!(ser >> strlength)) return false;
    if (!ser.skip(static_cast<ACE_UINT16>(strlength))) return false;
  }
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: StringList */


/* Begin TYPEDEF: ArrayLong */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const Test::ArrayLong_forany& arr, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(arr);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  if ((size + padding) % 4) {
    padding += 4 - ((size + padding) % 4);
  }
  size += 5 * gen_max_marshaled_size(CORBA::Long());
}

bool operator<<(Serializer& strm, const Test::ArrayLong_forany& arr)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(arr);
  return strm.write_long_array(arr.in(), 5);
}

bool operator>>(Serializer& strm, Test::ArrayLong_forany& arr)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(arr);
  return strm.read_long_array(arr.out(), 5);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

bool gen_skip_over(Serializer& ser, Test::ArrayLong_forany*)
{
  ACE_UNUSED_ARG(ser);
  return ser.skip(static_cast<ACE_UINT16>(5), 4);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: ArrayLong */


/* Begin TYPEDEF: ArrayString */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const Test::ArrayString_forany& arr, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(arr);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  for (CORBA::ULong i0 = 0; i0 < 10; ++i0) {
    find_size_ulong(size, padding);
    size += ACE_OS::strlen(arr[i0].in()) + 1;
  }
}

bool operator<<(Serializer& strm, const Test::ArrayString_forany& arr)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(arr);
  for (CORBA::ULong i0 = 0; i0 < 10; ++i0) {
    if (!(strm << arr[i0].in())) {
      return false;
    }
  }
  return true;
}

bool operator>>(Serializer& strm, Test::ArrayString_forany& arr)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(arr);
  for (CORBA::ULong i0 = 0; i0 < 10; ++i0) {
    if (!(strm >> arr[i0].out())) {
      return false;
    }
  }
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

bool gen_skip_over(Serializer& ser, Test::ArrayString_forany*)
{
  ACE_UNUSED_ARG(ser);
  for (ACE_CDR::ULong i = 0; i < 10; ++i) {
    ACE_CDR::ULong strlength;
    if (!(ser >> strlength)) return false;
    if (!ser.skip(static_cast<ACE_UINT16>(strlength))) return false;
  }
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: ArrayString */


/* Begin TYPEDEF: ArrayWString */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const Test::ArrayWString_forany& arr, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(arr);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  for (CORBA::ULong i0 = 0; i0 < 4; ++i0) {
    find_size_ulong(size, padding);
    size += ACE_OS::strlen(arr[i0].in()) * OpenDDS::DCPS::Serializer::WCHAR_SIZE;
  }
}

bool operator<<(Serializer& strm, const Test::ArrayWString_forany& arr)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(arr);
  for (CORBA::ULong i0 = 0; i0 < 4; ++i0) {
    if (!(strm << arr[i0].in())) {
      return false;
    }
  }
  return true;
}

bool operator>>(Serializer& strm, Test::ArrayWString_forany& arr)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(arr);
  for (CORBA::ULong i0 = 0; i0 < 4; ++i0) {
    if (!(strm >> arr[i0].out())) {
      return false;
    }
  }
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

bool gen_skip_over(Serializer& ser, Test::ArrayWString_forany*)
{
  ACE_UNUSED_ARG(ser);
  for (ACE_CDR::ULong i = 0; i < 4; ++i) {
    ACE_CDR::ULong strlength;
    if (!(ser >> strlength)) return false;
    if (!ser.skip(static_cast<ACE_UINT16>(strlength))) return false;
  }
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: ArrayWString */


/* Begin STRUCT: BasicTestStruct */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const Test::BasicTestStruct& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  Test::ArrayLong_forany stru_LongArray(const_cast<Test::ArrayLong_slice*>(stru.LongArray));
  Test::ArrayString_forany stru_StringArray(const_cast<Test::ArrayString_slice*>(stru.StringArray));
  Test::ArrayWString_forany stru_WStringArray(const_cast<Test::ArrayWString_slice*>(stru.WStringArray));
  if ((size + padding) % 4) {
    padding += 4 - ((size + padding) % 4);
  }
  size += gen_max_marshaled_size(stru.Id);
  find_size_ulong(size, padding);
  size += ACE_OS::strlen(stru.Message.in()) + 1;
  find_size_ulong(size, padding);
  size += ACE_OS::strlen(stru.WMessage.in()) * OpenDDS::DCPS::Serializer::WCHAR_SIZE;
  gen_find_size(stru.LongSequence, size, padding);
  gen_find_size(stru.StringSequence, size, padding);
  gen_find_size(stru_LongArray, size, padding);
  gen_find_size(stru_StringArray, size, padding);
  gen_find_size(stru_WStringArray, size, padding);
}

bool operator<<(Serializer& strm, const Test::BasicTestStruct& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  Test::ArrayLong_forany stru_LongArray(const_cast<Test::ArrayLong_slice*>(stru.LongArray));
  Test::ArrayString_forany stru_StringArray(const_cast<Test::ArrayString_slice*>(stru.StringArray));
  Test::ArrayWString_forany stru_WStringArray(const_cast<Test::ArrayWString_slice*>(stru.WStringArray));
  return (strm << stru.Id)
    && (strm << stru.Message.in())
    && (strm << stru.WMessage.in())
    && (strm << stru.LongSequence)
    && (strm << stru.StringSequence)
    && (strm << stru_LongArray)
    && (strm << stru_StringArray)
    && (strm << stru_WStringArray);
}

bool operator>>(Serializer& strm, Test::BasicTestStruct& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  Test::ArrayLong_forany stru_LongArray(const_cast<Test::ArrayLong_slice*>(stru.LongArray));
  Test::ArrayString_forany stru_StringArray(const_cast<Test::ArrayString_slice*>(stru.StringArray));
  Test::ArrayWString_forany stru_WStringArray(const_cast<Test::ArrayWString_slice*>(stru.WStringArray));
  return (strm >> stru.Id)
    && (strm >> stru.Message.out())
    && (strm >> stru.WMessage.out())
    && (strm >> stru.LongSequence)
    && (strm >> stru.StringSequence)
    && (strm >> stru_LongArray)
    && (strm >> stru_StringArray)
    && (strm >> stru_WStringArray);
}

size_t gen_max_marshaled_size(const Test::BasicTestStruct& stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

size_t gen_max_marshaled_size(KeyOnly<const Test::BasicTestStruct> stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

void gen_find_size(KeyOnly<const Test::BasicTestStruct> stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
}

bool operator<<(Serializer& strm, KeyOnly<const Test::BasicTestStruct> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

bool operator>>(Serializer& strm, KeyOnly<Test::BasicTestStruct> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Test {
::DDS::DataWriter_ptr BasicTestStructTypeSupportImpl::create_datawriter()
{
  typedef OpenDDS::DCPS::DataWriterImpl_T<BasicTestStruct> DataWriterImplType;
  ::DDS::DataWriter_ptr writer_impl = ::DDS::DataWriter::_nil();
  ACE_NEW_NORETURN(writer_impl,
                   DataWriterImplType());
  return writer_impl;
}

::DDS::DataReader_ptr BasicTestStructTypeSupportImpl::create_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<BasicTestStruct> DataReaderImplType;
  ::DDS::DataReader_ptr reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(reader_impl,
                   DataReaderImplType());
  return reader_impl;
}

#ifndef OPENDDS_NO_MULTI_TOPIC
::DDS::DataReader_ptr BasicTestStructTypeSupportImpl::create_multitopic_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<BasicTestStruct> DataReaderImplType;
  typedef OpenDDS::DCPS::MultiTopicDataReader_T<BasicTestStruct, DataReaderImplType> MultiTopicDataReaderImplType;
  ::DDS::DataReader_ptr multitopic_reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(multitopic_reader_impl,
                   MultiTopicDataReaderImplType());
  return multitopic_reader_impl;
}
#endif /* !OPENDDS_NO_MULTI_TOPIC */

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
const OpenDDS::DCPS::MetaStruct& BasicTestStructTypeSupportImpl::getMetaStructForType()
{
  return OpenDDS::DCPS::getMetaStruct<BasicTestStruct>();
}
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */

bool BasicTestStructTypeSupportImpl::has_dcps_key()
{
  return TraitsType::gen_has_key ();
}

const char* BasicTestStructTypeSupportImpl::default_type_name() const
{
  return TraitsType::type_name();
}

BasicTestStructTypeSupport::_ptr_type BasicTestStructTypeSupportImpl::_narrow(CORBA::Object_ptr obj)
{
  return TypeSupportType::_narrow(obj);
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<Test::BasicTestStruct> : MetaStruct {
  typedef Test::BasicTestStruct T;

#ifndef OPENDDS_NO_MULTI_TOPIC
  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }

  size_t numDcpsKeys() const { return 0; }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  Value getValue(const void* stru, const char* field) const
  {
    const Test::BasicTestStruct& typed = *static_cast<const Test::BasicTestStruct*>(stru);
    if (std::strcmp(field, "Id") == 0) {
      return typed.Id;
    }
    if (std::strcmp(field, "Message") == 0) {
      return typed.Message.in();
    }
    if (std::strcmp(field, "WMessage") == 0) {
      return typed.WMessage.in();
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Test::BasicTestStruct)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strcmp(field, "Id") == 0) {
      ACE_CDR::Long val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'Id' could not be deserialized");
      }
      return val;
    } else {
      if (!ser.skip(1, 4)) {
        throw std::runtime_error("Field 'Id' could not be skipped");
      }
    }
    if (std::strcmp(field, "Message") == 0) {
      TAO::String_Manager val;
      if (!(ser >> val.out())) {
        throw std::runtime_error("Field 'Message' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(ser >> len)) {
        throw std::runtime_error("String 'Message' length could not be deserialized");
      }
      if (!ser.skip(static_cast<ACE_UINT16>(len))) {
        throw std::runtime_error("String 'Message' contents could not be skipped");
      }
    }
    if (std::strcmp(field, "WMessage") == 0) {
      TAO::WString_Manager val;
      if (!(ser >> val.out())) {
        throw std::runtime_error("Field 'WMessage' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(ser >> len)) {
        throw std::runtime_error("String 'WMessage' length could not be deserialized");
      }
      if (!ser.skip(static_cast<ACE_UINT16>(len))) {
        throw std::runtime_error("String 'WMessage' contents could not be skipped");
      }
    }
    if (!gen_skip_over(ser, static_cast<Test::LongList*>(0))) {
      throw std::runtime_error("Field " + OPENDDS_STRING(field) + " could not be skipped");
    }
    if (!gen_skip_over(ser, static_cast<Test::StringList*>(0))) {
      throw std::runtime_error("Field " + OPENDDS_STRING(field) + " could not be skipped");
    }
    if (!gen_skip_over(ser, static_cast<Test::ArrayLong_forany*>(0))) {
      throw std::runtime_error("Field " + OPENDDS_STRING(field) + " could not be skipped");
    }
    if (!gen_skip_over(ser, static_cast<Test::ArrayString_forany*>(0))) {
      throw std::runtime_error("Field " + OPENDDS_STRING(field) + " could not be skipped");
    }
    if (!gen_skip_over(ser, static_cast<Test::ArrayWString_forany*>(0))) {
      throw std::runtime_error("Field " + OPENDDS_STRING(field) + " could not be skipped");
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct Test::BasicTestStruct");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strcmp(field, "Id") == 0) {
      return make_field_cmp(&T::Id, next);
    }
    if (std::strcmp(field, "Message") == 0) {
      return make_field_cmp(&T::Message, next);
    }
    if (std::strcmp(field, "WMessage") == 0) {
      return make_field_cmp(&T::WMessage, next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Test::BasicTestStruct)");
  }

#ifndef OPENDDS_NO_MULTI_TOPIC
  const char** getFieldNames() const
  {
    static const char* names[] = {"Id", "Message", "WMessage", "LongSequence", "StringSequence", "LongArray", "StringArray", "WStringArray", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "Id") == 0) {
      return &static_cast<const T*>(stru)->Id;
    }
    if (std::strcmp(field, "Message") == 0) {
      return &static_cast<const T*>(stru)->Message;
    }
    if (std::strcmp(field, "WMessage") == 0) {
      return &static_cast<const T*>(stru)->WMessage;
    }
    if (std::strcmp(field, "LongSequence") == 0) {
      return &static_cast<const T*>(stru)->LongSequence;
    }
    if (std::strcmp(field, "StringSequence") == 0) {
      return &static_cast<const T*>(stru)->StringSequence;
    }
    if (std::strcmp(field, "LongArray") == 0) {
      return &static_cast<const T*>(stru)->LongArray;
    }
    if (std::strcmp(field, "StringArray") == 0) {
      return &static_cast<const T*>(stru)->StringArray;
    }
    if (std::strcmp(field, "WStringArray") == 0) {
      return &static_cast<const T*>(stru)->WStringArray;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Test::BasicTestStruct)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "Id") == 0) {
      static_cast<T*>(lhs)->Id = *static_cast<const CORBA::Long*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "Message") == 0) {
      static_cast<T*>(lhs)->Message = *static_cast<const TAO::String_Manager*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "WMessage") == 0) {
      static_cast<T*>(lhs)->WMessage = *static_cast<const TAO::WString_Manager*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "LongSequence") == 0) {
      static_cast<T*>(lhs)->LongSequence = *static_cast<const Test::LongList*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "StringSequence") == 0) {
      static_cast<T*>(lhs)->StringSequence = *static_cast<const Test::StringList*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "LongArray") == 0) {
      Test::ArrayLong* lhsArr = &static_cast<T*>(lhs)->LongArray;
      const Test::ArrayLong* rhsArr = static_cast<const Test::ArrayLong*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      for (CORBA::ULong i0 = 0; i0 < 5; ++i0) {
        (*lhsArr)[i0] = (*rhsArr)[i0];
      }
      return;
    }
    if (std::strcmp(field, "StringArray") == 0) {
      Test::ArrayString* lhsArr = &static_cast<T*>(lhs)->StringArray;
      const Test::ArrayString* rhsArr = static_cast<const Test::ArrayString*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      for (CORBA::ULong i0 = 0; i0 < 10; ++i0) {
        (*lhsArr)[i0] = (*rhsArr)[i0];
      }
      return;
    }
    if (std::strcmp(field, "WStringArray") == 0) {
      Test::ArrayWString* lhsArr = &static_cast<T*>(lhs)->WStringArray;
      const Test::ArrayWString* rhsArr = static_cast<const Test::ArrayWString*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      for (CORBA::ULong i0 = 0; i0 < 4; ++i0) {
        (*lhsArr)[i0] = (*rhsArr)[i0];
      }
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Test::BasicTestStruct)");
  }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    if (std::strcmp(field, "Id") == 0) {
      return static_cast<const T*>(lhs)->Id == static_cast<const T*>(rhs)->Id;
    }
    if (std::strcmp(field, "Message") == 0) {
      return 0 == ACE_OS::strcmp(static_cast<const T*>(lhs)->Message.in(), static_cast<const T*>(rhs)->Message.in());
    }
    if (std::strcmp(field, "WMessage") == 0) {
      return 0 == ACE_OS::strcmp(static_cast<const T*>(lhs)->WMessage.in(), static_cast<const T*>(rhs)->WMessage.in());
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Test::BasicTestStruct)");
  }
};

template<>
const MetaStruct& getMetaStruct<Test::BasicTestStruct>()
{
  static MetaStructImpl<Test::BasicTestStruct> msi;
  return msi;
}

bool gen_skip_over(Serializer& ser, Test::BasicTestStruct*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<Test::BasicTestStruct>().getValue(ser, "");
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: BasicTestStruct */

/* End MODULE: Test */
