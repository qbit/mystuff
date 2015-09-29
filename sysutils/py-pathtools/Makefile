# $OpenBSD: Makefile,v 1.1.1.1 2014/11/01 20:46:24 abieber Exp $

COMMENT =		file system general utilities

MODPY_EGG_VERSION =	0.1.2
DISTNAME =		pathtools-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}

CATEGORIES =		sysutils

HOMEPAGE =		http://github.com/gorakhargosh/pathtools

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM =	Yes

MODULES =		lang/python

MODPY_SETUPTOOLS =	Yes

MASTER_SITES =		${MASTER_SITE_PYPI:=p/pathtools/}

NO_TEST =		Yes

.include <bsd.port.mk>
