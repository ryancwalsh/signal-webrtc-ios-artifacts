/*
 *
 *  Copyright (C) 2019 Signal Messenger, LLC.
 *  All rights reserved.
 *
 *  SPDX-License-Identifier: GPL-3.0-only
 *
 */

#ifndef CBINDGEN_BINDINGS_H
#define CBINDGEN_BINDINGS_H

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define MAX_MESSAGE_AGE_SEC 120

/**
 * The stats period, how often to get and log them. Assumes tick period is 1 second.
 */
#define STATS_PERIOD_SEC 10

/**
 * The periodic tick interval. Used to generate stats and to retransmit data channel messages.
 */
#define TICK_PERIOD_SEC 1

typedef enum {
    Verbose,
    Info,
    Warn,
    Error,
    None,
} LogSeverity;

typedef enum {
    Vp8 = 8,
    H264ConstrainedHigh = 46,
    H264ConstrainedBaseline = 40,
} RffiVideoCodecType;

typedef enum {
    Aes128CmSha1 = 1,
    AeadAes128Gcm = 7,
    AeadAes256Gcm = 8,
} SrtpCryptoSuite;

typedef enum {
    VideoRotation_None = 0,
    VideoRotation_Clockwise90 = 90,
    VideoRotation_Clockwise180 = 180,
    VideoRotation_Clockwise270 = 270,
} VideoRotation;

/**
 * Rust version of WebRTC AdapterType
 */
typedef struct NetworkInterfaceType NetworkInterfaceType;

/**
 * Rust version of WebRTC RFFI InjectableNetwork
 */
typedef struct {
    uint8_t _private[0];
} RffiInjectableNetwork;

/**
 * Rust version of WebRTC RFFI Ip,
 * which is like WebRTC IPAddress.
 */
typedef struct {
    bool v6;
    uint8_t address[16];
} RffiIp;

/**
 * Rust version of WebRTC RFFI IpPort,
 * which is like WebRTC SocketAddress
 */
typedef struct {
    RffiIp ip;
    uint16_t port;
} RffiIpPort;

/**
 * Opaque pointer type for an object of C++ origin.
 */
typedef const void *CppObject;

/**
 * Incomplete type for C++ PeerConnectionInterface.
 */
typedef struct {
    uint8_t _private[0];
} RffiPeerConnectionInterface;

/**
 * Incomplete type for C++ VideoTrackInterface.
 */
typedef struct {
    uint8_t _private[0];
} RffiVideoTrackInterface;

/**
 * Opaque pointer type for an object of Rust origin.
 */
typedef const void *RustObject;

/**
 * Incomplete type for SessionDescriptionInterface, used by
 * CreateSessionDescriptionObserver callbacks.
 */
typedef struct {
    uint8_t _private[0];
} RffiSessionDescriptionInterface;

/**
 * Incomplete type for C++ webrtc::VideoFrameBuffer.
 */
typedef struct {
    uint8_t _private[0];
} RffiVideoFrameBuffer;

/**
 * Incomplete type for C++ webrtc::rffi::CreateSessionDescriptionObserverRffi
 */
typedef struct {
    uint8_t _private[0];
} RffiCreateSessionDescriptionObserver;

/**
 * Incomplete type for C++ AudioTrackInterface.
 */
typedef struct {
    uint8_t _private[0];
} RffiAudioTrackInterface;

/**
 * Incomplete type for C++ PeerConnectionFactoryInterface.
 */
typedef struct {
    uint8_t _private[0];
} RffiPeerConnectionFactoryInterface;

/**
 * Incomplete type for C++ DataChannelInterface.
 */
typedef struct {
    uint8_t _private[0];
} RffiDataChannelInterface;

/**
 * Rust friendly version of WebRTC DataChannelInit.
 *
 * The definition is taken from [WebRTC RTCDataChannelInit]
 * (https://www.w3.org/TR/webrtc/#idl-def-rtcdatachannelinit).
 *
 * See `struct DataChannelInit1 in
 * webrtc/src/api/data_channel_interface.h
 */
