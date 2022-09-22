// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protocol_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protocol_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protocol_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protocol_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protocol_2eproto;
namespace protocol {
class Request;
class RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
class Responce;
class ResponceDefaultTypeInternal;
extern ResponceDefaultTypeInternal _Responce_default_instance_;
}  // namespace protocol
PROTOBUF_NAMESPACE_OPEN
template<> ::protocol::Request* Arena::CreateMaybeMessage<::protocol::Request>(Arena*);
template<> ::protocol::Responce* Arena::CreateMaybeMessage<::protocol::Responce>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace protocol {

enum Commands : int {
  ADD_WORKER = 0,
  SHOW_WORKERS = 1,
  SHOW_POST = 2,
  SHOW_HEAD = 3,
  SET_POST = 4,
  SET_HEAD = 5,
  DEL_WORKER = 6,
  Commands_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Commands_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Commands_IsValid(int value);
constexpr Commands Commands_MIN = ADD_WORKER;
constexpr Commands Commands_MAX = DEL_WORKER;
constexpr int Commands_ARRAYSIZE = Commands_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Commands_descriptor();
template<typename T>
inline const std::string& Commands_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Commands>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Commands_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Commands_descriptor(), enum_t_value);
}
inline bool Commands_Parse(
    const std::string& name, Commands* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Commands>(
    Commands_descriptor(), name, value);
}
// ===================================================================

class Request PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protocol.Request) */ {
 public:
  inline Request() : Request(nullptr) {};
  virtual ~Request();

  Request(const Request& from);
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline Request& operator=(Request&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Request& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }
  inline void Swap(Request* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Request* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Request* New() const final {
    return CreateMaybeMessage<Request>(nullptr);
  }

  Request* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Request>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Request* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protocol.Request";
  }
  protected:
  explicit Request(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_protocol_2eproto);
    return ::descriptor_table_protocol_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kArgumentsFieldNumber = 2,
    kCommandFieldNumber = 1,
  };
  // repeated string arguments = 2;
  int arguments_size() const;
  private:
  int _internal_arguments_size() const;
  public:
  void clear_arguments();
  const std::string& arguments(int index) const;
  std::string* mutable_arguments(int index);
  void set_arguments(int index, const std::string& value);
  void set_arguments(int index, std::string&& value);
  void set_arguments(int index, const char* value);
  void set_arguments(int index, const char* value, size_t size);
  std::string* add_arguments();
  void add_arguments(const std::string& value);
  void add_arguments(std::string&& value);
  void add_arguments(const char* value);
  void add_arguments(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& arguments() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_arguments();
  private:
  const std::string& _internal_arguments(int index) const;
  std::string* _internal_add_arguments();
  public:

  // .protocol.Commands command = 1;
  void clear_command();
  ::protocol::Commands command() const;
  void set_command(::protocol::Commands value);
  private:
  ::protocol::Commands _internal_command() const;
  void _internal_set_command(::protocol::Commands value);
  public:

  // @@protoc_insertion_point(class_scope:protocol.Request)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> arguments_;
  int command_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protocol_2eproto;
};
// -------------------------------------------------------------------

class Responce PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protocol.Responce) */ {
 public:
  inline Responce() : Responce(nullptr) {};
  virtual ~Responce();

  Responce(const Responce& from);
  Responce(Responce&& from) noexcept
    : Responce() {
    *this = ::std::move(from);
  }

