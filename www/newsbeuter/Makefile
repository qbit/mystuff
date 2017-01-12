# $OpenBSD: Makefile,v 1.7 2016/09/23 09:16:58 sthen Exp $

COMMENT =		open-source RSS/Atom feed reader for text terminals
DISTNAME =		newsbeuter-2.9
CATEGORIES =		www

HOMEPAGE =		http://newsbeuter.org/

MAINTAINER =		Kyle Isom <kyle@tyrfingr.is>

# mit
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += c crypto curl json-c m ncursesw pthread sqlite3 stfl
WANTLIB += xml2

MASTER_SITES =		http://newsbeuter.org/downloads/

MODULES =		gcc4 \
			devel/gettext

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