typedef struct {
    bool reliable;
    bool ordered;
    int maxRetransmitTime;
    int maxRetransmits;
    const char *protocol;
    bool negotiated;
    int id;
} RffiDataChannelInit;

/**
 * Incomplete type for C++ DataChannelObserver.
 */
typedef struct {
    uint8_t _private[0];
} RffiDataChannelObserverInterface;

#if defined(TARGET_OS_ANDROID)
/**
 * Incomplete type for C++ JavaMediaStream.
 */
typedef struct {
    uint8_t _private[0];
} RffiJavaMediaStream;
#endif

/**
 * Incomplete type for WebRTC C++ MediaStreamInterface.
 */
typedef struct {
    uint8_t _private[0];
} RffiMediaStreamInterface;

/**
 * Incomplete type for C++ PeerConnectionObserver.
 */
typedef struct {
    uint8_t _private[0];
} RffiPeerConnectionObserverInterface;

/**
 * Incomplete type for C++ RTCCerficate.
 */
typedef struct {
    uint8_t _private[0];
} RffiCertificate;

typedef struct {
    const char *username;
    const char *password;
    const char *const *urls;
    uintptr_t urls_size;
} RffiIceServer;

/**
 * Incomplete type for C++ VideoTrackSourceInterface.
 */
typedef struct {
    uint8_t _private[0];
} RffiVideoTrackSourceInterface;

/**
 * Incomplete type for C++ CreateSessionDescriptionObserverRffi
 */
typedef struct {
    uint8_t _private[0];
} RffiSetSessionDescriptionObserver;

/**
 * Incomplete type for C++ IceGathererInterface.
 */
typedef struct {
    uint8_t _private[0];
} RffiIceGathererInterface;

/**
 * Incomplete type for C++ webrtc::rffi::StatsObserverRffi
 */
typedef struct {
    uint8_t _private[0];
} RffiStatsObserver;

typedef struct {
    RffiVideoCodecType type;
    uint32_t level;
} RffiVideoCodec;

typedef struct {
    const char *ice_ufrag;
    const char *ice_pwd;
    const RffiVideoCodec *receive_video_codecs;
    uintptr_t receive_video_codecs_size;
} RffiConnectionParametersV4;

#if defined(TARGET_OS_IOS)
/**
 * Structure for passing buffers (such as strings) to Swift.
 */
typedef struct {
    const uint8_t *bytes;
    size_t len;
} AppByteSlice;
#endif

#if defined(TARGET_OS_IOS)
/**
 * Structure for passing Ice Candidates to/from Swift.
 */
typedef struct {
    AppByteSlice opaque;
    AppByteSlice sdp;
} AppIceCandidate;
#endif

#if defined(TARGET_OS_IOS)
/**
 * Structure for passing multiple Ice Candidates to Swift.
 */
typedef struct {
    const AppIceCandidate *candidates;
    size_t count;
} AppIceCandidateArray;
#endif

#if defined(TARGET_OS_IOS)
/**
 * Structure for passing connection details from the application.
 */
typedef struct {
    void *object;
    void *pc;
    /**
     * Swift object clean up method.
     */
    void (*destroy)(void *object);
} AppConnectionInterface;
#endif

#if defined(TARGET_OS_IOS)
/**
 * Structure for passing media stream instances from the application.
 */
typedef struct {
    void *object;
    /**
     * Swift object clean up method.
     */
    void (*destroy)(void *object);
    /**
     * Returns a pointer to a RTCMediaStream object.
     */
    void *(*createMediaStream)(void *object, void *nativeStream);
} AppMediaStreamInterface;
#endif

#if defined(TARGET_OS_IOS)
/**
 * iOS Interface for communicating with the Swift application.
 */
