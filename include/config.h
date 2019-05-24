#ifndef FFMPEG_CONFIG_H
#define FFMPEG_CONFIG_H
#define FFMPEG_CONFIGURATION "$(c_escape $FFMPEG_CONFIGURATION)"
#define FFMPEG_LICENSE "$(c_escape $license)"
#define CONFIG_THIS_YEAR 2018
#define FFMPEG_DATADIR "$(eval c_escape $datadir)"
#define AVCONV_DATADIR "$(eval c_escape $datadir)"
#define CC_IDENT "$(c_escape ${cc_ident:-Unknown compiler})"
#define av_restrict $restrict_keyword
#define EXTERN_PREFIX "${extern_prefix}"
#define EXTERN_ASM ${extern_prefix}
#define BUILDSUF "$build_suffix"
#define SLIBSUF "$SLIBSUF"
#define HAVE_MMX2 HAVE_MMXEXT
#define SWS_MAX_FILTER_SIZE $sws_max_filter_size
#define CONFIG_POSTPROC 0
#define CONFIG_AVUTIL 1
#define CONFIG_AVCODEC 1
#define CONFIG_AVFORMAT 1
#define CONFIG_AVDEVICE 1
#define CONFIG_AVFILTER 1
#define CONFIG_SWSCALE 1
#define CONFIG_SWRESAMPLE 1
#define CONFIG_AVRESAMPLE 0

//unsigned avresample_version(void)
//{
//	return 0;
//}
//const char* avresample_configuration()
//{
//	return "avresample_configuration";
//}
#endif