
const
// module ID definitions
 SCE_SYSMODULE_INVALID                  =$0000;
 SCE_SYSMODULE_FIBER                    =$0006;
 SCE_SYSMODULE_ULT                      =$0007;
 SCE_SYSMODULE_NGS2                     =$000b;
 SCE_SYSMODULE_XML                      =$0017;
 SCE_SYSMODULE_NP_UTILITY               =$0019;
 SCE_SYSMODULE_VOICE                    =$001a;
 SCE_SYSMODULE_VOICEQOS                 =$001b;
 SCE_SYSMODULE_NP_MATCHING2             =$001c;
 SCE_SYSMODULE_NP_SCORE_RANKING         =$001e;
 SCE_SYSMODULE_RUDP                     =$0021;
 SCE_SYSMODULE_NP_TUS                   =$002c;
 SCE_SYSMODULE_FACE                     =$0038;
 SCE_SYSMODULE_SMART                    =$0039;
 SCE_SYSMODULE_GAME_LIVE_STREAMING      =$0081;
 SCE_SYSMODULE_COMPANION_UTIL           =$0082;
 SCE_SYSMODULE_PLAYGO                   =$0083;
 SCE_SYSMODULE_FONT                     =$0084;
 SCE_SYSMODULE_VIDEO_RECORDING          =$0085;
 SCE_SYSMODULE_S3DCONVERSION            =$0086;
 SCE_SYSMODULE_AUDIODEC                 =$0088;
 SCE_SYSMODULE_JPEG_DEC                 =$008a;
 SCE_SYSMODULE_JPEG_ENC                 =$008b;
 SCE_SYSMODULE_PNG_DEC                  =$008c;
 SCE_SYSMODULE_PNG_ENC                  =$008d;
 SCE_SYSMODULE_VIDEODEC                 =$008e;
 SCE_SYSMODULE_MOVE                     =$008f;
 SCE_SYSMODULE_PAD_TRACKER              =$0091;
 SCE_SYSMODULE_DEPTH                    =$0092;
 SCE_SYSMODULE_HAND                     =$0093;
 SCE_SYSMODULE_LIBIME                   =$0095;
 SCE_SYSMODULE_IME_DIALOG               =$0096;
 SCE_SYSMODULE_NP_PARTY                 =$0097;
 SCE_SYSMODULE_FONT_FT                  =$0098;
 SCE_SYSMODULE_FREETYPE_OT              =$0099;
 SCE_SYSMODULE_FREETYPE_OL              =$009a;
 SCE_SYSMODULE_FREETYPE_OPT_OL          =$009b;
 SCE_SYSMODULE_SCREEN_SHOT              =$009c;
 SCE_SYSMODULE_NP_AUTH                  =$009d;
 SCE_SYSMODULE_SULPHA                   =$009f;
 SCE_SYSMODULE_SAVE_DATA_DIALOG         =$00a0;
 SCE_SYSMODULE_INVITATION_DIALOG        =$00a2;
 SCE_SYSMODULE_DEBUG_KEYBOARD           =$00a3;
 SCE_SYSMODULE_MESSAGE_DIALOG           =$00a4;
 SCE_SYSMODULE_AV_PLAYER                =$00a5;
 SCE_SYSMODULE_CONTENT_EXPORT           =$00a6;
 SCE_SYSMODULE_AUDIO_3D                 =$00a7;
 SCE_SYSMODULE_NP_COMMERCE              =$00a8;
 SCE_SYSMODULE_MOUSE                    =$00a9;
 SCE_SYSMODULE_COMPANION_HTTPD          =$00aa;
 SCE_SYSMODULE_WEB_BROWSER_DIALOG       =$00ab;
 SCE_SYSMODULE_ERROR_DIALOG             =$00ac;
 SCE_SYSMODULE_NP_TROPHY                =$00ad;
 SCE_SYSMODULE_RESERVED30               =$00ae;
 SCE_SYSMODULE_RESERVED31               =$00af;
 SCE_SYSMODULE_NP_SNS_FACEBOOK          =$00b0;
 SCE_SYSMODULE_MOVE_TRACKER             =$00b1;
 SCE_SYSMODULE_NP_PROFILE_DIALOG        =$00b2;
 SCE_SYSMODULE_NP_FRIEND_LIST_DIALOG    =$00b3;
 SCE_SYSMODULE_APP_CONTENT              =$00b4;
 SCE_SYSMODULE_NP_SIGNALING             =$00b5;
 SCE_SYSMODULE_REMOTE_PLAY              =$00b6;
 SCE_SYSMODULE_USBD                     =$00b7;
 SCE_SYSMODULE_GAME_CUSTOM_DATA_DIALOG  =$00b8;
 SCE_SYSMODULE_RESERVED0                =$00b9;
 SCE_SYSMODULE_RESERVED1                =$00ba;
 SCE_SYSMODULE_RESERVED2                =$00bb;
 SCE_SYSMODULE_M4AAC_ENC                =$00bc;
 SCE_SYSMODULE_AUDIODEC_CPU             =$00bd;
 SCE_SYSMODULE_RESERVED32               =$00be;
 SCE_SYSMODULE_RESERVED33               =$00c0;
 SCE_SYSMODULE_RESERVED3                =$00c1;
 SCE_SYSMODULE_RESERVED4                =$00c2;
 SCE_SYSMODULE_RESERVED5                =$00c3;
 SCE_SYSMODULE_RESERVED6                =$00c4;
 SCE_SYSMODULE_ZLIB                     =$00c5;
 SCE_SYSMODULE_RESERVED8                =$00c6;
 SCE_SYSMODULE_CONTENT_SEARCH           =$00c7;
 SCE_SYSMODULE_RESERVED9                =$00c8;
 SCE_SYSMODULE_RESERVED34               =$00c9;
 SCE_SYSMODULE_DECI4H                   =$00ca;
 SCE_SYSMODULE_HEAD_TRACKER             =$00cb;
 SCE_SYSMODULE_RESERVED11               =$00cc;
 SCE_SYSMODULE_RESERVED12               =$00cd;
 SCE_SYSMODULE_SYSTEM_GESTURE           =$00ce;
 SCE_SYSMODULE_VIDEODEC2                =$00cf;
 SCE_SYSMODULE_RESERVED14               =$00d0;
 SCE_SYSMODULE_AT9_ENC                  =$00d1;
 SCE_SYSMODULE_CONVERT_KEYCODE          =$00d2;
 SCE_SYSMODULE_SHARE_PLAY               =$00d3;
 SCE_SYSMODULE_HMD                      =$00d4;
 SCE_SYSMODULE_RESERVED18               =$00d5;
 SCE_SYSMODULE_RESERVED16               =$00d6;
 SCE_SYSMODULE_RESERVED17               =$00d7;
 SCE_SYSMODULE_FACE_TRACKER             =$00d8;
 SCE_SYSMODULE_HAND_TRACKER             =$00d9;
 SCE_SYSMODULE_RESERVED19               =$00da;
 SCE_SYSMODULE_RESERVED20               =$00dc;
 SCE_SYSMODULE_RESERVED21               =$00dd;
 SCE_SYSMODULE_RESERVED22               =$00de;
 SCE_SYSMODULE_RESERVED23               =$00df;
 SCE_SYSMODULE_RESERVED24               =$00e0;
 SCE_SYSMODULE_AUDIODEC_CPU_HEVAG       =$00e1;
 SCE_SYSMODULE_LOGIN_DIALOG             =$00e2;
 SCE_SYSMODULE_LOGIN_SERVICE            =$00e3;
 SCE_SYSMODULE_SIGNIN_DIALOG            =$00e4;
 SCE_SYSMODULE_RESERVED35               =$00e5;
 SCE_SYSMODULE_RESERVED25               =$00e6;
 SCE_SYSMODULE_JSON2                    =$00e7;
 SCE_SYSMODULE_AUDIO_LATENCY_ESTIMATION =$00e8;
 SCE_SYSMODULE_RESERVED26               =$00e9;
 SCE_SYSMODULE_RESERVED27               =$00ea;
 SCE_SYSMODULE_HMD_SETUP_DIALOG         =$00eb;
 SCE_SYSMODULE_RESERVED28               =$00ec;
 SCE_SYSMODULE_VR_TRACKER               =$00ed;
 SCE_SYSMODULE_CONTENT_DELETE           =$00ee;
 SCE_SYSMODULE_IME_BACKEND              =$00ef;
 SCE_SYSMODULE_NET_CTL_AP_DIALOG        =$00f0;
 SCE_SYSMODULE_PLAYGO_DIALOG            =$00f1;
 SCE_SYSMODULE_SOCIAL_SCREEN            =$00f2;
 SCE_SYSMODULE_EDIT_MP4                 =$00f3;
 SCE_SYSMODULE_RESERVED37               =$00f5;
 SCE_SYSMODULE_TEXT_TO_SPEECH           =$00f6;
 SCE_SYSMODULE_RESERVED38               =$00f8;
 SCE_SYSMODULE_RESERVED39               =$00f9;
 SCE_SYSMODULE_RESERVED40               =$00fa;
 SCE_SYSMODULE_BLUETOOTH_HID            =$00fb;
 SCE_SYSMODULE_RESERVED41               =$00fc;
 SCE_SYSMODULE_VR_SERVICE_DIALOG        =$00fd;
 SCE_SYSMODULE_JOB_MANAGER              =$00fe;
 SCE_SYSMODULE_RESERVED42               =$00ff;
 SCE_SYSMODULE_SOCIAL_SCREEN_DIALOG     =$0100;
 SCE_SYSMODULE_RESERVED43               =$0101;
 SCE_SYSMODULE_NP_TOOLKIT2              =$0102;
 SCE_SYSMODULE_RESERVED44               =$0103;
 SCE_SYSMODULE_RESERVED45               =$0104;
 SCE_SYSMODULE_RESERVED46               =$00f7;

 SCE_SYSMODULE_CES_CS                   =$010c;
 SCE_SYSMODULE_PLAYER_INVITATION_DIALOG =$010d;

 SCE_SYSMODULE_ERROR_INVALID_VALUE=-2141581312; // 0x805A1000
 SCE_SYSMODULE_ERROR_UNLOADED     =-2141581311; // 0x805A1001
 SCE_SYSMODULE_ERROR_FATAL        =-2141581057; // 0x805A10FF
 SCE_SYSMODULE_LOADED             =0;

