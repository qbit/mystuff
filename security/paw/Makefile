# $OpenBSD$

COMMENT =	graphical password manager backed by age

MODGO_MODNAME =	lucor.dev/paw
MODGO_VERSION =	v0.15.0

DISTNAME =	paw-${MODGO_VERSION}

CATEGORIES =	security

MAINTAINER =	Aaron Bieber <abieber@openbsd.org>

HOMEPAGE =	https://lucor.dev/paw

# MPLv2
PERMIT_PACKAGE =	Yes

MODULES =		lang/go

MODGO_LDFLAGS =		-X main.Version=${MODGO_VERSION}

.include "modules.inc"

.include <bsd.port.mk>
