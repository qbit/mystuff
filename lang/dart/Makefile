# $OpenBSD: Makefile,v 1.188 2014/10/30 22:20:23 robert Exp $

ONLY_FOR_ARCHS=		i386 amd64
#DPB_PROPERTIES=		parallel

COMMENT=		Dart programming language

V=			1.7.2
DISTNAME=		dart-${V}

CATEGORIES=		lang

HOMEPAGE=		https://www.dartlang.org

MAINTAINER=		Aaron Bieber <aaron.bieber@openbsd.org>

EXTRACT_SUFX=		.tar.xz

FLAVORS=		debug
FLAVOR?=

# BSD-like
PERMIT_PACKAGE_CDROM=	patents
PERMIT_PACKAGE_FTP =	Yes

#MASTER_SITES=	https://commondatastorage.googleapis.com/chromium-browser-official/

MODULES=	lang/clang lang/python

MODCLANG_ARCHS=	*
MODCLANG_LANGS=	c++

MODPY_RUNDEP=	No

RUN_DEPENDS=	devel/xdg-utils \
		devel/desktop-file-utils \
		graphics/libexif \
		x11/gnome/libgnome-keyring \
		x11/gtk+2,-guic
BUILD_DEPENDS=	archivers/bzip2 \
		devel/gperf \
		devel/bison \
		devel/flex \
		devel/yasm \
		shells/bash \
		sysutils/flock \
		sysutils/pciutils \
		x11/gnome/libgnome-keyring
BUILD_DEPENDS+=	devel/ninja
LIB_DEPENDS=	devel/libexecinfo \
		devel/libusb1 \
		security/nss \
		devel/gconf2 \
		textproc/libxslt \
		x11/gtk+2 \
		audio/speex \
		print/cups,-libs

.include <bsd.own.mk>

# Set BUILDTYPE to Debug for a debug build
.if ${FLAVOR:Mdebug}
BUILDTYPE=	Debug
.else
BUILDTYPE=	Release
.endif

TEST_TARGET=	base_unittests

CONFIGURE_STYLE=none # prevent python MODULE from overriding do-build
CONFIGURE_ENV=	CPPFLAGS="-idirafter ${LOCALBASE}/include -idirafter ${X11BASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib -L${X11BASE}/lib" \
		GYP_GENERATORS=ninja

ALL_TARGET=	create_sdk

BUILDDIR=	${WRKSRC}/out/${BUILDTYPE}

GYP_DEFS=	-Duse_system_bzip2=1 \
		-Duse_system_libevent=1 \
		-Duse_system_libjpeg=1 \
		-Duse_system_libpng=1 \
		-Duse_system_libusb=1 \
		-Duse_system_libvpx=0 \
		-Duse_system_libxml=1 \
		-Duse_system_speex=1 \
		-Duse_system_sqlite=0 \
		-Duse_system_yasm=1 \
		-Duse_system_zlib=0 \
		-Duse_system_ssl=0 \
		-Duse_system_icu=0 \
		-Ddisable_nacl=1 \
		-Dlinux_breakpad=0 \
		-Duse_allocator=none \
		-Dlinux_strip_binary=0 \
		-Dlinux_use_heapchecker=0 \
		-Denable_webrtc=0 \
		-Denable_one_click_signin=1 \
		-Duse_kerberos=0 \
		-Duse_sndio=1 \
		-Duse_aura=1 \
nn		-Dclang=1 \
		-Dclang_use_chrome_plugins=0 \
		-Dwerror= \
		-Dno_gc_sections=1 \
		-Ddisable_fatal_linker_warnings=1 \
		-DOS=openbsd

.if ${FLAVOR:Mdebug}
GYP_DEFS+=	-Dremove_webcore_debug_symbols=1
MAKE_ENV+=	V=1
.endif

.include <bsd.port.mk>
