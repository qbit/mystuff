# $OpenBSD: Makefile,v 1.7 2016/09/23 09:16:58 sthen Exp $

COMMENT =		open-source RSS/Atom feed reader for text terminals
DISTNAME =		newsbeuter-2.9
CATEGORIES =		www

HOMEPAGE =		http://newsbeuter.org/

# mit
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += c crypto curl iconv intl json-c m ncursesw pthread
WANTLIB += sqlite3 stfl xml2

MASTER_SITES =		http://newsbeuter.org/downloads/

BUILD_DEPENDS =		devel/gettext-tools
RUN_DEPENDS =		devel/gettext

MODULES =		gcc4

MODGCC4_LANGS = c c++
MODGCC4_ARCHS = *

LIB_DEPENDS =		databases/sqlite3 \
			devel/stfl \
			devel/json-c \
			textproc/libxml	\
			net/curl

MAKE_FLAGS =		CXX="${CXX}"
FAKE_FLAGS =		mandir=${PREFIX}/man

USE_GMAKE =		Yes
CONFIGURE_STYLE =	simple
CONFIGURE_SCRIPT =	config.sh

.include <bsd.port.mk>