typedef struct {
    /**
     * Raw Swift object pointer.
     */
    void *object;
    /**
     * Swift object clean up method.
     */
    void (*destroy)(void *object);
    /**
     *
     */
    void (*onStartCall)(void *object, const void *remote, uint64_t callId, bool isOutgoing, int32_t callMediaType);
    /**
     * Swift event callback method.
     */
    void (*onEvent)(void *object, const void *remote, int32_t event);
    /**
     *
     */
    void (*onSendOffer)(void *object, uint64_t callId, const void *remote, uint32_t destinationDeviceId, bool broadcast, AppByteSlice opaque, AppByteSlice sdp, int32_t callMediaType);
    /**
     *
     */
    void (*onSendAnswer)(void *object, uint64_t callId, const void *remote, uint32_t destinationDeviceId, bool broadcast, AppByteSlice opaque, AppByteSlice sdp);
    /**
     *
     */
    void (*onSendIceCandidates)(void *object, uint64_t callId, const void *remote, uint32_t destinationDeviceId, bool broadcast, const AppIceCandidateArray *candidates);
    /**
     *
     */
    void (*onSendHangup)(void *object, uint64_t callId, const void *remote, uint32_t destinationDeviceId, bool broadcast, int32_t hangupType, uint32_t deviceId, bool useLegacyHangupMessage);
    /**
     *
     */
    void (*onSendBusy)(void *object, uint64_t callId, const void *remote, uint32_t destinationDeviceId, bool broadcast);
    /**
     *
     */
    AppConnectionInterface (*onCreateConnectionInterface)(void *object, void *observer, uint32_t deviceId, void *context, bool enable_dtls, bool enable_rtp_data_channel);
    /**
     * Request that the application create an application Media Stream object
     * associated with the given application Connection object.
     */
    AppMediaStreamInterface (*onCreateMediaStreamInterface)(void *object, void *connection);
    /**
     *
     */
    void (*onConnectMedia)(void *object, const void *remote, void *context, const void *stream);
    /**
     *
     */
    bool (*onCompareRemotes)(void *object, const void *remote1, const void *remote2);
    /**
     *
     */
    void (*onCallConcluded)(void *object, const void *remote);
} AppInterface;
#endif

#if defined(TARGET_OS_IOS)
/**
 * Log object for interfacing with swift.
 */
typedef struct {
    void *object;
    void (*destroy)(void *object);
    void (*log)(void *object, AppByteSlice message, AppByteSlice file, AppByteSlice function, int32_t line, int8_t level);
} IOSLogger;
#endif

#if defined(TARGET_OS_IOS)
/**
 * Structure for holding call context details on behalf of the application.
 */
typedef struct {
    void *object;
    /**
     * Swift object clean up method.
     */
    void (*destroy)(void *object);
} AppCallContext;
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcAcceptCall(JNIEnv env,
                                                           JObject _object,
                                                           jlong call_manager,
                                                           jlong call_id);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcCall(JNIEnv env,
                                                     JObject _object,
                                                     jlong call_manager,
                                                     JObject jni_remote,
                                                     jint call_media_type,
                                                     jint local_device);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcClose(JNIEnv env,
                                                      JObject _object,
                                                      jlong call_manager);
#endif

#if defined(TARGET_OS_ANDROID)
jlong Java_org_signal_ringrtc_CallManager_ringrtcCreateCallManager(JNIEnv env,
                                                                   JClass _class,
                                                                   JObject jni_call_manager);
#endif

#if defined(TARGET_OS_ANDROID)
jlong Java_org_signal_ringrtc_CallManager_ringrtcCreatePeerConnection(JNIEnv env,
                                                                      JObject _object,
                                                                      jlong peer_connection_factory,
                                                                      jlong native_connection,
                                                                      JObject jni_rtc_config,
                                                                      JObject jni_media_constraints,
                                                                      bool enable_dtls,
                                                                      bool enable_rtp_data_channel);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcDrop(JNIEnv env,
                                                     JObject _object,
                                                     jlong call_manager,
                                                     jlong call_id);
