﻿/*
 * avt.h : uRender AVTransport service.

 */

#ifndef AVT_H_
#define AVT_H_

#define AVT_DESCRIPTION \
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n" \
"<scpd xmlns=\"urn:schemas-upnp-org:service-1-0\">" \
    "<specVersion>" \
        "<major>1</major>" \
        "<minor>0</minor>" \
    "</specVersion>" \
    "<actionList>" \
        "<action>" \
            "<name>GetCurrentTransportActions</name>" \
            "<argumentList>" \
                "<argument>" \
                    "<name>InstanceID</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>Actions</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>CurrentTransportActions</relatedStateVariable>" \
                "</argument>" \
            "</argumentList>" \
        "</action>" \
        "<action>" \
            "<name>GetDeviceCapabilities</name>" \
            "<argumentList>" \
                "<argument>" \
                    "<name>InstanceID</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>PlayMedia</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>PossiblePlaybackStorageMedia</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>RecMedia</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>PossibleRecordStorageMedia</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>RecQualityModes</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>PossibleRecordQualityModes</relatedStateVariable>" \
                "</argument>" \
            "</argumentList>" \
        "</action>" \
        "<action>" \
            "<name>GetMediaInfo</name>" \
            "<argumentList>" \
                "<argument>" \
                    "<name>InstanceID</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>NrTracks</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>NumberOfTracks</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>MediaDuration</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>CurrentMediaDuration</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>CurrentURI</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>AVTransportURI</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>CurrentURIMetaData</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>AVTransportURIMetaData</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>NextURI</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>NextAVTransportURI</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>NextURIMetaData</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>NextAVTransportURIMetaData</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>PlayMedium</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>PlaybackStorageMedium</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>RecordMedium</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>RecordStorageMedium</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>WriteStatus</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>RecordMediumWriteStatus</relatedStateVariable>" \
                "</argument>" \
            "</argumentList>" \
        "</action>" \
        "<action>" \
            "<name>GetPositionInfo</name>" \
            "<argumentList>" \
                "<argument>" \
                    "<name>InstanceID</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>Track</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>CurrentTrack</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>TrackDuration</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>CurrentTrackDuration</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>TrackMetaData</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>CurrentTrackMetaData</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>TrackURI</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>CurrentTrackURI</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>RelTime</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>RelativeTimePosition</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>AbsTime</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>AbsoluteTimePosition</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>RelCount</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>RelativeCounterPosition</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>AbsCount</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>AbsoluteCounterPosition</relatedStateVariable>" \
                "</argument>" \
            "</argumentList>" \
        "</action>" \
        "<action>" \
            "<name>GetTransportInfo</name>" \
            "<argumentList>" \
                "<argument>" \
                    "<name>InstanceID</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>CurrentTransportState</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>TransportState</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>CurrentTransportStatus</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>TransportStatus</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>CurrentSpeed</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>TransportPlaySpeed</relatedStateVariable>" \
                "</argument>" \
            "</argumentList>" \
        "</action>" \
        "<action>" \
            "<name>GetTransportSettings</name>" \
            "<argumentList>" \
                "<argument>" \
                    "<name>InstanceID</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>PlayMode</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>CurrentPlayMode</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>RecQualityMode</name>" \
                    "<direction>out</direction>" \
                    "<relatedStateVariable>CurrentRecordQualityMode</relatedStateVariable>" \
                "</argument>" \
            "</argumentList>" \
        "</action>" \
        "<action>" \
            "<name>Next</name>" \
            "<argumentList>" \
                "<argument>" \
                    "<name>InstanceID</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>" \
                "</argument>" \
            "</argumentList>" \
        "</action>" \
        "<action>" \
            "<name>Pause</name>" \
            "<argumentList>" \
                "<argument>" \
                    "<name>InstanceID</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>" \
                "</argument>" \
            "</argumentList>" \
        "</action>" \
        "<action>" \
            "<name>Play</name>" \
            "<argumentList>" \
                "<argument>" \
                    "<name>InstanceID</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>Speed</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>TransportPlaySpeed</relatedStateVariable>" \
                "</argument>" \
            "</argumentList>" \
        "</action>" \
        "<action>" \
            "<name>Previous</name>" \
            "<argumentList>" \
                "<argument>" \
                    "<name>InstanceID</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>" \
                "</argument>" \
            "</argumentList>" \
        "</action>" \
        "<action>" \
            "<name>Seek</name>" \
            "<argumentList>" \
                "<argument>" \
                    "<name>InstanceID</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>Unit</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_SeekMode</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>Target</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_SeekTarget</relatedStateVariable>" \
                "</argument>" \
            "</argumentList>" \
        "</action>" \
        "<action>" \
            "<name>SetAVTransportURI</name>" \
            "<argumentList>" \
                "<argument>" \
                    "<name>InstanceID</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>CurrentURI</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>AVTransportURI</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>CurrentURIMetaData</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>AVTransportURIMetaData</relatedStateVariable>" \
                "</argument>" \
            "</argumentList>" \
        "</action>" \
        "<action>" \
            "<name>SetPlayMode</name>" \
            "<argumentList>" \
                "<argument>" \
                    "<name>InstanceID</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>" \
                "</argument>" \
                "<argument>" \
                    "<name>NewPlayMode</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>CurrentPlayMode</relatedStateVariable>" \
                "</argument>" \
            "</argumentList>" \
        "</action>" \
        "<action>" \
            "<name>Stop</name>" \
            "<argumentList>" \
                "<argument>" \
                    "<name>InstanceID</name>" \
                    "<direction>in</direction>" \
                    "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>" \
                "</argument>" \
            "</argumentList>" \
        "</action>" \
    "</actionList>" \
    "<serviceStateTable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>CurrentPlayMode</name>" \
            "<dataType>string</dataType>" \
            "<defaultValue>NORMAL</defaultValue>" \
            "<allowedValueList>" \
                "<allowedValue>NORMAL</allowedValue>" \
                "<allowedValue>REPEAT_ONE</allowedValue>" \
                "<allowedValue>REPEAT_ALL</allowedValue>" \
                "<allowedValue>SHUFFLE</allowedValue>" \
                "<allowedValue>SHUFFLE_NOREPEAT</allowedValue>" \
            "</allowedValueList>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>RecordStorageMedium</name>" \
            "<dataType>string</dataType>" \
            "<allowedValueList>" \
                "<allowedValue>NOT_IMPLEMENTED</allowedValue>" \
            "</allowedValueList>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"yes\">" \
            "<name>LastChange</name>" \
            "<dataType>string</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>RelativeTimePosition</name>" \
            "<dataType>string</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>CurrentTrackURI</name>" \
            "<dataType>string</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>CurrentTrackDuration</name>" \
            "<dataType>string</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>CurrentRecordQualityMode</name>" \
            "<dataType>string</dataType>" \
            "<allowedValueList>" \
                "<allowedValue>NOT_IMPLEMENTED</allowedValue>" \
            "</allowedValueList>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>CurrentMediaDuration</name>" \
            "<dataType>string</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>AbsoluteCounterPosition</name>" \
            "<dataType>i4</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>RelativeCounterPosition</name>" \
            "<dataType>i4</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>A_ARG_TYPE_InstanceID</name>" \
            "<dataType>ui4</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>AVTransportURI</name>" \
            "<dataType>string</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>TransportState</name>" \
            "<dataType>string</dataType>" \
            "<allowedValueList>" \
                "<allowedValue>STOPPED</allowedValue>" \
                "<allowedValue>PAUSED_PLAYBACK</allowedValue>" \
                "<allowedValue>PLAYING</allowedValue>" \
                "<allowedValue>TRANSITIONING</allowedValue>" \
                "<allowedValue>NO_MEDIA_PRESENT</allowedValue>" \
            "</allowedValueList>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>CurrentTrackMetaData</name>" \
            "<dataType>string</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>NextAVTransportURI</name>" \
            "<dataType>string</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>PossibleRecordQualityModes</name>" \
            "<dataType>string</dataType>" \
            "<allowedValueList>" \
                "<allowedValue>NOT_IMPLEMENTED</allowedValue>" \
            "</allowedValueList>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>CurrentTrack</name>" \
            "<dataType>ui4</dataType>" \
            "<allowedValueRange>" \
                "<minimum>0</minimum>" \
                "<maximum>65535</maximum>" \
                "<step>1</step>" \
            "</allowedValueRange>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>AbsoluteTimePosition</name>" \
            "<dataType>string</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>NextAVTransportURIMetaData</name>" \
            "<dataType>string</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>PlaybackStorageMedium</name>" \
            "<dataType>string</dataType>" \
            "<allowedValueList>" \
                "<allowedValue>NONE</allowedValue>" \
                "<allowedValue>UNKNOWN</allowedValue>" \
                "<allowedValue>CD-DA</allowedValue>" \
                "<allowedValue>HDD</allowedValue>" \
                "<allowedValue>NETWORK</allowedValue>" \
            "</allowedValueList>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>CurrentTransportActions</name>" \
            "<dataType>string</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>RecordMediumWriteStatus</name>" \
            "<dataType>string</dataType>" \
            "<allowedValueList>" \
                "<allowedValue>NOT_IMPLEMENTED</allowedValue>" \
            "</allowedValueList>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>PossiblePlaybackStorageMedia</name>" \
            "<dataType>string</dataType>" \
            "<allowedValueList>" \
                "<allowedValue>NONE</allowedValue>" \
                "<allowedValue>UNKNOWN</allowedValue>" \
                "<allowedValue>CD-DA</allowedValue>" \
                "<allowedValue>HDD</allowedValue>" \
                "<allowedValue>NETWORK</allowedValue>" \
            "</allowedValueList>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>AVTransportURIMetaData</name>" \
            "<dataType>string</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>NumberOfTracks</name>" \
            "<dataType>ui4</dataType>" \
            "<allowedValueRange>" \
                "<minimum>0</minimum>" \
                "<maximum>65535</maximum>" \
            "</allowedValueRange>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>A_ARG_TYPE_SeekMode</name>" \
            "<dataType>string</dataType>" \
            "<allowedValueList>" \
                "<allowedValue>REL_TIME</allowedValue>" \
                "<allowedValue>TRACK_NR</allowedValue>" \
            "</allowedValueList>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>A_ARG_TYPE_SeekTarget</name>" \
            "<dataType>string</dataType>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>PossibleRecordStorageMedia</name>" \
            "<dataType>string</dataType>" \
            "<allowedValueList>" \
                "<allowedValue>NOT_IMPLEMENTED</allowedValue>" \
            "</allowedValueList>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>TransportStatus</name>" \
            "<dataType>string</dataType>" \
            "<allowedValueList>" \
                "<allowedValue>OK</allowedValue>" \
                "<allowedValue>ERROR_OCCURRED</allowedValue>" \
            "</allowedValueList>" \
        "</stateVariable>" \
        "<stateVariable sendEvents=\"no\">" \
            "<name>TransportPlaySpeed</name>" \
            "<dataType>string</dataType>" \
            "<allowedValueList>" \
                "<allowedValue>1</allowedValue>" \
            "</allowedValueList>" \
        "</stateVariable>" \
    "</serviceStateTable>" \
