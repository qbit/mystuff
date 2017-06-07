# $OpenBSD$

COMMENT =	tool for communicating with pebbles

GH_ACCOUNT =	pebble
GH_PROJECT =	pebble-tool
GH_COMMIT =	8b4771bbd7f8dacc8cbe776aaaf0aa704e152f9f

DISTNAME =	${GH_PROJECT}-2017.06.07

CATEGORIES =	pypi

HOMEPAGE =	https://github.com/pebble/pebble-tool

# MIT
PERMIT_PACKAGE_CDROM =	Yes

MODULES =		lang/python

RUN_DEPENDS =	devel/py-wheel,python3 \
		net/py-websocket-client,python3 \
		devel/py-serial,python3 \
		security/py-rsa,python3 \
		www/py-requests,python3 \
		pypi/py-PyQRCode,python3 \
		pypi/py-pypng,python3 \
		devel/py-asn1-modules,python3 \
		pypi/py-progressbar2,python3 \
		pypi/py-oauth2client,python3 \
		www/py-httplib2,python3 \
		pypi/py-libpebble2,python3 \
		devel/py-parsing,python3 \
		pypi/py-python-utils

FLAVOR ?=
FLAVORS =	python3

MODPY_SETUPTOOLS =	Yes

.include <bsd.port.mk>
