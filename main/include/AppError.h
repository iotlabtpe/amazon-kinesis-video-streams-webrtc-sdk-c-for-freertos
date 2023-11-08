/*
 * Copyright 2021 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */
#ifndef __KINESIS_VIDEO_WEBRTC_APP_ERROR_INCLUDE__
#define __KINESIS_VIDEO_WEBRTC_APP_ERROR_INCLUDE__

#ifdef __cplusplus
extern "C" {
#endif
/** 0x70000000 */
#define STATUS_APP_BASE   0x70000000
#define STATUS_APP_FAILED STATUS_APP_BASE + 0x00000001
/** 0x71000000 */
#define STATUS_APP_COMMON_BASE                         STATUS_APP_BASE + 0x01000000
#define STATUS_APP_COMMON_NULL_ARG                     STATUS_APP_COMMON_BASE + 0x00000001
#define STATUS_APP_COMMON_NOT_ENOUGH_MEMORY            STATUS_APP_COMMON_BASE + 0x00000002
#define STATUS_APP_COMMON_SHUTDOWN_MEDIA               STATUS_APP_COMMON_BASE + 0x00000003
#define STATUS_APP_COMMON_CHANNEL_NAME                 STATUS_APP_COMMON_BASE + 0x00000004
#define STATUS_APP_COMMON_TIMER                        STATUS_APP_COMMON_BASE + 0x00000005
#define STATUS_APP_COMMON_INVALID_PEER_ID              STATUS_APP_COMMON_BASE + 0x00000006
#define STATUS_APP_COMMON_TRIGGER_MEDIA_SENDER_ROUTINE STATUS_APP_COMMON_BASE + 0x00000007
#define STATUS_APP_COMMON_INVALID_MUTEX                STATUS_APP_COMMON_BASE + 0x00000008
#define STATUS_APP_COMMON_ACQUIRE_MUTEX                STATUS_APP_COMMON_BASE + 0x00000009
#define STATUS_APP_COMMON_QUIT_APP                     STATUS_APP_COMMON_BASE + 0x0000000A

/** 0x72000000 */
#define STATUS_APP_CREDENTIAL_BASE                    STATUS_APP_BASE + 0x02000000
#define STATUS_APP_CREDENTIAL_MISS_CACERT_PATH        STATUS_APP_CREDENTIAL_BASE + 0x00000001
#define STATUS_APP_CREDENTIAL_INVALID_CACERT_PATH     STATUS_APP_CREDENTIAL_BASE + 0x00000002
#define STATUS_APP_CREDENTIAL_CACERT_NOT_FOUND        STATUS_APP_CREDENTIAL_BASE + 0x00000003
#define STATUS_APP_CREDENTIAL_MISSING_ENV             STATUS_APP_CREDENTIAL_BASE + 0x00000004
#define STATUS_APP_CREDENTIAL_ALLOCATE_STATIC         STATUS_APP_CREDENTIAL_BASE + 0x00000005
#define STATUS_APP_CREDENTIAL_ALLOCATE_IOT            STATUS_APP_CREDENTIAL_BASE + 0x00000006
#define STATUS_APP_CREDENTIAL_ALLOCATE_ECS            STATUS_APP_CREDENTIAL_BASE + 0x00000007
#define STATUS_APP_CREDENTIAL_ALLOCATE_NA             STATUS_APP_CREDENTIAL_BASE + 0x00000008
#define STATUS_APP_CREDENTIAL_DESTROY_STATIC          STATUS_APP_CREDENTIAL_BASE + 0x00000009
#define STATUS_APP_CREDENTIAL_DESTROY_IOT             STATUS_APP_CREDENTIAL_BASE + 0x0000000A
#define STATUS_APP_CREDENTIAL_DESTROY_ECS             STATUS_APP_CREDENTIAL_BASE + 0x0000000B
#define STATUS_APP_CREDENTIAL_DESTROY_NA              STATUS_APP_CREDENTIAL_BASE + 0x0000000C
#define STATUS_APP_CREDENTIAL_PREGENERATED_CERT_QUEUE STATUS_APP_CREDENTIAL_BASE + 0x0000000D
#define STATUS_APP_CREDENTIAL_NULL_ARG                STATUS_APP_CREDENTIAL_BASE + 0x0000000E
#define STATUS_APP_CREDENTIAL_INVALID_MUTEX           STATUS_APP_CREDENTIAL_BASE + 0x0000000F
#define STATUS_APP_CREDENTIAL_CERT_CREATE             STATUS_APP_CREDENTIAL_BASE + 0x00000010
#define STATUS_APP_CREDENTIAL_CERT_STACK              STATUS_APP_CREDENTIAL_BASE + 0x00000011
/** 0x73000000 */
#define STATUS_MEDIA_BASE              STATUS_APP_BASE + 0x03000000
#define STATUS_MEDIA_NULL_ARG          STATUS_MEDIA_BASE + 0x00000001
#define STATUS_MEDIA_NOT_ENOUGH_MEMORY STATUS_MEDIA_BASE + 0x00000002
#define STATUS_MEDIA_INVALID_MUTEX     STATUS_MEDIA_BASE + 0x00000003
#define STATUS_MEDIA_FAILED            STATUS_MEDIA_BASE + 0x00000004
#define STATUS_MEDIA_INIT              STATUS_MEDIA_BASE + 0x00000005
#define STATUS_MEDIA_NOT_READY         STATUS_MEDIA_BASE + 0x00000006
#define STATUS_MEDIA_LINK_ELEMENT      STATUS_MEDIA_BASE + 0x00000007
#define STATUS_MEDIA_EMPTY_ELEMENT     STATUS_MEDIA_BASE + 0x00000008
#define STATUS_MEDIA_DUMMY_SINK        STATUS_MEDIA_BASE + 0x00000009
#define STATUS_MEDIA_DUMMY_ELEMENT     STATUS_MEDIA_BASE + 0x0000000A
#define STATUS_MEDIA_VIDEO_SINK        STATUS_MEDIA_BASE + 0x0000000B
#define STATUS_MEDIA_VIDEO_ELEMENT     STATUS_MEDIA_BASE + 0x0000000C
#define STATUS_MEDIA_VIDEO_CAPS        STATUS_MEDIA_BASE + 0x0000000D
#define STATUS_MEDIA_VIDEO_QUEUE       STATUS_MEDIA_BASE + 0x0000000E
#define STATUS_MEDIA_VIDEO_LINK        STATUS_MEDIA_BASE + 0x0000000F
#define STATUS_MEDIA_AUDIO_SINK        STATUS_MEDIA_BASE + 0x00000010
#define STATUS_MEDIA_AUDIO_ELEMENT     STATUS_MEDIA_BASE + 0x00000011
#define STATUS_MEDIA_AUDIO_CAPS        STATUS_MEDIA_BASE + 0x00000012
#define STATUS_MEDIA_AUDIO_QUEUE       STATUS_MEDIA_BASE + 0x00000013
#define STATUS_MEDIA_AUDIO_LINK        STATUS_MEDIA_BASE + 0x00000014
#define STATUS_MEDIA_UNSUPPORTED_VIDEO STATUS_MEDIA_BASE + 0x00000015
#define STATUS_MEDIA_UNSUPPORTED_AUDIO STATUS_MEDIA_BASE + 0x00000016
#define STATUS_MEDIA_RTSP_URL          STATUS_MEDIA_BASE + 0x00000017
#define STATUS_MEDIA_RTSP_CREDENTIAL   STATUS_MEDIA_BASE + 0x00000018
#define STATUS_MEDIA_RTSP_PASSWORD     STATUS_MEDIA_BASE + 0x00000019
#define STATUS_MEDIA_MISSING_RESOURCE  STATUS_MEDIA_BASE + 0x0000001A
#define STATUS_MEDIA_MISSING_PLUGIN    STATUS_MEDIA_BASE + 0x0000001B
#define STATUS_MEDIA_MISSING_BUS       STATUS_MEDIA_BASE + 0x0000001C
#define STATUS_MEDIA_MISSING_PIPELINE  STATUS_MEDIA_BASE + 0x0000001D
#define STATUS_MEDIA_PLAY              STATUS_MEDIA_BASE + 0x0000001E
#define STATUS_MEDIA_NOT_EXISTED       STATUS_MEDIA_BASE + 0x0000001F
#define STATUS_MEDIA_PAYLOAD_CONFLICT  STATUS_MEDIA_BASE + 0x00000020
#define STATUS_MEDIA_PAD_REMOVED       STATUS_MEDIA_BASE + 0x00000021
#define STATUS_MEDIA_BUS_ERROR         STATUS_MEDIA_BASE + 0x00000022
#define STATUS_MEDIA_BUS_EOS           STATUS_MEDIA_BASE + 0x00000023
#define STATUS_MEDIA_NOT_RUNNING       STATUS_MEDIA_BASE + 0x00000024
/** 0x74000000 */
#define STATUS_APP_SIGNALING_BASE               STATUS_APP_BASE + 0x04000000
#define STATUS_APP_SIGNALING_NULL_ARG           STATUS_APP_SIGNALING_BASE + 0x00000001
#define STATUS_APP_SIGNALING_NOT_ENOUGH_MEMORY  STATUS_APP_SIGNALING_BASE + 0x00000002
#define STATUS_APP_SIGNALING_INVALID_OPERATION  STATUS_APP_SIGNALING_BASE + 0x00000003
#define STATUS_APP_SIGNALING_INVALID_HANDLE     STATUS_APP_SIGNALING_BASE + 0x00000004
#define STATUS_APP_SIGNALING_INVALID_MUTEX      STATUS_APP_SIGNALING_BASE + 0x00000005
#define STATUS_APP_SIGNALING_INVALID_INFO_COUNT STATUS_APP_SIGNALING_BASE + 0x00000006
#define STATUS_APP_SIGNALING_INVALID_INFO       STATUS_APP_SIGNALING_BASE + 0x00000007
#define STATUS_APP_SIGNALING_CREATE             STATUS_APP_SIGNALING_BASE + 0x00000008
#define STATUS_APP_SIGNALING_CONNECT            STATUS_APP_SIGNALING_BASE + 0x00000009
#define STATUS_APP_SIGNALING_FREE               STATUS_APP_SIGNALING_BASE + 0x0000000A
#define STATUS_APP_SIGNALING_NOT_READY          STATUS_APP_SIGNALING_BASE + 0x0000000B
#define STATUS_APP_SIGNALING_RESTART            STATUS_APP_SIGNALING_BASE + 0x0000000C
#define STATUS_APP_SIGNALING_SEND               STATUS_APP_SIGNALING_BASE + 0x0000000D
#define STATUS_APP_SIGNALING_ICE_SERVER_COUNT   STATUS_APP_SIGNALING_BASE + 0x0000000E
#define STATUS_APP_SIGNALING_FETCH              STATUS_APP_SIGNALING_BASE + 0x0000000F
#define STATUS_APP_SIGNALING_SHUTDOWN           STATUS_APP_SIGNALING_BASE + 0x00000010
/** 0x75000000 */
#define STATUS_APP_WEBRTC_BASE   STATUS_APP_BASE + 0x05000000
#define STATUS_APP_WEBRTC_INIT   STATUS_APP_WEBRTC_BASE + 0x00000001
#define STATUS_APP_WEBRTC_DEINIT STATUS_APP_WEBRTC_BASE + 0x00000002
/** 0x76000000 */
#define STATUS_APP_METRICS_BASE                 STATUS_APP_BASE + 0x06000000
#define STATUS_APP_METRICS_NULL_ARG             STATUS_APP_METRICS_BASE + 0x00000001
#define STATUS_APP_METRICS_SETUP_LOGGER         STATUS_APP_METRICS_BASE + 0x00000002
#define STATUS_APP_METRICS_FREE_LOGGER          STATUS_APP_METRICS_BASE + 0x00000003
#define STATUS_APP_METRICS_ICE_SERVER           STATUS_APP_METRICS_BASE + 0x00000004
#define STATUS_APP_METRICS_LOCAL_ICE_CANDIDATE  STATUS_APP_METRICS_BASE + 0x00000005
#define STATUS_APP_METRICS_REMOTE_ICE_CANDIDATE STATUS_APP_METRICS_BASE + 0x00000006
/** 0x77000000 */
#define STATUS_APP_MSGQ_BASE               STATUS_APP_BASE + 0x07000000
#define STATUS_APP_MSGQ_NULL_ARG           STATUS_APP_MSGQ_BASE + 0x00000001
#define STATUS_APP_MSGQ_NOT_ENOUGH_MEMORY  STATUS_APP_MSGQ_BASE + 0x00000002
#define STATUS_APP_MSGQ_CREATE_CONN_MSQ    STATUS_APP_MSGQ_BASE + 0x00000003
#define STATUS_APP_MSGQ_PUSH_CONN_MSQ      STATUS_APP_MSGQ_BASE + 0x00000004
#define STATUS_APP_MSGQ_CREATE_PENDING_MSQ STATUS_APP_MSGQ_BASE + 0x00000005
#define STATUS_APP_MSGQ_HANDLE_PENDING_MSG STATUS_APP_MSGQ_BASE + 0x00000006
#define STATUS_APP_MSGQ_PUSH_PENDING_MSGQ  STATUS_APP_MSGQ_BASE + 0x00000007
#define STATUS_APP_MSGQ_EMPTY_PENDING_MSGQ STATUS_APP_MSGQ_BASE + 0x00000008
#define STATUS_APP_MSGQ_POP_PENDING_MSGQ   STATUS_APP_MSGQ_BASE + 0x00000009
#define STATUS_APP_MSGQ_NULL_PENDING_MSGQ  STATUS_APP_MSGQ_BASE + 0x0000000A
#define STATUS_APP_MSGQ_NULL_PENDING_MSG   STATUS_APP_MSGQ_BASE + 0x0000000B

#ifdef __cplusplus
}
#endif
#endif /* __KINESIS_VIDEO_WEBRTC_APP_ERROR_INCLUDE__ */