#endif

#if defined(TARGET_OS_ANDROID)
jobject Java_org_signal_ringrtc_CallManager_ringrtcGetActiveCallContext(JNIEnv env,
                                                                        JObject _object,
                                                                        jlong call_manager);
#endif

#if defined(TARGET_OS_ANDROID)
jobject Java_org_signal_ringrtc_CallManager_ringrtcGetActiveConnection(JNIEnv env,
                                                                       JObject _object,
                                                                       jlong call_manager);
#endif

#if defined(TARGET_OS_ANDROID)
jobject Java_org_signal_ringrtc_CallManager_ringrtcGetBuildInfo(JNIEnv env, JClass _class);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcHangup(JNIEnv env,
                                                       JObject _object,
                                                       jlong call_manager);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcInitialize(JNIEnv env, JClass _class);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcMessageSendFailure(JNIEnv env,
                                                                   JObject _object,
                                                                   jlong call_manager,
                                                                   jlong call_id);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcMessageSent(JNIEnv env,
                                                            JObject _object,
                                                            jlong call_manager,
                                                            jlong call_id);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcProceed(JNIEnv env,
                                                        JObject _object,
                                                        jlong call_manager,
                                                        jlong call_id,
                                                        JObject jni_call_context);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcReceivedAnswer(JNIEnv env,
                                                               JObject _object,
                                                               jlong call_manager,
                                                               jlong call_id,
                                                               jint remote_device,
                                                               jbyteArray opaque,
                                                               JString sdp,
                                                               jboolean remote_supports_multi_ring,
                                                               jbyteArray sender_identity_key,
                                                               jbyteArray receiver_identity_key);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcReceivedBusy(JNIEnv env,
                                                             JObject _object,
                                                             jlong call_manager,
                                                             jlong call_id,
                                                             jint remote_device);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcReceivedHangup(JNIEnv env,
                                                               JObject _object,
                                                               jlong call_manager,
                                                               jlong call_id,
                                                               jint remote_device,
                                                               jint hangup_type,
                                                               jint device_id);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcReceivedIceCandidates(JNIEnv env,
                                                                      JObject _object,
                                                                      jlong call_manager,
                                                                      jlong call_id,
                                                                      jint remote_device,
                                                                      JObject jni_ice_candidates);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcReceivedOffer(JNIEnv env,
                                                              JObject _object,
                                                              jlong call_manager,
                                                              jlong call_id,
                                                              JObject jni_remote,
                                                              jint remote_device,
                                                              jbyteArray opaque,
                                                              JString sdp,
                                                              jlong message_age_sec,
                                                              jint call_media_type,
                                                              jint local_device,
                                                              jboolean remote_supports_multi_ring,
                                                              jboolean jni_is_local_device_primary,
                                                              jbyteArray sender_identity_key,
                                                              jbyteArray receiver_identity_key);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcReset(JNIEnv env,
                                                      JObject _object,
                                                      jlong call_manager);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcSetLowBandwidthMode(JNIEnv env,
                                                                    JObject _object,
                                                                    jlong call_manager,
                                                                    bool enabled);
#endif

#if defined(TARGET_OS_ANDROID)
void Java_org_signal_ringrtc_CallManager_ringrtcSetVideoEnable(JNIEnv env,
                                                               JObject _object,
                                                               jlong call_manager,
                                                               jboolean enable);
#endif

#if defined(TARGET_OS_ANDROID)
/**
 * Export the nativeCreatepeerconnection() call from the
 * org.webrtc.PeerConnectionFactory class.
 */
extern jlong Java_org_webrtc_PeerConnectionFactory_nativeCreatePeerConnection(JNIEnv env,
                                                                              JClass class_,
                                                                              jlong factory,
                                                                              JObject rtcConfig,
                                                                              JObject constraints,
                                                                              jlong nativeObserver,
                                                                              JObject sslCertificateVerifier,
                                                                              jboolean enable_dtls,
                                                                              jboolean enable_rtp_data_channel);
