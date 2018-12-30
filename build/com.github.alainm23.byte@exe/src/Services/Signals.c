/* Signals.c generated by valac 0.40.12, the Vala compiler
 * generated from Signals.vala, do not modify */



#include <glib.h>
#include <glib-object.h>


#define SERVICES_TYPE_SIGNALS (services_signals_get_type ())
#define SERVICES_SIGNALS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SERVICES_TYPE_SIGNALS, ServicesSignals))
#define SERVICES_SIGNALS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SERVICES_TYPE_SIGNALS, ServicesSignalsClass))
#define SERVICES_IS_SIGNALS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SERVICES_TYPE_SIGNALS))
#define SERVICES_IS_SIGNALS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SERVICES_TYPE_SIGNALS))
#define SERVICES_SIGNALS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SERVICES_TYPE_SIGNALS, ServicesSignalsClass))

typedef struct _ServicesSignals ServicesSignals;
typedef struct _ServicesSignalsClass ServicesSignalsClass;
typedef struct _ServicesSignalsPrivate ServicesSignalsPrivate;
enum  {
	SERVICES_SIGNALS_0_PROPERTY,
	SERVICES_SIGNALS_NUM_PROPERTIES
};
static GParamSpec* services_signals_properties[SERVICES_SIGNALS_NUM_PROPERTIES];
enum  {
	SERVICES_SIGNALS_PLAY_TRACK_SIGNAL,
	SERVICES_SIGNALS_PAUSE_TRACK_SIGNAL,
	SERVICES_SIGNALS_READY_FILE_SIGNAL,
	SERVICES_SIGNALS_NUM_SIGNALS
};
static guint services_signals_signals[SERVICES_SIGNALS_NUM_SIGNALS] = {0};

struct _ServicesSignals {
	GObject parent_instance;
	ServicesSignalsPrivate * priv;
};

struct _ServicesSignalsClass {
	GObjectClass parent_class;
};


static gpointer services_signals_parent_class = NULL;

GType services_signals_get_type (void) G_GNUC_CONST;
ServicesSignals* services_signals_new (void);
ServicesSignals* services_signals_construct (GType object_type);


ServicesSignals*
services_signals_construct (GType object_type)
{
	ServicesSignals * self = NULL;
#line 7 "/home/alain/Proyectos/byte/src/Services/Signals.vala"
	self = (ServicesSignals*) g_object_new (object_type, NULL);
#line 7 "/home/alain/Proyectos/byte/src/Services/Signals.vala"
	return self;
#line 59 "Signals.c"
}


ServicesSignals*
services_signals_new (void)
{
#line 7 "/home/alain/Proyectos/byte/src/Services/Signals.vala"
	return services_signals_construct (SERVICES_TYPE_SIGNALS);
#line 68 "Signals.c"
}


static void
services_signals_class_init (ServicesSignalsClass * klass)
{
#line 1 "/home/alain/Proyectos/byte/src/Services/Signals.vala"
	services_signals_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/alain/Proyectos/byte/src/Services/Signals.vala"
	services_signals_signals[SERVICES_SIGNALS_PLAY_TRACK_SIGNAL] = g_signal_new ("play-track", SERVICES_TYPE_SIGNALS, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 1 "/home/alain/Proyectos/byte/src/Services/Signals.vala"
	services_signals_signals[SERVICES_SIGNALS_PAUSE_TRACK_SIGNAL] = g_signal_new ("pause-track", SERVICES_TYPE_SIGNALS, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 1 "/home/alain/Proyectos/byte/src/Services/Signals.vala"
	services_signals_signals[SERVICES_SIGNALS_READY_FILE_SIGNAL] = g_signal_new ("ready-file", SERVICES_TYPE_SIGNALS, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 83 "Signals.c"
}


static void
services_signals_instance_init (ServicesSignals * self)
{
}


GType
services_signals_get_type (void)
{
	static volatile gsize services_signals_type_id__volatile = 0;
	if (g_once_init_enter (&services_signals_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ServicesSignalsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) services_signals_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ServicesSignals), 0, (GInstanceInitFunc) services_signals_instance_init, NULL };
		GType services_signals_type_id;
		services_signals_type_id = g_type_register_static (G_TYPE_OBJECT, "ServicesSignals", &g_define_type_info, 0);
		g_once_init_leave (&services_signals_type_id__volatile, services_signals_type_id);
	}
	return services_signals_type_id__volatile;
}



