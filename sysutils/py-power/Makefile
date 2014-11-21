# $OpenBSD: Makefile,v 1.1.1.1 2014/11/01 20:46:24 abieber Exp $

COMMENT =		system power status information

MODPY_EGG_VERSION =	1.3
DISTNAME =		power-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}

CATEGORIES =		sysutils

HOMEPAGE =		https://github.com/Kentzo/Power

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =		${MASTER_SITE_PYPI:=p/power/}

MODULES =		lang/python

MODPY_SETUPTOOLS =	Yes

NO_TEST =		Yes

.include <bsd.port.mk>