#endif

extern void Rust_InjectableNetwork_AddInterface(const RffiInjectableNetwork *network,
                                                const char *name,
                                                NetworkInterfaceType typ,
                                                RffiIp ip,
                                                uint16_t preference);

extern void Rust_InjectableNetwork_ReceiveUdp(const RffiInjectableNetwork *network,
                                              RffiIpPort source,
                                              RffiIpPort dest,
                                              const uint8_t *data,
                                              uintptr_t size);

extern void Rust_InjectableNetwork_RemoveInterface(const RffiInjectableNetwork *network,
                                                   const char *name);

extern void Rust_InjectableNetwork_SetSender(const RffiInjectableNetwork *network,
                                             CppObject sender);

extern bool Rust_addIceCandidate(const RffiPeerConnectionInterface *pc_interface, const char *sdp);

extern void Rust_addRef(CppObject ref_counted_pointer);

extern void Rust_addVideoSink(const RffiVideoTrackInterface *track, RustObject obj, CppObject cb);

extern const RffiSessionDescriptionInterface *Rust_answerFromSdp(const char *sdp);

extern void Rust_convertVideoFrameBufferToRgba(const RffiVideoFrameBuffer *buffer,
                                               uint8_t *rgba_buffer);

extern const RffiVideoFrameBuffer *Rust_copyAndRotateVideoFrameBuffer(const RffiVideoFrameBuffer *buffer,
                                                                      VideoRotation rotation);

extern void Rust_createAnswer(const RffiPeerConnectionInterface *pc_interface,
                              const RffiCreateSessionDescriptionObserver *csd_observer);

extern const RffiAudioTrackInterface *Rust_createAudioTrack(const RffiPeerConnectionFactoryInterface *factory);

extern const RffiCreateSessionDescriptionObserver *Rust_createCreateSessionDescriptionObserver(RustObject csd_observer,
                                                                                               const void *csd_observer_cb);

extern const RffiDataChannelInterface *Rust_createDataChannel(const RffiPeerConnectionInterface *pc_interface,
                                                              const char *label,
                                                              const RffiDataChannelInit *config);

extern const RffiDataChannelObserverInterface *Rust_createDataChannelObserver(RustObject call_connection,
                                                                              CppObject dc_observer_cb);

#if defined(TARGET_OS_ANDROID)
extern const RffiJavaMediaStream *Rust_createJavaMediaStream(const RffiMediaStreamInterface *media_stream_interface);
#endif

extern void Rust_createOffer(const RffiPeerConnectionInterface *pc_interface,
                             const RffiCreateSessionDescriptionObserver *csd_observer);

extern const RffiPeerConnectionInterface *Rust_createPeerConnection(const RffiPeerConnectionFactoryInterface *factory,
                                                                    const RffiPeerConnectionObserverInterface *observer,
                                                                    const RffiCertificate *certificate,
                                                                    bool hide_ip,
                                                                    RffiIceServer ice_server,
                                                                    const RffiAudioTrackInterface *outgoing_audio,
                                                                    const RffiVideoTrackSourceInterface *outgoing_video,
                                                                    bool enable_dtls,
                                                                    bool enable_rtp_data_channel);

extern const RffiPeerConnectionFactoryInterface *Rust_createPeerConnectionFactory(bool use_injectable_network);

extern const RffiPeerConnectionObserverInterface *Rust_createPeerConnectionObserver(RustObject cc_ptr,
                                                                                    CppObject pc_observer_cb);

extern const RffiSetSessionDescriptionObserver *Rust_createSetSessionDescriptionObserver(RustObject ssd_observer,
                                                                                         const void *ssd_observer_cb);

extern const RffiIceGathererInterface *Rust_createSharedIceGatherer(const RffiPeerConnectionInterface *pc_interface);

