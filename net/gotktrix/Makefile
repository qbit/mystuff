# $OpenBSD$

COMMENT =	matrix client in Go and GTK4

MODGO_MODNAME =	github.com/diamondburned/gotktrix
MODGO_VERSION =	v0.1.3

DISTNAME =	gotktrix-${MODGO_VERSION}

CATEGORIES =	net

# AGPL3
PERMIT_PACKAGE =	Yes

WANTLIB += c cairo cairo-gobject gdk_pixbuf-2.0 gio-2.0 girepository-1.0
WANTLIB += glib-2.0 gobject-2.0 graphene-1.0 gtk-4 harfbuzz intl
WANTLIB += pango-1.0 pangocairo-1.0 pthread

MODULES =		lang/go

LIB_DEPENDS =		devel/glib2 \
			devel/gobject-introspection \
			devel/harfbuzz \
			devel/pango \
			graphics/cairo \
			x11/gtk+4

WRKDIST =		${WRKSRC}

.include "modules.inc"

.include <bsd.port.mk>
