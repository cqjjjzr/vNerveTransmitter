// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: vNerve/bilibili/live/message.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace VNerve.Bilibili.Live {

  /// <summary>Holder for reflection information generated from vNerve/bilibili/live/message.proto</summary>
  public static partial class MessageReflection {

    #region Descriptor
    /// <summary>File descriptor for vNerve/bilibili/live/message.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static MessageReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CiJ2TmVydmUvYmlsaWJpbGkvbGl2ZS9tZXNzYWdlLnByb3RvEhR2TmVydmUu",
            "YmlsaWJpbGkubGl2ZRondk5lcnZlL2JpbGliaWxpL2xpdmUvcm9vbV9tZXNz",
            "YWdlLnByb3RvImIKB01lc3NhZ2USEQoJdGltZXN0YW1wGAEgASgEEjkKDHJv",
            "b21fbWVzc2FnZRgCIAEoCzIhLnZOZXJ2ZS5iaWxpYmlsaS5saXZlLlJvb21N",
            "ZXNzYWdlSABCCQoHcGF5bG9hZEID+AEBYgZwcm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::VNerve.Bilibili.Live.RoomMessageReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::VNerve.Bilibili.Live.Message), global::VNerve.Bilibili.Live.Message.Parser, new[]{ "Timestamp", "RoomMessage" }, new[]{ "Payload" }, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class Message : pb::IMessage<Message> {
    private static readonly pb::MessageParser<Message> _parser = new pb::MessageParser<Message>(() => new Message());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<Message> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::VNerve.Bilibili.Live.MessageReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Message() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Message(Message other) : this() {
      timestamp_ = other.timestamp_;
      switch (other.PayloadCase) {
        case PayloadOneofCase.RoomMessage:
          RoomMessage = other.RoomMessage.Clone();
          break;
      }

      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Message Clone() {
      return new Message(this);
    }

    /// <summary>Field number for the "timestamp" field.</summary>
    public const int TimestampFieldNumber = 1;
    private ulong timestamp_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public ulong Timestamp {
      get { return timestamp_; }
      set {
        timestamp_ = value;
      }
    }

    /// <summary>Field number for the "room_message" field.</summary>
    public const int RoomMessageFieldNumber = 2;
    /// <summary>
    /// GlobalMessage global_message = 3;
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::VNerve.Bilibili.Live.RoomMessage RoomMessage {
      get { return payloadCase_ == PayloadOneofCase.RoomMessage ? (global::VNerve.Bilibili.Live.RoomMessage) payload_ : null; }
      set {
        payload_ = value;
        payloadCase_ = value == null ? PayloadOneofCase.None : PayloadOneofCase.RoomMessage;
      }
    }

    private object payload_;
    /// <summary>Enum of possible cases for the "payload" oneof.</summary>
    public enum PayloadOneofCase {
      None = 0,
      RoomMessage = 2,
    }
    private PayloadOneofCase payloadCase_ = PayloadOneofCase.None;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public PayloadOneofCase PayloadCase {
      get { return payloadCase_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void ClearPayload() {
      payloadCase_ = PayloadOneofCase.None;
      payload_ = null;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as Message);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(Message other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Timestamp != other.Timestamp) return false;
      if (!object.Equals(RoomMessage, other.RoomMessage)) return false;
      if (PayloadCase != other.PayloadCase) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (Timestamp != 0UL) hash ^= Timestamp.GetHashCode();
      if (payloadCase_ == PayloadOneofCase.RoomMessage) hash ^= RoomMessage.GetHashCode();
      hash ^= (int) payloadCase_;
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
      if (Timestamp != 0UL) {
        output.WriteRawTag(8);
        output.WriteUInt64(Timestamp);
      }
      if (payloadCase_ == PayloadOneofCase.RoomMessage) {
        output.WriteRawTag(18);
        output.WriteMessage(RoomMessage);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (Timestamp != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(Timestamp);
      }
      if (payloadCase_ == PayloadOneofCase.RoomMessage) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(RoomMessage);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(Message other) {
      if (other == null) {
        return;
      }
      if (other.Timestamp != 0UL) {
        Timestamp = other.Timestamp;
      }
      switch (other.PayloadCase) {
        case PayloadOneofCase.RoomMessage:
          if (RoomMessage == null) {
            RoomMessage = new global::VNerve.Bilibili.Live.RoomMessage();
          }
          RoomMessage.MergeFrom(other.RoomMessage);
          break;
      }

      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 8: {
            Timestamp = input.ReadUInt64();
            break;
          }
          case 18: {
            global::VNerve.Bilibili.Live.RoomMessage subBuilder = new global::VNerve.Bilibili.Live.RoomMessage();
            if (payloadCase_ == PayloadOneofCase.RoomMessage) {
              subBuilder.MergeFrom(RoomMessage);
            }
            input.ReadMessage(subBuilder);
            RoomMessage = subBuilder;
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code