extern const RffiStatsObserver *Rust_createStatsObserver(RustObject stats_observer,
                                                         const void *stats_observer_cbs);

extern const RffiVideoFrameBuffer *Rust_createVideoFrameBufferFromRgba(uint32_t width,
                                                                       uint32_t height,
                                                                       const uint8_t *rgba_buffer);

extern const RffiVideoTrackSourceInterface *Rust_createVideoSource(const RffiPeerConnectionFactoryInterface *factory);

extern const char *Rust_dataChannelGetLabel(const RffiDataChannelInterface *dc_interface);

extern bool Rust_dataChannelIsReliable(const RffiDataChannelInterface *dc_interface);

extern bool Rust_dataChannelSend(const RffiDataChannelInterface *dc_interface,
                                 const uint8_t *buffer,
                                 size_t len,
                                 bool binary);

extern bool Rust_disableDtlsAndSetSrtpKey(const RffiSessionDescriptionInterface *sdi,
                                          SrtpCryptoSuite crypto_suite,
                                          const uint8_t *key_ptr,
                                          size_t key_len,
                                          const uint8_t *salt_ptr,
                                          size_t salt_len);

#if defined(TARGET_OS_ANDROID)
extern void Rust_freeJavaMediaStream(const RffiJavaMediaStream *rffi_jms_interface);
#endif

extern const RffiCertificate *Rust_generateCertificate(void);

extern int32_t Rust_getAudioPlayoutDeviceName(const RffiPeerConnectionFactoryInterface *factory,
                                              uint16_t index,
                                              char *out_name,
                                              char *out_uuid);

extern int16_t Rust_getAudioPlayoutDevices(const RffiPeerConnectionFactoryInterface *factory);

extern int32_t Rust_getAudioRecordingDeviceName(const RffiPeerConnectionFactoryInterface *factory,
                                                uint16_t index,
                                                char *out_name,
                                                char *out_uuid);

extern int16_t Rust_getAudioRecordingDevices(const RffiPeerConnectionFactoryInterface *factory);

extern const RffiVideoTrackInterface *Rust_getFirstVideoTrack(const RffiMediaStreamInterface *stream);

extern const RffiInjectableNetwork *Rust_getInjectableNetwork(const RffiPeerConnectionFactoryInterface *factory);

#if defined(TARGET_OS_ANDROID)
extern jobject Rust_getObjectJavaMediaStream(const RffiJavaMediaStream *rffi_jms_interface);
#endif

#if defined(TARGET_OS_ANDROID)
extern const RffiPeerConnectionInterface *Rust_getPeerConnectionInterface(int64_t jni_owned_pc);
#endif

extern void Rust_getStats(const RffiPeerConnectionInterface *pc_interface,
                          const RffiStatsObserver *stats_observer);

extern const RffiSessionDescriptionInterface *Rust_offerFromSdp(const char *sdp);

extern void Rust_pushVideoFrame(const RffiVideoTrackSourceInterface *source,
                                const RffiVideoFrameBuffer *buffer);

extern void Rust_registerDataChannelObserver(const RffiDataChannelInterface *dc_interface,
                                             const RffiDataChannelObserverInterface *dc_observer);

extern void Rust_releaseRef(CppObject ref_counted_pointer);

extern void Rust_releaseV4(RffiConnectionParametersV4 *sdi);

extern bool Rust_replaceRtpDataChannelsWithSctp(const RffiSessionDescriptionInterface *sdi);

extern const RffiSessionDescriptionInterface *Rust_sessionDescriptionFromV4(bool offer,
                                                                            const RffiConnectionParametersV4 *v4);

extern RffiConnectionParametersV4 *Rust_sessionDescriptionToV4(const RffiSessionDescriptionInterface *sdi);

extern bool Rust_setAudioPlayoutDevice(const RffiPeerConnectionFactoryInterface *factory,
                                       uint16_t index);