function GetSysmoduleName(id:Word):RawByteString;
begin
  Case id of
   SCE_SYSMODULE_FIBER                    :Result:='SCE_SYSMODULE_FIBER';
   SCE_SYSMODULE_ULT                      :Result:='SCE_SYSMODULE_ULT';
   SCE_SYSMODULE_NGS2                     :Result:='SCE_SYSMODULE_NGS2';
   SCE_SYSMODULE_XML                      :Result:='SCE_SYSMODULE_XML';
   SCE_SYSMODULE_NP_UTILITY               :Result:='SCE_SYSMODULE_NP_UTILITY';
   SCE_SYSMODULE_VOICE                    :Result:='SCE_SYSMODULE_VOICE';
   SCE_SYSMODULE_VOICEQOS                 :Result:='SCE_SYSMODULE_VOICEQOS';
   SCE_SYSMODULE_NP_MATCHING2             :Result:='SCE_SYSMODULE_NP_MATCHING2';
   SCE_SYSMODULE_NP_SCORE_RANKING         :Result:='SCE_SYSMODULE_NP_SCORE_RANKING';
   SCE_SYSMODULE_RUDP                     :Result:='SCE_SYSMODULE_RUDP';
   SCE_SYSMODULE_NP_TUS                   :Result:='SCE_SYSMODULE_NP_TUS';
   SCE_SYSMODULE_FACE                     :Result:='SCE_SYSMODULE_FACE';
   SCE_SYSMODULE_SMART                    :Result:='SCE_SYSMODULE_SMART';
   SCE_SYSMODULE_GAME_LIVE_STREAMING      :Result:='SCE_SYSMODULE_GAME_LIVE_STREAMING';
   SCE_SYSMODULE_COMPANION_UTIL           :Result:='SCE_SYSMODULE_COMPANION_UTIL';
   SCE_SYSMODULE_PLAYGO                   :Result:='SCE_SYSMODULE_PLAYGO';
   SCE_SYSMODULE_FONT                     :Result:='SCE_SYSMODULE_FONT';
   SCE_SYSMODULE_VIDEO_RECORDING          :Result:='SCE_SYSMODULE_VIDEO_RECORDING';
   SCE_SYSMODULE_S3DCONVERSION            :Result:='SCE_SYSMODULE_S3DCONVERSION';
   SCE_SYSMODULE_AUDIODEC                 :Result:='SCE_SYSMODULE_AUDIODEC';
   SCE_SYSMODULE_JPEG_DEC                 :Result:='SCE_SYSMODULE_JPEG_DEC';
   SCE_SYSMODULE_JPEG_ENC                 :Result:='SCE_SYSMODULE_JPEG_ENC';
   SCE_SYSMODULE_PNG_DEC                  :Result:='SCE_SYSMODULE_PNG_DEC';
   SCE_SYSMODULE_PNG_ENC                  :Result:='SCE_SYSMODULE_PNG_ENC';
   SCE_SYSMODULE_VIDEODEC                 :Result:='SCE_SYSMODULE_VIDEODEC';
   SCE_SYSMODULE_MOVE                     :Result:='SCE_SYSMODULE_MOVE';
   SCE_SYSMODULE_PAD_TRACKER              :Result:='SCE_SYSMODULE_PAD_TRACKER';
   SCE_SYSMODULE_DEPTH                    :Result:='SCE_SYSMODULE_DEPTH';
   SCE_SYSMODULE_HAND                     :Result:='SCE_SYSMODULE_HAND';
   SCE_SYSMODULE_LIBIME                   :Result:='SCE_SYSMODULE_LIBIME';
   SCE_SYSMODULE_IME_DIALOG               :Result:='SCE_SYSMODULE_IME_DIALOG';
   SCE_SYSMODULE_NP_PARTY                 :Result:='SCE_SYSMODULE_NP_PARTY';
   SCE_SYSMODULE_FONT_FT                  :Result:='SCE_SYSMODULE_FONT_FT';
   SCE_SYSMODULE_FREETYPE_OT              :Result:='SCE_SYSMODULE_FREETYPE_OT';
   SCE_SYSMODULE_FREETYPE_OL              :Result:='SCE_SYSMODULE_FREETYPE_OL';
   SCE_SYSMODULE_FREETYPE_OPT_OL          :Result:='SCE_SYSMODULE_FREETYPE_OPT_OL';
   SCE_SYSMODULE_SCREEN_SHOT              :Result:='SCE_SYSMODULE_SCREEN_SHOT';
   SCE_SYSMODULE_NP_AUTH                  :Result:='SCE_SYSMODULE_NP_AUTH';
   SCE_SYSMODULE_SULPHA                   :Result:='SCE_SYSMODULE_SULPHA';
   SCE_SYSMODULE_SAVE_DATA_DIALOG         :Result:='SCE_SYSMODULE_SAVE_DATA_DIALOG';
   SCE_SYSMODULE_INVITATION_DIALOG        :Result:='SCE_SYSMODULE_INVITATION_DIALOG';
   SCE_SYSMODULE_DEBUG_KEYBOARD           :Result:='SCE_SYSMODULE_DEBUG_KEYBOARD';
   SCE_SYSMODULE_MESSAGE_DIALOG           :Result:='SCE_SYSMODULE_MESSAGE_DIALOG';
   SCE_SYSMODULE_AV_PLAYER                :Result:='SCE_SYSMODULE_AV_PLAYER';
   SCE_SYSMODULE_CONTENT_EXPORT           :Result:='SCE_SYSMODULE_CONTENT_EXPORT';
   SCE_SYSMODULE_AUDIO_3D                 :Result:='SCE_SYSMODULE_AUDIO_3D';
   SCE_SYSMODULE_NP_COMMERCE              :Result:='SCE_SYSMODULE_NP_COMMERCE';
   SCE_SYSMODULE_MOUSE                    :Result:='SCE_SYSMODULE_MOUSE';
   SCE_SYSMODULE_COMPANION_HTTPD          :Result:='SCE_SYSMODULE_COMPANION_HTTPD';
   SCE_SYSMODULE_WEB_BROWSER_DIALOG       :Result:='SCE_SYSMODULE_WEB_BROWSER_DIALOG';
   SCE_SYSMODULE_ERROR_DIALOG             :Result:='SCE_SYSMODULE_ERROR_DIALOG';
   SCE_SYSMODULE_NP_TROPHY                :Result:='SCE_SYSMODULE_NP_TROPHY';
   SCE_SYSMODULE_NP_SNS_FACEBOOK          :Result:='SCE_SYSMODULE_NP_SNS_FACEBOOK';
   SCE_SYSMODULE_MOVE_TRACKER             :Result:='SCE_SYSMODULE_MOVE_TRACKER';
   SCE_SYSMODULE_NP_PROFILE_DIALOG        :Result:='SCE_SYSMODULE_NP_PROFILE_DIALOG';
   SCE_SYSMODULE_NP_FRIEND_LIST_DIALOG    :Result:='SCE_SYSMODULE_NP_FRIEND_LIST_DIALOG';
   SCE_SYSMODULE_APP_CONTENT              :Result:='SCE_SYSMODULE_APP_CONTENT';
   SCE_SYSMODULE_NP_SIGNALING             :Result:='SCE_SYSMODULE_NP_SIGNALING';
   SCE_SYSMODULE_REMOTE_PLAY              :Result:='SCE_SYSMODULE_REMOTE_PLAY';
   SCE_SYSMODULE_USBD                     :Result:='SCE_SYSMODULE_USBD';
   SCE_SYSMODULE_GAME_CUSTOM_DATA_DIALOG  :Result:='SCE_SYSMODULE_GAME_CUSTOM_DATA_DIALOG';
   SCE_SYSMODULE_M4AAC_ENC                :Result:='SCE_SYSMODULE_M4AAC_ENC';
   SCE_SYSMODULE_AUDIODEC_CPU             :Result:='SCE_SYSMODULE_AUDIODEC_CPU';
   SCE_SYSMODULE_ZLIB                     :Result:='SCE_SYSMODULE_ZLIB';
   SCE_SYSMODULE_CONTENT_SEARCH           :Result:='SCE_SYSMODULE_CONTENT_SEARCH';
   SCE_SYSMODULE_DECI4H                   :Result:='SCE_SYSMODULE_DECI4H';
   SCE_SYSMODULE_HEAD_TRACKER             :Result:='SCE_SYSMODULE_HEAD_TRACKER';
   SCE_SYSMODULE_SYSTEM_GESTURE           :Result:='SCE_SYSMODULE_SYSTEM_GESTURE';
   SCE_SYSMODULE_VIDEODEC2                :Result:='SCE_SYSMODULE_VIDEODEC2';
   SCE_SYSMODULE_AT9_ENC                  :Result:='SCE_SYSMODULE_AT9_ENC';
   SCE_SYSMODULE_CONVERT_KEYCODE          :Result:='SCE_SYSMODULE_CONVERT_KEYCODE';
   SCE_SYSMODULE_SHARE_PLAY               :Result:='SCE_SYSMODULE_SHARE_PLAY';
   SCE_SYSMODULE_HMD                      :Result:='SCE_SYSMODULE_HMD';
   SCE_SYSMODULE_FACE_TRACKER             :Result:='SCE_SYSMODULE_FACE_TRACKER';
   SCE_SYSMODULE_HAND_TRACKER             :Result:='SCE_SYSMODULE_HAND_TRACKER';
   SCE_SYSMODULE_AUDIODEC_CPU_HEVAG       :Result:='SCE_SYSMODULE_AUDIODEC_CPU_HEVAG';
   SCE_SYSMODULE_LOGIN_DIALOG             :Result:='SCE_SYSMODULE_LOGIN_DIALOG';
   SCE_SYSMODULE_LOGIN_SERVICE            :Result:='SCE_SYSMODULE_LOGIN_SERVICE';
   SCE_SYSMODULE_SIGNIN_DIALOG            :Result:='SCE_SYSMODULE_SIGNIN_DIALOG';
   SCE_SYSMODULE_JSON2                    :Result:='SCE_SYSMODULE_JSON2';
   SCE_SYSMODULE_AUDIO_LATENCY_ESTIMATION :Result:='SCE_SYSMODULE_AUDIO_LATENCY_ESTIMATION';
   SCE_SYSMODULE_HMD_SETUP_DIALOG         :Result:='SCE_SYSMODULE_HMD_SETUP_DIALOG';
   SCE_SYSMODULE_VR_TRACKER               :Result:='SCE_SYSMODULE_VR_TRACKER';
   SCE_SYSMODULE_CONTENT_DELETE           :Result:='SCE_SYSMODULE_CONTENT_DELETE';
   SCE_SYSMODULE_IME_BACKEND              :Result:='SCE_SYSMODULE_IME_BACKEND';
   SCE_SYSMODULE_NET_CTL_AP_DIALOG        :Result:='SCE_SYSMODULE_NET_CTL_AP_DIALOG';
   SCE_SYSMODULE_PLAYGO_DIALOG            :Result:='SCE_SYSMODULE_PLAYGO_DIALOG';
   SCE_SYSMODULE_SOCIAL_SCREEN            :Result:='SCE_SYSMODULE_SOCIAL_SCREEN';
   SCE_SYSMODULE_EDIT_MP4                 :Result:='SCE_SYSMODULE_EDIT_MP4';
   SCE_SYSMODULE_TEXT_TO_SPEECH           :Result:='SCE_SYSMODULE_TEXT_TO_SPEECH';
   SCE_SYSMODULE_BLUETOOTH_HID            :Result:='SCE_SYSMODULE_BLUETOOTH_HID';
   SCE_SYSMODULE_VR_SERVICE_DIALOG        :Result:='SCE_SYSMODULE_VR_SERVICE_DIALOG';
   SCE_SYSMODULE_JOB_MANAGER              :Result:='SCE_SYSMODULE_JOB_MANAGER';
   SCE_SYSMODULE_SOCIAL_SCREEN_DIALOG     :Result:='SCE_SYSMODULE_SOCIAL_SCREEN_DIALOG';
   SCE_SYSMODULE_NP_TOOLKIT2              :Result:='SCE_SYSMODULE_NP_TOOLKIT2';

   SCE_SYSMODULE_CES_CS                   :Result:='SCE_SYSMODULE_CES_CS';
   SCE_SYSMODULE_PLAYER_INVITATION_DIALOG :Result:='SCE_SYSMODULE_PLAYER_INVITATION_DIALOG';
   else
    Result:=HexStr(id,4);
  end;
end;

