# $OpenBSD: Makefile,v 1.11 2015/04/02 14:21:14 jasper Exp $

COMMENT =	app for Bell 202 AFSK audio and APRS/AX.25 packets.

MODPY_EGG_VERSION = 0.0.3

DISTNAME =	afsk-${MODPY_EGG_VERSION}
PKGNAME =	py-${DISTNAME}

CATEGORIES =	comms

HOMEPAGE =	http://pypi.python.org/pypi/afsk

# BSD
PERMIT_PACKAGE_CDROM =	Yes

MODPY_PI =	Yes

MODULES =	lang/python

RUN_DEPENDS =	audio/py-audiogen \
		devel/py-bitarray

MODPY_SETUPTOOLS = Yes

NO_TEST =	Yes

.include <bsd.port.mk>
