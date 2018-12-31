/* Track.c generated by valac 0.40.12, the Vala compiler
 * generated from Track.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define OBJECTS_TYPE_TRACK (objects_track_get_type ())
#define OBJECTS_TRACK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), OBJECTS_TYPE_TRACK, ObjectsTrack))
#define OBJECTS_TRACK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), OBJECTS_TYPE_TRACK, ObjectsTrackClass))
#define OBJECTS_IS_TRACK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), OBJECTS_TYPE_TRACK))
#define OBJECTS_IS_TRACK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), OBJECTS_TYPE_TRACK))
#define OBJECTS_TRACK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), OBJECTS_TYPE_TRACK, ObjectsTrackClass))

typedef struct _ObjectsTrack ObjectsTrack;
typedef struct _ObjectsTrackClass ObjectsTrackClass;
typedef struct _ObjectsTrackPrivate ObjectsTrackPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _ObjectsParamSpecTrack ObjectsParamSpecTrack;

struct _ObjectsTrack {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ObjectsTrackPrivate * priv;
	gint id;
	gchar* path;
	gchar* title;
	gchar* artist;
	gchar* genre;
	gchar* album;
	guint64 duration;
};

struct _ObjectsTrackClass {
	GTypeClass parent_class;
	void (*finalize) (ObjectsTrack *self);
};

struct _ObjectsParamSpecTrack {
	GParamSpec parent_instance;
};


static gpointer objects_track_parent_class = NULL;

gpointer objects_track_ref (gpointer instance);
void objects_track_unref (gpointer instance);
GParamSpec* objects_param_spec_track (const gchar* name,
                                      const gchar* nick,
                                      const gchar* blurb,
                                      GType object_type,
                                      GParamFlags flags);
void objects_value_set_track (GValue* value,
                              gpointer v_object);
void objects_value_take_track (GValue* value,
                               gpointer v_object);
gpointer objects_value_get_track (const GValue* value);
GType objects_track_get_type (void) G_GNUC_CONST;
ObjectsTrack* objects_track_new (gint id,
                                 const gchar* path,
                                 const gchar* title,
                                 const gchar* artist,
                                 const gchar* genre,
                                 const gchar* album,
                                 guint64 duration);
ObjectsTrack* objects_track_construct (GType object_type,
                                       gint id,
                                       const gchar* path,
                                       const gchar* title,
                                       const gchar* artist,
                                       const gchar* genre,
                                       const gchar* album,
                                       guint64 duration);
static void objects_track_finalize (ObjectsTrack * obj);


ObjectsTrack*
objects_track_construct (GType object_type,
                         gint id,
                         const gchar* path,
                         const gchar* title,
                         const gchar* artist,
                         const gchar* genre,
                         const gchar* album,
                         guint64 duration)
{
	ObjectsTrack* self = NULL;
	gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
#line 10 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	g_return_val_if_fail (path != NULL, NULL);
#line 10 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	g_return_val_if_fail (title != NULL, NULL);
#line 10 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	g_return_val_if_fail (artist != NULL, NULL);
#line 10 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	g_return_val_if_fail (genre != NULL, NULL);
#line 10 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	g_return_val_if_fail (album != NULL, NULL);
#line 10 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	self = (ObjectsTrack*) g_type_create_instance (object_type);
#line 17 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	self->id = id;
#line 18 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	_tmp0_ = g_strdup (path);
#line 18 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	_g_free0 (self->path);
#line 18 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	self->path = _tmp0_;
#line 19 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	_tmp1_ = g_strdup (title);
#line 19 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	_g_free0 (self->title);
#line 19 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	self->title = _tmp1_;
#line 20 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	_tmp2_ = g_strdup (artist);
#line 20 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	_g_free0 (self->artist);
#line 20 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	self->artist = _tmp2_;
#line 21 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	_tmp3_ = g_strdup (genre);
#line 21 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	_g_free0 (self->genre);
#line 21 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	self->genre = _tmp3_;
#line 22 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	_tmp4_ = g_strdup (album);
#line 22 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	_g_free0 (self->album);
#line 22 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	self->album = _tmp4_;
#line 23 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	self->duration = duration;
#line 10 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	return self;
#line 147 "Track.c"
}


ObjectsTrack*
objects_track_new (gint id,
                   const gchar* path,
                   const gchar* title,
                   const gchar* artist,
                   const gchar* genre,
                   const gchar* album,
                   guint64 duration)
{
#line 10 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	return objects_track_construct (OBJECTS_TYPE_TRACK, id, path, title, artist, genre, album, duration);
#line 162 "Track.c"
}


static void
objects_value_track_init (GValue* value)
{
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	value->data[0].v_pointer = NULL;
#line 171 "Track.c"
}


static void
objects_value_track_free_value (GValue* value)
{
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	if (value->data[0].v_pointer) {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		objects_track_unref (value->data[0].v_pointer);
#line 182 "Track.c"
	}
}


static void
objects_value_track_copy_value (const GValue* src_value,
                                GValue* dest_value)
{
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	if (src_value->data[0].v_pointer) {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		dest_value->data[0].v_pointer = objects_track_ref (src_value->data[0].v_pointer);
#line 195 "Track.c"
	} else {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		dest_value->data[0].v_pointer = NULL;
#line 199 "Track.c"
	}
}


static gpointer
objects_value_track_peek_pointer (const GValue* value)
{
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	return value->data[0].v_pointer;
#line 209 "Track.c"
}


static gchar*
objects_value_track_collect_value (GValue* value,
                                   guint n_collect_values,
                                   GTypeCValue* collect_values,
                                   guint collect_flags)
{
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	if (collect_values[0].v_pointer) {
#line 221 "Track.c"
		ObjectsTrack * object;
		object = collect_values[0].v_pointer;
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		if (object->parent_instance.g_class == NULL) {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 228 "Track.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 232 "Track.c"
		}
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		value->data[0].v_pointer = objects_track_ref (object);
#line 236 "Track.c"
	} else {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		value->data[0].v_pointer = NULL;
#line 240 "Track.c"
	}
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	return NULL;
#line 244 "Track.c"
}


static gchar*
objects_value_track_lcopy_value (const GValue* value,
                                 guint n_collect_values,
                                 GTypeCValue* collect_values,
                                 guint collect_flags)
{
	ObjectsTrack ** object_p;
	object_p = collect_values[0].v_pointer;
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	if (!object_p) {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 260 "Track.c"
	}
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	if (!value->data[0].v_pointer) {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		*object_p = NULL;
#line 266 "Track.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		*object_p = value->data[0].v_pointer;
#line 270 "Track.c"
	} else {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		*object_p = objects_track_ref (value->data[0].v_pointer);
#line 274 "Track.c"
	}
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	return NULL;
#line 278 "Track.c"
}


GParamSpec*
objects_param_spec_track (const gchar* name,
                          const gchar* nick,
                          const gchar* blurb,
                          GType object_type,
                          GParamFlags flags)
{
	ObjectsParamSpecTrack* spec;
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	g_return_val_if_fail (g_type_is_a (object_type, OBJECTS_TYPE_TRACK), NULL);
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	return G_PARAM_SPEC (spec);
#line 298 "Track.c"
}


gpointer
objects_value_get_track (const GValue* value)
{
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, OBJECTS_TYPE_TRACK), NULL);
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	return value->data[0].v_pointer;
#line 309 "Track.c"
}


void
objects_value_set_track (GValue* value,
                         gpointer v_object)
{
	ObjectsTrack * old;
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, OBJECTS_TYPE_TRACK));
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	old = value->data[0].v_pointer;
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	if (v_object) {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, OBJECTS_TYPE_TRACK));
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		value->data[0].v_pointer = v_object;
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		objects_track_ref (value->data[0].v_pointer);
#line 332 "Track.c"
	} else {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		value->data[0].v_pointer = NULL;
#line 336 "Track.c"
	}
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	if (old) {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		objects_track_unref (old);
#line 342 "Track.c"
	}
}


void
objects_value_take_track (GValue* value,
                          gpointer v_object)
{
	ObjectsTrack * old;
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, OBJECTS_TYPE_TRACK));
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	old = value->data[0].v_pointer;
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	if (v_object) {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, OBJECTS_TYPE_TRACK));
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		value->data[0].v_pointer = v_object;
#line 364 "Track.c"
	} else {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		value->data[0].v_pointer = NULL;
#line 368 "Track.c"
	}
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	if (old) {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		objects_track_unref (old);
#line 374 "Track.c"
	}
}


static void
objects_track_class_init (ObjectsTrackClass * klass)
{
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	objects_track_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	((ObjectsTrackClass *) klass)->finalize = objects_track_finalize;
#line 386 "Track.c"
}


static void
objects_track_instance_init (ObjectsTrack * self)
{
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	self->ref_count = 1;
#line 395 "Track.c"
}


static void
objects_track_finalize (ObjectsTrack * obj)
{
	ObjectsTrack * self;
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, OBJECTS_TYPE_TRACK, ObjectsTrack);
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	g_signal_handlers_destroy (self);
#line 3 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	_g_free0 (self->path);
#line 4 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	_g_free0 (self->title);
#line 5 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	_g_free0 (self->artist);
#line 6 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	_g_free0 (self->genre);
#line 7 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	_g_free0 (self->album);
#line 417 "Track.c"
}


GType
objects_track_get_type (void)
{
	static volatile gsize objects_track_type_id__volatile = 0;
	if (g_once_init_enter (&objects_track_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { objects_value_track_init, objects_value_track_free_value, objects_value_track_copy_value, objects_value_track_peek_pointer, "p", objects_value_track_collect_value, "p", objects_value_track_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (ObjectsTrackClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) objects_track_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ObjectsTrack), 0, (GInstanceInitFunc) objects_track_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType objects_track_type_id;
		objects_track_type_id = g_type_register_fundamental (g_type_fundamental_next (), "ObjectsTrack", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&objects_track_type_id__volatile, objects_track_type_id);
	}
	return objects_track_type_id__volatile;
}


gpointer
objects_track_ref (gpointer instance)
{
	ObjectsTrack * self;
	self = instance;
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	g_atomic_int_inc (&self->ref_count);
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	return instance;
#line 446 "Track.c"
}


void
objects_track_unref (gpointer instance)
{
	ObjectsTrack * self;
	self = instance;
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		OBJECTS_TRACK_GET_CLASS (self)->finalize (self);
#line 1 "/home/alain/Proyectos/byte/src/Objects/Track.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 461 "Track.c"
	}
}