extern bool Rust_setAudioRecordingDevice(const RffiPeerConnectionFactoryInterface *factory,
                                         uint16_t index);

extern void Rust_setAudioTrackEnabled(const RffiAudioTrackInterface *track, bool enabled);

extern bool Rust_setIncomingRtpEnabled(const RffiPeerConnectionInterface *pc_interface,
                                       bool enabled);

extern void Rust_setLocalDescription(const RffiPeerConnectionInterface *pc_interface,
                                     const RffiSetSessionDescriptionObserver *ssd_observer,
                                     const RffiSessionDescriptionInterface *desc);

extern void Rust_setLogger(CppObject cbs, LogSeverity min_severity);

extern void Rust_setMaxSendBitrate(const RffiPeerConnectionInterface *pc_interface,
                                   int32_t max_bitrate_bps);

extern void Rust_setOutgoingAudioEnabled(const RffiPeerConnectionInterface *pc_interface,
                                         bool enabled);

extern void Rust_setRemoteDescription(const RffiPeerConnectionInterface *pc_interface,
                                      const RffiSetSessionDescriptionObserver *ssd_observer,
                                      const RffiSessionDescriptionInterface *desc);

extern const char *Rust_toSdp(const RffiSessionDescriptionInterface *offer);

extern void Rust_unregisterDataChannelObserver(const RffiDataChannelInterface *dc_interface,
                                               const RffiDataChannelObserverInterface *dc_observer);

extern bool Rust_useSharedIceGatherer(const RffiPeerConnectionInterface *pc_interface,
                                      const RffiIceGathererInterface *ice_gatherer);

#if defined(TARGET_OS_IOS)
void *ringrtcAccept(void *callManager, uint64_t callId);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcCall(void *callManager,
                  const void *appRemote,
                  int32_t callMediaType,
                  uint32_t appLocalDevice);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcClose(void *callManager);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcCreate(void *appCallManager, AppInterface appInterface);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcDrop(void *callManager, uint64_t callId);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcGetActiveCallContext(void *callManager);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcGetActiveConnection(void *callManager);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcHangup(void *callManager);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcInitialize(IOSLogger logObject);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcMessageSendFailure(void *callManager, uint64_t callId);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcMessageSent(void *callManager, uint64_t callId);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcProceed(void *callManager, uint64_t callId, AppCallContext appCallContext);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcReceivedAnswer(void *callManager,
                            uint64_t callId,
                            uint32_t senderDeviceId,
                            AppByteSlice opaque,
                            AppByteSlice sdp,
                            bool senderSupportsMultiRing,
                            AppByteSlice senderIdentityKey,
                            AppByteSlice receiverIdentityKey);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcReceivedBusy(void *callManager, uint64_t callId, uint32_t remoteDevice);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcReceivedHangup(void *callManager,
                            uint64_t callId,
                            uint32_t remoteDevice,
                            int32_t hangupType,
                            uint32_t deviceId);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcReceivedIceCandidates(void *callManager,
                                   uint64_t callId,
                                   uint32_t senderDeviceId,
                                   const AppIceCandidateArray *appIceCandidateArray);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcReceivedOffer(void *callManager,
                           uint64_t callId,
                           const void *remotePeer,
                           uint32_t senderDeviceId,
                           AppByteSlice opaque,
                           AppByteSlice sdp,
                           uint64_t messageAgeSec,
                           int32_t callMediaType,
                           uint32_t receiverDeviceId,
                           bool senderSupportsMultiRing,
                           bool receiverDeviceIsPrimary,
                           AppByteSlice senderIdentityKey,
                           AppByteSlice receiverIdentityKey);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcReset(void *callManager);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcSetLowBandwidthMode(void *callManager, bool enabled);
#endif

#if defined(TARGET_OS_IOS)
void *ringrtcSetVideoEnable(void *callManager, bool enable);
#endif

#endif /* CBINDGEN_BINDINGS_H */
