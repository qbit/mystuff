# $OpenBSD: Makefile,v 1.9 2013/03/10 22:55:05 espie Exp $

COMMENT =	music server with MPD and Spotify support

MODPY_EGG_VERSION =	0.19.5
DISTNAME =		Mopidy-${MODPY_EGG_VERSION}
PKGNAME =		py-mopidy-${MODPY_EGG_VERSION}
CATEGORIES =		audio

HOMEPAGE =		https://pypi.python.org/pypi/Mopidy/0.19.4

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# Apache
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =		${MASTER_SITE_PYPI:=M/Mopidy/}

RUN_DEPENDS =		devel/py-pykka \
			multimedia/gstreamer-0.10/py-gstreamer \
			www/py-tornado

MODPY_SETUPTOOLS =	Yes
MODULES =		lang/python

NO_TEST =		Yes

.include <bsd.port.mk>
