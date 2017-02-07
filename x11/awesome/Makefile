# $OpenBSD: Makefile,v 1.103 2016/10/17 19:33:38 jca Exp $

COMMENT=		highly configurable framework window manager

DISTNAME=		awesome-4.0
EXTRACT_SUFX=		.tar.xz
CATEGORIES=		x11

HOMEPAGE=		http://awesome.naquadah.org/

MAINTAINER=		David Coppa <dcoppa@openbsd.org>

# GPLv2+
PERMIT_PACKAGE_CDROM=	Yes

#WANTLIB=		X11 c cairo dbus-1 execinfo \
#			gdk_pixbuf-2.0 glib-2.0 gobject-2.0 \
#			${MODLUA_WANTLIB} m pthread \
#			startup-notification-1 xcb xcb-cursor \
#			xcb-icccm xcb-keysyms xcb-randr \
#			xcb-render xcb-shape xcb-util \
#			xcb-xinerama xcb-xtest xdg-basedir

WANTLIB += X11 c cairo dbus-1 execinfo gdk_pixbuf-2.0 glib-2.0
WANTLIB += gobject-2.0 ${MODLUA_WANTLIB} m startup-notification-1 xcb xcb-cursor
WANTLIB += xcb-icccm xcb-keysyms xcb-randr xcb-render xcb-shape
WANTLIB += xcb-util xcb-xinerama xcb-xkb xcb-xrm xcb-xtest xdg-basedir
WANTLIB += xkbcommon xkbcommon-x11

MASTER_SITES=		https://github.com/awesomeWM/awesome-releases/raw/master/

MODULES=		devel/cmake \
			devel/gettext \
			lang/lua

MODLUA_VERSION=		5.3

LIB_DEPENDS=		devel/libexecinfo \
			devel/startup-notification \
			graphics/cairo \
			graphics/gdk-pixbuf2 \
			${MODLUA_LIB_DEPENDS} \
			x11/dbus \
			x11/libxdg-basedir \
			x11/xkbcommon

MODLUA_BUILD_DEPENDS=	devel/lua-lgi

BUILD_DEPENDS=		devel/lualdoc \
			textproc/asciidoc>=8.4.5 \
			textproc/xmlto \
			graphics/ImageMagick \
			devel/doxygen

MODLUA_RUN_DEPENDS=	devel/lua-lgi

RUN_DEPENDS=		devel/pango \
			misc/rlwrap \
			shells/bash

CONFIGURE_ARGS=		-DCOMPRESS_MANPAGES=off \
			-DSYSCONFDIR=${SYSCONFDIR}

SEPARATE_BUILD=		No

NO_TEST=		Yes

pre-configure:
	ln -sf ${LOCALBASE}/bin/${MODLUA_FLAVOR} ${WRKDIR}/bin/lua
	${SUBST_CMD} ${WRKSRC}/awesomeConfig.cmake

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/awesome
	@mv ${WRKINST}${SYSCONFDIR}/xdg/awesome/rc.lua \
		${PREFIX}/share/examples/awesome/

.include <bsd.port.mk>
