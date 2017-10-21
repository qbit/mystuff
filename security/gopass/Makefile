# $OpenBSD: Makefile,v 1.2 2016/07/14 16:57:55 ajacoutot Exp $

COMMENT =	pass compatible password manager wirtten in go

GH_ACCOUNT =	justwatchcom
GH_PROJECT =	gopass
GH_TAGNAME =	v1.5.0

CATEGORIES =	security

HOMEPAGE =	https://github.com/justwatchcom/gopass

# MIT
PERMIT_PACKAGE_CDROM =	Yes

RUN_DEPENDS =	security/gnupg2

WANTLIB += c pthread

MODULES =	lang/go
MODGO_TYPE =	bin

.include <bsd.port.mk>
