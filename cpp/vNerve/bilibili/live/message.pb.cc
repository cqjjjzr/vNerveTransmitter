// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vNerve/bilibili/live/message.proto

#include "vNerve/bilibili/live/message.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_vNerve_2fbilibili_2flive_2froom_5fmessage_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<7> scc_info_RoomMessage_vNerve_2fbilibili_2flive_2froom_5fmessage_2eproto;
namespace vNerve {
namespace bilibili {
namespace live {
class MessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Message> _instance;
  const ::vNerve::bilibili::live::RoomMessage* room_message_;
} _Message_default_instance_;
}  // namespace live
}  // namespace bilibili
}  // namespace vNerve
static void InitDefaultsscc_info_Message_vNerve_2fbilibili_2flive_2fmessage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::vNerve::bilibili::live::_Message_default_instance_;
    new (ptr) ::vNerve::bilibili::live::Message();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::vNerve::bilibili::live::Message::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Message_vNerve_2fbilibili_2flive_2fmessage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Message_vNerve_2fbilibili_2flive_2fmessage_2eproto}, {
      &scc_info_RoomMessage_vNerve_2fbilibili_2flive_2froom_5fmessage_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_vNerve_2fbilibili_2flive_2fmessage_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_vNerve_2fbilibili_2flive_2fmessage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_vNerve_2fbilibili_2flive_2fmessage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_vNerve_2fbilibili_2flive_2fmessage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::vNerve::bilibili::live::Message, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::vNerve::bilibili::live::Message, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::vNerve::bilibili::live::Message, timestamp_),
  offsetof(::vNerve::bilibili::live::MessageDefaultTypeInternal, room_message_),
  PROTOBUF_FIELD_OFFSET(::vNerve::bilibili::live::Message, payload_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::vNerve::bilibili::live::Message)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::vNerve::bilibili::live::_Message_default_instance_),
};

const char descriptor_table_protodef_vNerve_2fbilibili_2flive_2fmessage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\"vNerve/bilibili/live/message.proto\022\024vN"
  "erve.bilibili.live\032\'vNerve/bilibili/live"
  "/room_message.proto\"b\n\007Message\022\021\n\ttimest"
  "amp\030\001 \001(\004\0229\n\014room_message\030\002 \001(\0132!.vNerve"
  ".bilibili.live.RoomMessageH\000B\t\n\007payloadb"
  "\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_vNerve_2fbilibili_2flive_2fmessage_2eproto_deps[1] = {
  &::descriptor_table_vNerve_2fbilibili_2flive_2froom_5fmessage_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_vNerve_2fbilibili_2flive_2fmessage_2eproto_sccs[1] = {
  &scc_info_Message_vNerve_2fbilibili_2flive_2fmessage_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_vNerve_2fbilibili_2flive_2fmessage_2eproto_once;
static bool descriptor_table_vNerve_2fbilibili_2flive_2fmessage_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_vNerve_2fbilibili_2flive_2fmessage_2eproto = {
  &descriptor_table_vNerve_2fbilibili_2flive_2fmessage_2eproto_initialized, descriptor_table_protodef_vNerve_2fbilibili_2flive_2fmessage_2eproto, "vNerve/bilibili/live/message.proto", 207,
  &descriptor_table_vNerve_2fbilibili_2flive_2fmessage_2eproto_once, descriptor_table_vNerve_2fbilibili_2flive_2fmessage_2eproto_sccs, descriptor_table_vNerve_2fbilibili_2flive_2fmessage_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_vNerve_2fbilibili_2flive_2fmessage_2eproto::offsets,
  file_level_metadata_vNerve_2fbilibili_2flive_2fmessage_2eproto, 1, file_level_enum_descriptors_vNerve_2fbilibili_2flive_2fmessage_2eproto, file_level_service_descriptors_vNerve_2fbilibili_2flive_2fmessage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_vNerve_2fbilibili_2flive_2fmessage_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_vNerve_2fbilibili_2flive_2fmessage_2eproto), true);
