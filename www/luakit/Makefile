# $OpenBSD: Makefile,v 1.16 2016/07/05 17:00:21 jasper Exp $

BROKEN-powerpc=	help2man: can't get `--help' info from ./luakit

COMMENT=	fast, small, webkit based browser written in lua

# Date of the most recent upstream commit.
VERSION=	2017.01.31
GH_ACCOUNT=	aidanholm
GH_COMMIT=	5f2a71b92c9f96cab99da236a0f63314b20cb360
GH_PROJECT=	luakit

EPOCH=		0

DISTNAME=	luakit-${VERSION}

CATEGORIES=	www

MAINTAINER=	Aaron Bieber <abieber@openbsd.org>

HOMEPAGE=	https://github.com/aidanholm/luakit

# GPLv3
PERMIT_PACKAGE_CDROM=	Yes

USE_GMAKE=		Yes

WANTLIB += atk-1.0 c cairo cairo-gobject gdk-3 gdk_pixbuf-2.0
WANTLIB += gio-2.0 glib-2.0 gobject-2.0 gthread-2.0 gtk-3 intl
WANTLIB += javascriptcoregtk-4.0 luajit-5.1 pango-1.0 pangocairo-1.0
WANTLIB += pthread soup-2.4 sqlite3 webkit2gtk-4.0

MODULES =	lang/lua \
		gcc4

MODGCC4_LANGS =	c
MODGCC4_ARCHS =	*

BUILD_DEPENDS=	devel/help2man \
		devel/libunique

RUN_DEPENDS=	devel/luafs \
		textproc/lua-markdown

LIB_DEPENDS=	lang/luajit \
		www/webkitgtk4

# webkit browsing
RUN_DEPENDS +=	multimedia/gstreamer1/plugins-good \
		multimedia/gstreamer1/plugins-libav

MAKE_ENV+= USE_LUAJIT=1 USE_UNIQUE=1 INSTALLDIR=${PREFIX} \
	MANDIR=${PREFIX}

PIXDIR = ${PREFIX}/share/pixmaps
JQDIR = ${PREFIX}/share/luakit/lib


pre-configure:
	perl -pi -e 's,/usr/bin/env lua,${MODLUA_BIN},g' \
		${WRKSRC}/build-utils/gentokens.lua
	perl -pi -e 's,/usr/bin/env lua,${MODLUA_BIN},g' \
		${WRKSRC}/lib/markdown.lua

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/luakit ${PREFIX}/bin/luakit
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/luakit/
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/luakit/
	${INSTALL_DATA_DIR} ${PIXDIR}
	${INSTALL_DATA_DIR} ${JQDIR}
	${INSTALL_DATA_DIR} ${MODLUA_DATADIR}
	for file in README.md AUTHORS COPYING COPYING.GPLv3; do \
		${INSTALL_DATA} ${WRKSRC}/$$file ${PREFIX}/share/doc/luakit/; \
	done
	${INSTALL_DATA} ${WRKSRC}/extras/luakit.png ${PIXDIR}
	${INSTALL_MAN} ${WRKSRC}/luakit.1 ${PREFIX}/man/man1/luakit.1
	cp -R ${WRKSRC}/lib/*.lua ${MODLUA_DATADIR}
	# Already provided by dependency
	rm ${MODLUA_DATADIR}/markdown.lua
	cp -R ${WRKSRC}/lib/lousy ${MODLUA_DATADIR}
	cp -R ${WRKSRC}/lib/*.js ${JQDIR}
	cp -R ${WRKSRC}/config/*.lua ${PREFIX}/share/examples/luakit/

.include <bsd.port.mk>