"</scpd>"

#define AVT_DESCRIPTION_LEN strlen (AVT_DESCRIPTION)

#define AVT_LOCATION "/web/avt.xml"

#define AVT_SERVICE_ID "urn:upnp-org:serviceId:AVTransport"
#define AVT_SERVICE_TYPE "urn:schemas-upnp-org:service:AVTransport:1"


typedef struct tagAVT_METADATA
{
    char *title;
    char *date;
    char *genre;
    char *album;
    char *artist;
    char *creator;
    char *originalTrackNumber;
    char *size;                         // file size
    char *duration;
    char *albumArtURI;                  // album cover icon
    char *upnpClass;
    char *protocolInfo;
    char *res;
} AVT_METADATA;


struct avt_t {
    int transport_state;
    int transport_status;
    int play_speed;
    int play_mode;
    AVT_METADATA metadata;
};


typedef enum tagAVT_TRANSPORTSTATE_E
{
    AVT_TRANSPORTSTATE_STOPPED = 0,
    AVT_TRANSPORTSTATE_PLAYING,
    AVT_TRANSPORTSTATE_TRANSITIONING,
    AVT_TRANSPORTSTATE_PAUSED_PLAYBACK,
    AVT_TRANSPORTSTATE_PAUSED_RECORDING,
    AVT_TRANSPORTSTATE_RECORDING,
    AVT_TRANSPORTSTATE_NO_MEDIA_PRESENT,
} AVT_TRANSPORTSTATE_E;


#endif /* AVT_H_ */