namespace vNerve {
namespace bilibili {
namespace live {

// ===================================================================

void Message::InitAsDefaultInstance() {
  ::vNerve::bilibili::live::_Message_default_instance_.room_message_ = const_cast< ::vNerve::bilibili::live::RoomMessage*>(
      ::vNerve::bilibili::live::RoomMessage::internal_default_instance());
}
class Message::_Internal {
 public:
  static const ::vNerve::bilibili::live::RoomMessage& room_message(const Message* msg);
};

const ::vNerve::bilibili::live::RoomMessage&
Message::_Internal::room_message(const Message* msg) {
  return *msg->payload_.room_message_;
}
void Message::set_allocated_room_message(::vNerve::bilibili::live::RoomMessage* room_message) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_payload();
  if (room_message) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      room_message = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, room_message, submessage_arena);
    }
    set_has_room_message();
    payload_.room_message_ = room_message;
  }
  // @@protoc_insertion_point(field_set_allocated:vNerve.bilibili.live.Message.room_message)
}
void Message::clear_room_message() {
  if (_internal_has_room_message()) {
    delete payload_.room_message_;
    clear_has_payload();
  }
}
Message::Message()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:vNerve.bilibili.live.Message)
}
Message::Message(const Message& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  timestamp_ = from.timestamp_;
  clear_has_payload();
  switch (from.payload_case()) {
    case kRoomMessage: {
      _internal_mutable_room_message()->::vNerve::bilibili::live::RoomMessage::MergeFrom(from._internal_room_message());
      break;
    }
    case PAYLOAD_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:vNerve.bilibili.live.Message)
}

void Message::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Message_vNerve_2fbilibili_2flive_2fmessage_2eproto.base);
  timestamp_ = PROTOBUF_ULONGLONG(0);
  clear_has_payload();
}

Message::~Message() {
  // @@protoc_insertion_point(destructor:vNerve.bilibili.live.Message)
  SharedDtor();
}

void Message::SharedDtor() {
  if (has_payload()) {
    clear_payload();
  }
}

void Message::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Message& Message::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Message_vNerve_2fbilibili_2flive_2fmessage_2eproto.base);
  return *internal_default_instance();
}


void Message::clear_payload() {
// @@protoc_insertion_point(one_of_clear_start:vNerve.bilibili.live.Message)
  switch (payload_case()) {
    case kRoomMessage: {
      delete payload_.room_message_;
      break;
    }
    case PAYLOAD_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = PAYLOAD_NOT_SET;
}


void Message::Clear() {
// @@protoc_insertion_point(message_clear_start:vNerve.bilibili.live.Message)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  timestamp_ = PROTOBUF_ULONGLONG(0);
  clear_payload();
  _internal_metadata_.Clear();
}

const char* Message::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint64 timestamp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .vNerve.bilibili.live.RoomMessage room_message = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_room_message(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Message::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:vNerve.bilibili.live.Message)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 timestamp = 1;
  if (this->timestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_timestamp(), target);
  }

  // .vNerve.bilibili.live.RoomMessage room_message = 2;
  if (_internal_has_room_message()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::room_message(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:vNerve.bilibili.live.Message)
  return target;
}

size_t Message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:vNerve.bilibili.live.Message)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint64 timestamp = 1;
  if (this->timestamp() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_timestamp());
  }

  switch (payload_case()) {
    // .vNerve.bilibili.live.RoomMessage room_message = 2;
    case kRoomMessage: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *payload_.room_message_);
      break;
    }
    case PAYLOAD_NOT_SET: {
      break;
    }
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Message::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:vNerve.bilibili.live.Message)
  GOOGLE_DCHECK_NE(&from, this);
  const Message* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Message>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:vNerve.bilibili.live.Message)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:vNerve.bilibili.live.Message)
    MergeFrom(*source);
  }
}

void Message::MergeFrom(const Message& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:vNerve.bilibili.live.Message)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.timestamp() != 0) {
    _internal_set_timestamp(from._internal_timestamp());
  }
  switch (from.payload_case()) {
    case kRoomMessage: {
      _internal_mutable_room_message()->::vNerve::bilibili::live::RoomMessage::MergeFrom(from._internal_room_message());
      break;
    }
    case PAYLOAD_NOT_SET: {
      break;
    }
  }
}

void Message::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:vNerve.bilibili.live.Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Message::CopyFrom(const Message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:vNerve.bilibili.live.Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Message::IsInitialized() const {
  return true;
}

void Message::InternalSwap(Message* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(timestamp_, other->timestamp_);
  swap(payload_, other->payload_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata Message::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace live
}  // namespace bilibili
}  // namespace vNerve
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::vNerve::bilibili::live::Message* Arena::CreateMaybeMessage< ::vNerve::bilibili::live::Message >(Arena* arena) {
  return Arena::CreateInternal< ::vNerve::bilibili::live::Message >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
