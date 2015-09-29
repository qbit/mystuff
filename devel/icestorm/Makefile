# $OpenBSD: Makefile,v 1.2 2015/05/28 19:59:29 ajacoutot Exp $

V =			0.0.1

DISTNAME =		icestorm-${V}

COMMENT =		simple tools for analyzing and creating bitstream files
CATEGORIES =		devel

HOMEPAGE =		https://github.com/cliffordwolf/icestorm

# ISC
PERMIT_PACKAGE_CDROM =	Yes

GH_COMMIT =		c746cc670b03fa1ab45200e250d3f8544d78e292
GH_ACCOUNT =		cliffordwolf
GH_PROJECT =		icestorm

USE_GMAKE =		Yes

MAKE_ENV =		PYTHON="${MODPY_BIN}" \
			CXX="eg++"

MODULES =		gcc4

MODGCC4_ARCHS =		*
MODGCC4_LANGS =		c++

.include <bsd.port.mk>
