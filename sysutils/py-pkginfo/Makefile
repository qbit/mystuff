# $OpenBSD: Makefile,v 1.1.1.1 2014/11/01 20:46:24 abieber Exp $

COMMENT =		query metadatdata from sdists/bdists/installed packages

MODPY_EGG_VERSION =	1.2.1
DISTNAME =		pkginfo-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}

CATEGORIES =		sysutils

HOMEPAGE =		http://pypi.python.org/pypi/pkginfo/

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM =	Yes

MODULES =		lang/python

MODPY_SETUPTOOLS =	Yes

MASTER_SITES =		${MASTER_SITE_PYPI:=p/pkginfo/}

NO_TEST =		Yes

.include <bsd.port.mk>