  inline Responce& operator=(const Responce& from) {
    CopyFrom(from);
    return *this;
  }
  inline Responce& operator=(Responce&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Responce& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Responce* internal_default_instance() {
    return reinterpret_cast<const Responce*>(
               &_Responce_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Responce& a, Responce& b) {
    a.Swap(&b);
  }
  inline void Swap(Responce* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Responce* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Responce* New() const final {
    return CreateMaybeMessage<Responce>(nullptr);
  }

  Responce* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Responce>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Responce& from);
  void MergeFrom(const Responce& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Responce* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protocol.Responce";
  }
  protected:
  explicit Responce(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_protocol_2eproto);
    return ::descriptor_table_protocol_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResultFieldNumber = 1,
  };
  // string result = 1;
  void clear_result();
  const std::string& result() const;
  void set_result(const std::string& value);
  void set_result(std::string&& value);
  void set_result(const char* value);
  void set_result(const char* value, size_t size);
  std::string* mutable_result();
  std::string* release_result();
  void set_allocated_result(std::string* result);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_result();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_result(
      std::string* result);
  private:
  const std::string& _internal_result() const;
  void _internal_set_result(const std::string& value);
  std::string* _internal_mutable_result();
  public:

  // @@protoc_insertion_point(class_scope:protocol.Responce)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protocol_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Request

// .protocol.Commands command = 1;
inline void Request::clear_command() {
  command_ = 0;
}
inline ::protocol::Commands Request::_internal_command() const {
  return static_cast< ::protocol::Commands >(command_);
}
inline ::protocol::Commands Request::command() const {
  // @@protoc_insertion_point(field_get:protocol.Request.command)
  return _internal_command();
}
inline void Request::_internal_set_command(::protocol::Commands value) {
  
  command_ = value;
}
inline void Request::set_command(::protocol::Commands value) {
  _internal_set_command(value);
  // @@protoc_insertion_point(field_set:protocol.Request.command)
}

// repeated string arguments = 2;
inline int Request::_internal_arguments_size() const {
  return arguments_.size();
}
inline int Request::arguments_size() const {
  return _internal_arguments_size();
}
inline void Request::clear_arguments() {
  arguments_.Clear();
}
inline std::string* Request::add_arguments() {
  // @@protoc_insertion_point(field_add_mutable:protocol.Request.arguments)
  return _internal_add_arguments();
}
inline const std::string& Request::_internal_arguments(int index) const {
  return arguments_.Get(index);
}
inline const std::string& Request::arguments(int index) const {
  // @@protoc_insertion_point(field_get:protocol.Request.arguments)
  return _internal_arguments(index);
}
inline std::string* Request::mutable_arguments(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.Request.arguments)
  return arguments_.Mutable(index);
}
inline void Request::set_arguments(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:protocol.Request.arguments)
  arguments_.Mutable(index)->assign(value);
}
inline void Request::set_arguments(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:protocol.Request.arguments)
  arguments_.Mutable(index)->assign(std::move(value));
}
inline void Request::set_arguments(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  arguments_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:protocol.Request.arguments)
}
inline void Request::set_arguments(int index, const char* value, size_t size) {
  arguments_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protocol.Request.arguments)
}
inline std::string* Request::_internal_add_arguments() {
  return arguments_.Add();
}
inline void Request::add_arguments(const std::string& value) {
  arguments_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:protocol.Request.arguments)
}
inline void Request::add_arguments(std::string&& value) {
  arguments_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:protocol.Request.arguments)
}
inline void Request::add_arguments(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  arguments_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:protocol.Request.arguments)
}
inline void Request::add_arguments(const char* value, size_t size) {
  arguments_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:protocol.Request.arguments)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Request::arguments() const {
  // @@protoc_insertion_point(field_list:protocol.Request.arguments)
  return arguments_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Request::mutable_arguments() {
  // @@protoc_insertion_point(field_mutable_list:protocol.Request.arguments)
  return &arguments_;
}

// -------------------------------------------------------------------

// Responce

// string result = 1;
inline void Responce::clear_result() {
  result_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Responce::result() const {
  // @@protoc_insertion_point(field_get:protocol.Responce.result)
  return _internal_result();
}
inline void Responce::set_result(const std::string& value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:protocol.Responce.result)
}
inline std::string* Responce::mutable_result() {
  // @@protoc_insertion_point(field_mutable:protocol.Responce.result)
  return _internal_mutable_result();
}
inline const std::string& Responce::_internal_result() const {
  return result_.Get();
}
inline void Responce::_internal_set_result(const std::string& value) {
  
  result_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Responce::set_result(std::string&& value) {
  
  result_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:protocol.Responce.result)
}
inline void Responce::set_result(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  result_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:protocol.Responce.result)
}
inline void Responce::set_result(const char* value,
    size_t size) {
  
  result_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:protocol.Responce.result)
}
inline std::string* Responce::_internal_mutable_result() {
  
  return result_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Responce::release_result() {
  // @@protoc_insertion_point(field_release:protocol.Responce.result)
  return result_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Responce::set_allocated_result(std::string* result) {
  if (result != nullptr) {
    
  } else {
    
  }
  result_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), result,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:protocol.Responce.result)
}
inline std::string* Responce::unsafe_arena_release_result() {
  // @@protoc_insertion_point(field_unsafe_arena_release:protocol.Responce.result)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return result_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Responce::unsafe_arena_set_allocated_result(
    std::string* result) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (result != nullptr) {
    
  } else {
    
  }
  result_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      result, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:protocol.Responce.result)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::protocol::Commands> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protocol::Commands>() {
  return ::protocol::Commands_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protocol_2eproto
