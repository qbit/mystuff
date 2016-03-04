# $OpenBSD: Makefile,v 1.1.1.1 2014/11/01 20:46:24 abieber Exp $

COMMENT =		filesystem events monitoring

MODPY_EGG_VERSION =	0.8.3
DISTNAME =		watchdog-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}

CATEGORIES =		sysutils

HOMEPAGE =		http://github.com/gorakhargosh/watchdog

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM =	Yes

LIB_DEPENDS =		sysutils/py-pathtools \
			devel/py-argh

MODULES =		lang/python

MODPY_SETUPTOOLS =	Yes

MASTER_SITES =		${MASTER_SITE_PYPI:=w/watchdog/}

NO_TEST =		Yes

.include <bsd.port.mk>
