/* HeaderBar.c generated by valac 0.40.12, the Vala compiler
 * generated from HeaderBar.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <float.h>
#include <math.h>


#define WIDGETS_TYPE_HEADER_BAR (widgets_header_bar_get_type ())
#define WIDGETS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WIDGETS_TYPE_HEADER_BAR, WidgetsHeaderBar))
#define WIDGETS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WIDGETS_TYPE_HEADER_BAR, WidgetsHeaderBarClass))
#define WIDGETS_IS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WIDGETS_TYPE_HEADER_BAR))
#define WIDGETS_IS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WIDGETS_TYPE_HEADER_BAR))
#define WIDGETS_HEADER_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WIDGETS_TYPE_HEADER_BAR, WidgetsHeaderBarClass))

typedef struct _WidgetsHeaderBar WidgetsHeaderBar;
typedef struct _WidgetsHeaderBarClass WidgetsHeaderBarClass;
typedef struct _WidgetsHeaderBarPrivate WidgetsHeaderBarPrivate;
enum  {
	WIDGETS_HEADER_BAR_0_PROPERTY,
	WIDGETS_HEADER_BAR_WINDOW_PROPERTY,
	WIDGETS_HEADER_BAR_NUM_PROPERTIES
};
static GParamSpec* widgets_header_bar_properties[WIDGETS_HEADER_BAR_NUM_PROPERTIES];
typedef struct _Block4Data Block4Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define SERVICES_TYPE_SIGNALS (services_signals_get_type ())
#define SERVICES_SIGNALS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SERVICES_TYPE_SIGNALS, ServicesSignals))
#define SERVICES_SIGNALS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SERVICES_TYPE_SIGNALS, ServicesSignalsClass))
#define SERVICES_IS_SIGNALS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SERVICES_TYPE_SIGNALS))
#define SERVICES_IS_SIGNALS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SERVICES_TYPE_SIGNALS))
#define SERVICES_SIGNALS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SERVICES_TYPE_SIGNALS, ServicesSignalsClass))

typedef struct _ServicesSignals ServicesSignals;
typedef struct _ServicesSignalsClass ServicesSignalsClass;

struct _WidgetsHeaderBar {
	GtkHeaderBar parent_instance;
	WidgetsHeaderBarPrivate * priv;
	gint repeat_index;
};

struct _WidgetsHeaderBarClass {
	GtkHeaderBarClass parent_class;
};

struct _WidgetsHeaderBarPrivate {
	GtkWindow* _window;
};

struct _Block4Data {
	int _ref_count_;
	WidgetsHeaderBar* self;
	GtkToggleButton* shuffle_button;
	GtkImage* shuffle_icon;
	GtkToggleButton* playback_button;
	GtkImage* playback_icon;
	GtkButton* repeat_button;
};


static gpointer widgets_header_bar_parent_class = NULL;
extern ServicesSignals* application_signals;

GType widgets_header_bar_get_type (void) G_GNUC_CONST;
#define WIDGETS_HEADER_BAR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), WIDGETS_TYPE_HEADER_BAR, WidgetsHeaderBarPrivate))
WidgetsHeaderBar* widgets_header_bar_new (GtkWindow* parent);
WidgetsHeaderBar* widgets_header_bar_construct (GType object_type,
                                                GtkWindow* parent);
GtkWindow* widgets_header_bar_get_window (WidgetsHeaderBar* self);
static void widgets_header_bar_set_window (WidgetsHeaderBar* self,
                                    GtkWindow* value);
static GObject * widgets_header_bar_constructor (GType type,
                                          guint n_construct_properties,
                                          GObjectConstructParam * construct_properties);
static Block4Data* block4_data_ref (Block4Data* _data4_);
static void block4_data_unref (void * _userdata_);
static void _widgets_header_bar___lambda4_ (Block4Data* _data4_);
static void __widgets_header_bar___lambda4__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                                gpointer self);
static void _widgets_header_bar___lambda5_ (Block4Data* _data4_);
GType services_signals_get_type (void) G_GNUC_CONST;
static void __widgets_header_bar___lambda5__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                                gpointer self);
static void _widgets_header_bar___lambda6_ (Block4Data* _data4_);
static void __widgets_header_bar___lambda6__gtk_button_clicked (GtkButton* _sender,
                                                         gpointer self);
static void widgets_header_bar_finalize (GObject * obj);
static void _vala_widgets_header_bar_get_property (GObject * object,
                                            guint property_id,
                                            GValue * value,
                                            GParamSpec * pspec);
static void _vala_widgets_header_bar_set_property (GObject * object,
                                            guint property_id,
                                            const GValue * value,
                                            GParamSpec * pspec);


WidgetsHeaderBar*
widgets_header_bar_construct (GType object_type,
                              GtkWindow* parent)
{
	WidgetsHeaderBar * self = NULL;
#line 5 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_return_val_if_fail (parent != NULL, NULL);
#line 6 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	self = (WidgetsHeaderBar*) g_object_new (object_type, "window", parent, "show-close-button", TRUE, NULL);
#line 5 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	return self;
#line 117 "HeaderBar.c"
}


WidgetsHeaderBar*
widgets_header_bar_new (GtkWindow* parent)
{
#line 5 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	return widgets_header_bar_construct (WIDGETS_TYPE_HEADER_BAR, parent);
#line 126 "HeaderBar.c"
}


GtkWindow*
widgets_header_bar_get_window (WidgetsHeaderBar* self)
{
	GtkWindow* result;
	GtkWindow* _tmp0_;
#line 2 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 2 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp0_ = self->priv->_window;
#line 2 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	result = _tmp0_;
#line 2 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	return result;
#line 143 "HeaderBar.c"
}


static void
widgets_header_bar_set_window (WidgetsHeaderBar* self,
                               GtkWindow* value)
{
#line 2 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_return_if_fail (self != NULL);
#line 2 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	if (widgets_header_bar_get_window (self) != value) {
#line 2 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		self->priv->_window = value;
#line 2 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		g_object_notify_by_pspec ((GObject *) self, widgets_header_bar_properties[WIDGETS_HEADER_BAR_WINDOW_PROPERTY]);
#line 159 "HeaderBar.c"
	}
}


static Block4Data*
block4_data_ref (Block4Data* _data4_)
{
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_atomic_int_inc (&_data4_->_ref_count_);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	return _data4_;
#line 171 "HeaderBar.c"
}


static void
block4_data_unref (void * _userdata_)
{
	Block4Data* _data4_;
	_data4_ = (Block4Data*) _userdata_;
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	if (g_atomic_int_dec_and_test (&_data4_->_ref_count_)) {
#line 182 "HeaderBar.c"
		WidgetsHeaderBar* self;
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		self = _data4_->self;
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_g_object_unref0 (_data4_->repeat_button);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_g_object_unref0 (_data4_->playback_icon);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_g_object_unref0 (_data4_->playback_button);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_g_object_unref0 (_data4_->shuffle_icon);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_g_object_unref0 (_data4_->shuffle_button);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_g_object_unref0 (self);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		g_slice_free (Block4Data, _data4_);
#line 200 "HeaderBar.c"
	}
}


static void
_widgets_header_bar___lambda4_ (Block4Data* _data4_)
{
	WidgetsHeaderBar* self;
	GtkToggleButton* _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
#line 68 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	self = _data4_->self;
#line 69 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp0_ = _data4_->shuffle_button;
#line 69 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp1_ = gtk_toggle_button_get_active (_tmp0_);
#line 69 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp2_ = _tmp1_;
#line 69 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	if (_tmp2_) {
#line 222 "HeaderBar.c"
		GtkImage* _tmp3_;
#line 70 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_tmp3_ = _data4_->shuffle_icon;
#line 70 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		g_object_set (_tmp3_, "icon-name", "media-playlist-shuffle-symbolic", NULL);
#line 228 "HeaderBar.c"
	} else {
		GtkImage* _tmp4_;
#line 72 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_tmp4_ = _data4_->shuffle_icon;
#line 72 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		g_object_set (_tmp4_, "icon-name", "media-playlist-consecutive-symbolic", NULL);
#line 235 "HeaderBar.c"
	}
}


static void
__widgets_header_bar___lambda4__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                           gpointer self)
{
#line 68 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_widgets_header_bar___lambda4_ (self);
#line 246 "HeaderBar.c"
}


static void
_widgets_header_bar___lambda5_ (Block4Data* _data4_)
{
	WidgetsHeaderBar* self;
	GtkToggleButton* _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
#line 76 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	self = _data4_->self;
#line 77 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp0_ = _data4_->playback_button;
#line 77 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp1_ = gtk_toggle_button_get_active (_tmp0_);
#line 77 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp2_ = _tmp1_;
#line 77 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	if (_tmp2_) {
#line 267 "HeaderBar.c"
		GtkImage* _tmp3_;
		ServicesSignals* _tmp4_;
#line 78 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_tmp3_ = _data4_->playback_icon;
#line 78 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		g_object_set (_tmp3_, "icon-name", "media-playback-pause-symbolic", NULL);
#line 80 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_tmp4_ = application_signals;
#line 80 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		g_signal_emit_by_name (_tmp4_, "play-track");
#line 278 "HeaderBar.c"
	} else {
		GtkImage* _tmp5_;
		ServicesSignals* _tmp6_;
#line 82 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_tmp5_ = _data4_->playback_icon;
#line 82 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		g_object_set (_tmp5_, "icon-name", "media-playback-start-symbolic", NULL);
#line 84 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_tmp6_ = application_signals;
#line 84 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		g_signal_emit_by_name (_tmp6_, "pause-track");
#line 290 "HeaderBar.c"
	}
}


static void
__widgets_header_bar___lambda5__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                           gpointer self)
{
#line 76 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_widgets_header_bar___lambda5_ (self);
#line 301 "HeaderBar.c"
}


static void
_widgets_header_bar___lambda6_ (Block4Data* _data4_)
{
	WidgetsHeaderBar* self;
	gint _tmp0_;
	gint _tmp1_;
	gint _tmp2_;
#line 88 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	self = _data4_->self;
#line 89 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp0_ = self->repeat_index;
#line 89 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	self->repeat_index = _tmp0_ + 1;
#line 91 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp1_ = self->repeat_index;
#line 91 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	if (_tmp1_ > 2) {
#line 92 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		self->repeat_index = 0;
#line 324 "HeaderBar.c"
	}
#line 95 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp2_ = self->repeat_index;
#line 95 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	if (_tmp2_ == 0) {
#line 330 "HeaderBar.c"
		GtkButton* _tmp3_;
		GtkImage* _tmp4_;
		GtkImage* _tmp5_;
		GtkButton* _tmp6_;
#line 96 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_tmp3_ = _data4_->repeat_button;
#line 96 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_tmp4_ = (GtkImage*) gtk_image_new_from_icon_name ("media-playlist-repeat-symbolic", (GtkIconSize) GTK_ICON_SIZE_MENU);
#line 96 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		g_object_ref_sink (_tmp4_);
#line 96 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_tmp5_ = _tmp4_;
#line 96 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		gtk_button_set_image (_tmp3_, (GtkWidget*) _tmp5_);
#line 96 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_g_object_unref0 (_tmp5_);
#line 97 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_tmp6_ = _data4_->repeat_button;
#line 97 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		gtk_widget_set_opacity ((GtkWidget*) _tmp6_, 0.7);
#line 351 "HeaderBar.c"
	} else {
		gint _tmp7_;
#line 98 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		_tmp7_ = self->repeat_index;
#line 98 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		if (_tmp7_ == 1) {
#line 358 "HeaderBar.c"
			GtkButton* _tmp8_;
			GtkImage* _tmp9_;
			GtkImage* _tmp10_;
			GtkButton* _tmp11_;
#line 99 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			_tmp8_ = _data4_->repeat_button;
#line 99 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			_tmp9_ = (GtkImage*) gtk_image_new_from_icon_name ("media-playlist-repeat-symbolic", (GtkIconSize) GTK_ICON_SIZE_MENU);
#line 99 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			g_object_ref_sink (_tmp9_);
#line 99 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			_tmp10_ = _tmp9_;
#line 99 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			gtk_button_set_image (_tmp8_, (GtkWidget*) _tmp10_);
#line 99 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			_g_object_unref0 (_tmp10_);
#line 100 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			_tmp11_ = _data4_->repeat_button;
#line 100 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			gtk_widget_set_opacity ((GtkWidget*) _tmp11_, (gdouble) 1);
#line 379 "HeaderBar.c"
		} else {
			GtkButton* _tmp12_;
			GtkImage* _tmp13_;
			GtkImage* _tmp14_;
			GtkButton* _tmp15_;
#line 102 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			_tmp12_ = _data4_->repeat_button;
#line 102 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			_tmp13_ = (GtkImage*) gtk_image_new_from_icon_name ("media-playlist-repeat-song-symbolic", (GtkIconSize) GTK_ICON_SIZE_MENU);
#line 102 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			g_object_ref_sink (_tmp13_);
#line 102 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			_tmp14_ = _tmp13_;
#line 102 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			gtk_button_set_image (_tmp12_, (GtkWidget*) _tmp14_);
#line 102 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			_g_object_unref0 (_tmp14_);
#line 103 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			_tmp15_ = _data4_->repeat_button;
#line 103 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
			gtk_widget_set_opacity ((GtkWidget*) _tmp15_, (gdouble) 1);
#line 401 "HeaderBar.c"
		}
	}
}


static void
__widgets_header_bar___lambda6__gtk_button_clicked (GtkButton* _sender,
                                                    gpointer self)
{
#line 88 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_widgets_header_bar___lambda6_ (self);
#line 413 "HeaderBar.c"
}


static GObject *
widgets_header_bar_constructor (GType type,
                                guint n_construct_properties,
                                GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	WidgetsHeaderBar * self;
	Block4Data* _data4_;
	GtkStyleContext* _tmp0_;
	GtkToggleButton* _tmp1_;
	GtkToggleButton* _tmp2_;
	GtkStyleContext* _tmp3_;
	GtkToggleButton* _tmp4_;
	GtkStyleContext* _tmp5_;
	GtkToggleButton* _tmp6_;
	GtkStyleContext* _tmp7_;
	GtkToggleButton* _tmp8_;
	GtkToggleButton* _tmp9_;
	GtkImage* _tmp10_;
	GtkImage* _tmp11_;
	GThemedIcon* _tmp12_;
	GThemedIcon* _tmp13_;
	GtkImage* _tmp14_;
	GtkToggleButton* _tmp15_;
	GtkImage* _tmp16_;
	GtkButton* backward_button = NULL;
	GtkButton* _tmp17_;
	GtkButton* _tmp18_;
	GtkToggleButton* _tmp19_;
	GtkToggleButton* _tmp20_;
	GtkStyleContext* _tmp21_;
	GtkToggleButton* _tmp22_;
	GtkStyleContext* _tmp23_;
	GtkToggleButton* _tmp24_;
	GtkStyleContext* _tmp25_;
	GtkToggleButton* _tmp26_;
	GtkToggleButton* _tmp27_;
	GtkImage* _tmp28_;
	GtkImage* _tmp29_;
	GThemedIcon* _tmp30_;
	GThemedIcon* _tmp31_;
	GtkImage* _tmp32_;
	GtkToggleButton* _tmp33_;
	GtkImage* _tmp34_;
	GtkButton* forward_button = NULL;
	GtkButton* _tmp35_;
	GtkButton* _tmp36_;
	GtkButton* _tmp37_;
	GtkButton* _tmp38_;
	GtkButton* _tmp39_;
	GtkButton* _tmp40_;
	GtkStyleContext* _tmp41_;
	GtkButton* _tmp42_;
	GtkButton* eq_button = NULL;
	GtkButton* _tmp43_;
	GtkButton* _tmp44_;
	GtkBox* main_box = NULL;
	GtkBox* _tmp45_;
	GtkBox* _tmp46_;
	GtkBox* _tmp47_;
	GtkToggleButton* _tmp48_;
	GtkBox* _tmp49_;
	GtkButton* _tmp50_;
	GtkBox* _tmp51_;
	GtkToggleButton* _tmp52_;
	GtkBox* _tmp53_;
	GtkButton* _tmp54_;
	GtkBox* _tmp55_;
	GtkButton* _tmp56_;
	GtkBox* _tmp57_;
	GtkButton* _tmp58_;
	GtkToggleButton* _tmp59_;
	GtkToggleButton* _tmp60_;
	GtkButton* _tmp61_;
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	parent_class = G_OBJECT_CLASS (widgets_header_bar_parent_class);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WIDGETS_TYPE_HEADER_BAR, WidgetsHeaderBar);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_data4_ = g_slice_new0 (Block4Data);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_data4_->_ref_count_ = 1;
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_data4_->self = g_object_ref (self);
#line 13 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp0_ = gtk_widget_get_style_context ((GtkWidget*) self);
#line 13 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_style_context_add_class (_tmp0_, "default-decoration");
#line 14 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_header_bar_set_decoration_layout ((GtkHeaderBar*) self, "close:menu");
#line 16 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp1_ = (GtkToggleButton*) gtk_toggle_button_new ();
#line 16 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp1_);
#line 16 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_data4_->shuffle_button = _tmp1_;
#line 17 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp2_ = _data4_->shuffle_button;
#line 17 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp3_ = gtk_widget_get_style_context ((GtkWidget*) _tmp2_);
#line 17 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_style_context_add_class (_tmp3_, "repeat-button");
#line 18 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp4_ = _data4_->shuffle_button;
#line 18 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp5_ = gtk_widget_get_style_context ((GtkWidget*) _tmp4_);
#line 18 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_style_context_remove_class (_tmp5_, "button");
#line 19 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp6_ = _data4_->shuffle_button;
#line 19 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp7_ = gtk_widget_get_style_context ((GtkWidget*) _tmp6_);
#line 19 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_style_context_add_class (_tmp7_, GTK_STYLE_CLASS_FLAT);
#line 20 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp8_ = _data4_->shuffle_button;
#line 20 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_widget_set_valign ((GtkWidget*) _tmp8_, GTK_ALIGN_CENTER);
#line 21 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp9_ = _data4_->shuffle_button;
#line 21 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_widget_set_can_focus ((GtkWidget*) _tmp9_, FALSE);
#line 23 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp10_ = (GtkImage*) gtk_image_new ();
#line 23 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp10_);
#line 23 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_data4_->shuffle_icon = _tmp10_;
#line 24 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp11_ = _data4_->shuffle_icon;
#line 24 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp12_ = (GThemedIcon*) g_themed_icon_new ("media-playlist-consecutive-symbolic");
#line 24 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp13_ = _tmp12_;
#line 24 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_object_set (_tmp11_, "gicon", (GIcon*) _tmp13_, NULL);
#line 24 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (_tmp13_);
#line 25 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp14_ = _data4_->shuffle_icon;
#line 25 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_image_set_pixel_size (_tmp14_, 16);
#line 27 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp15_ = _data4_->shuffle_button;
#line 27 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp16_ = _data4_->shuffle_icon;
#line 27 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_container_add ((GtkContainer*) _tmp15_, (GtkWidget*) _tmp16_);
#line 29 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp17_ = (GtkButton*) gtk_button_new_from_icon_name ("media-seek-backward-symbolic", (GtkIconSize) GTK_ICON_SIZE_LARGE_TOOLBAR);
#line 29 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp17_);
#line 29 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	backward_button = _tmp17_;
#line 30 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp18_ = backward_button;
#line 30 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_widget_set_can_focus ((GtkWidget*) _tmp18_, FALSE);
#line 32 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp19_ = (GtkToggleButton*) gtk_toggle_button_new ();
#line 32 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp19_);
#line 32 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_data4_->playback_button = _tmp19_;
#line 33 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp20_ = _data4_->playback_button;
#line 33 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp21_ = gtk_widget_get_style_context ((GtkWidget*) _tmp20_);
#line 33 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_style_context_add_class (_tmp21_, "repeat-button");
#line 34 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp22_ = _data4_->playback_button;
#line 34 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp23_ = gtk_widget_get_style_context ((GtkWidget*) _tmp22_);
#line 34 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_style_context_remove_class (_tmp23_, "button");
#line 35 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp24_ = _data4_->playback_button;
#line 35 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp25_ = gtk_widget_get_style_context ((GtkWidget*) _tmp24_);
#line 35 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_style_context_add_class (_tmp25_, GTK_STYLE_CLASS_FLAT);
#line 36 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp26_ = _data4_->playback_button;
#line 36 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_widget_set_valign ((GtkWidget*) _tmp26_, GTK_ALIGN_CENTER);
#line 37 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp27_ = _data4_->playback_button;
#line 37 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_widget_set_can_focus ((GtkWidget*) _tmp27_, FALSE);
#line 39 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp28_ = (GtkImage*) gtk_image_new ();
#line 39 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp28_);
#line 39 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_data4_->playback_icon = _tmp28_;
#line 40 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp29_ = _data4_->playback_icon;
#line 40 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp30_ = (GThemedIcon*) g_themed_icon_new ("media-playback-start-symbolic");
#line 40 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp31_ = _tmp30_;
#line 40 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_object_set (_tmp29_, "gicon", (GIcon*) _tmp31_, NULL);
#line 40 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (_tmp31_);
#line 41 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp32_ = _data4_->playback_icon;
#line 41 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_image_set_pixel_size (_tmp32_, 24);
#line 43 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp33_ = _data4_->playback_button;
#line 43 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp34_ = _data4_->playback_icon;
#line 43 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_container_add ((GtkContainer*) _tmp33_, (GtkWidget*) _tmp34_);
#line 45 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp35_ = (GtkButton*) gtk_button_new_from_icon_name ("media-seek-forward-symbolic", (GtkIconSize) GTK_ICON_SIZE_LARGE_TOOLBAR);
#line 45 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp35_);
#line 45 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	forward_button = _tmp35_;
#line 46 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp36_ = forward_button;
#line 46 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_widget_set_can_focus ((GtkWidget*) _tmp36_, FALSE);
#line 48 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp37_ = (GtkButton*) gtk_button_new_from_icon_name ("media-playlist-repeat-symbolic", (GtkIconSize) GTK_ICON_SIZE_MENU);
#line 48 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp37_);
#line 48 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_data4_->repeat_button = _tmp37_;
#line 49 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp38_ = _data4_->repeat_button;
#line 49 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_widget_set_opacity ((GtkWidget*) _tmp38_, 0.7);
#line 50 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp39_ = _data4_->repeat_button;
#line 50 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_widget_set_valign ((GtkWidget*) _tmp39_, GTK_ALIGN_CENTER);
#line 51 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp40_ = _data4_->repeat_button;
#line 51 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp41_ = gtk_widget_get_style_context ((GtkWidget*) _tmp40_);
#line 51 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_style_context_add_class (_tmp41_, GTK_STYLE_CLASS_FLAT);
#line 52 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp42_ = _data4_->repeat_button;
#line 52 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_widget_set_can_focus ((GtkWidget*) _tmp42_, FALSE);
#line 54 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp43_ = (GtkButton*) gtk_button_new_from_icon_name ("media-eq-symbolic", (GtkIconSize) GTK_ICON_SIZE_MENU);
#line 54 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp43_);
#line 54 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	eq_button = _tmp43_;
#line 55 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp44_ = eq_button;
#line 55 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_widget_set_can_focus ((GtkWidget*) _tmp44_, FALSE);
#line 57 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp45_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);
#line 57 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp45_);
#line 57 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	main_box = _tmp45_;
#line 58 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp46_ = main_box;
#line 58 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_box_set_spacing (_tmp46_, 6);
#line 59 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp47_ = main_box;
#line 59 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp48_ = _data4_->shuffle_button;
#line 59 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_box_pack_start (_tmp47_, (GtkWidget*) _tmp48_, FALSE, FALSE, (guint) 24);
#line 60 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp49_ = main_box;
#line 60 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp50_ = backward_button;
#line 60 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_box_pack_start (_tmp49_, (GtkWidget*) _tmp50_, FALSE, FALSE, (guint) 0);
#line 61 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp51_ = main_box;
#line 61 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp52_ = _data4_->playback_button;
#line 61 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_box_pack_start (_tmp51_, (GtkWidget*) _tmp52_, FALSE, FALSE, (guint) 0);
#line 62 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp53_ = main_box;
#line 62 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp54_ = forward_button;
#line 62 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_box_pack_start (_tmp53_, (GtkWidget*) _tmp54_, FALSE, FALSE, (guint) 0);
#line 63 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp55_ = main_box;
#line 63 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp56_ = _data4_->repeat_button;
#line 63 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_box_pack_start (_tmp55_, (GtkWidget*) _tmp56_, FALSE, FALSE, (guint) 24);
#line 65 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp57_ = main_box;
#line 65 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_header_bar_set_custom_title ((GtkHeaderBar*) self, (GtkWidget*) _tmp57_);
#line 66 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp58_ = eq_button;
#line 66 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	gtk_header_bar_pack_end ((GtkHeaderBar*) self, (GtkWidget*) _tmp58_);
#line 68 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp59_ = _data4_->shuffle_button;
#line 68 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_signal_connect_data (_tmp59_, "toggled", (GCallback) __widgets_header_bar___lambda4__gtk_toggle_button_toggled, block4_data_ref (_data4_), (GClosureNotify) block4_data_unref, 0);
#line 76 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp60_ = _data4_->playback_button;
#line 76 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_signal_connect_data (_tmp60_, "toggled", (GCallback) __widgets_header_bar___lambda5__gtk_toggle_button_toggled, block4_data_ref (_data4_), (GClosureNotify) block4_data_unref, 0);
#line 88 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_tmp61_ = _data4_->repeat_button;
#line 88 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_signal_connect_data (_tmp61_, "clicked", (GCallback) __widgets_header_bar___lambda6__gtk_button_clicked, block4_data_ref (_data4_), (GClosureNotify) block4_data_unref, 0);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (main_box);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (eq_button);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (forward_button);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (backward_button);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	block4_data_unref (_data4_);
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	_data4_ = NULL;
#line 12 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	return obj;
#line 754 "HeaderBar.c"
}


static void
widgets_header_bar_class_init (WidgetsHeaderBarClass * klass)
{
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	widgets_header_bar_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_type_class_add_private (klass, sizeof (WidgetsHeaderBarPrivate));
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_widgets_header_bar_get_property;
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_widgets_header_bar_set_property;
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	G_OBJECT_CLASS (klass)->constructor = widgets_header_bar_constructor;
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	G_OBJECT_CLASS (klass)->finalize = widgets_header_bar_finalize;
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_HEADER_BAR_WINDOW_PROPERTY, widgets_header_bar_properties[WIDGETS_HEADER_BAR_WINDOW_PROPERTY] = g_param_spec_object ("window", "window", "window", gtk_window_get_type (), G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 775 "HeaderBar.c"
}


static void
widgets_header_bar_instance_init (WidgetsHeaderBar * self)
{
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	self->priv = WIDGETS_HEADER_BAR_GET_PRIVATE (self);
#line 3 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	self->repeat_index = 0;
#line 786 "HeaderBar.c"
}


static void
widgets_header_bar_finalize (GObject * obj)
{
	WidgetsHeaderBar * self;
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WIDGETS_TYPE_HEADER_BAR, WidgetsHeaderBar);
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	G_OBJECT_CLASS (widgets_header_bar_parent_class)->finalize (obj);
#line 798 "HeaderBar.c"
}


GType
widgets_header_bar_get_type (void)
{
	static volatile gsize widgets_header_bar_type_id__volatile = 0;
	if (g_once_init_enter (&widgets_header_bar_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (WidgetsHeaderBarClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) widgets_header_bar_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (WidgetsHeaderBar), 0, (GInstanceInitFunc) widgets_header_bar_instance_init, NULL };
		GType widgets_header_bar_type_id;
		widgets_header_bar_type_id = g_type_register_static (gtk_header_bar_get_type (), "WidgetsHeaderBar", &g_define_type_info, 0);
		g_once_init_leave (&widgets_header_bar_type_id__volatile, widgets_header_bar_type_id);
	}
	return widgets_header_bar_type_id__volatile;
}


static void
_vala_widgets_header_bar_get_property (GObject * object,
                                       guint property_id,
                                       GValue * value,
                                       GParamSpec * pspec)
{
	WidgetsHeaderBar * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, WIDGETS_TYPE_HEADER_BAR, WidgetsHeaderBar);
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	switch (property_id) {
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		case WIDGETS_HEADER_BAR_WINDOW_PROPERTY:
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		g_value_set_object (value, widgets_header_bar_get_window (self));
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		break;
#line 832 "HeaderBar.c"
		default:
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		break;
#line 838 "HeaderBar.c"
	}
}


static void
_vala_widgets_header_bar_set_property (GObject * object,
                                       guint property_id,
                                       const GValue * value,
                                       GParamSpec * pspec)
{
	WidgetsHeaderBar * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, WIDGETS_TYPE_HEADER_BAR, WidgetsHeaderBar);
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
	switch (property_id) {
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		case WIDGETS_HEADER_BAR_WINDOW_PROPERTY:
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		widgets_header_bar_set_window (self, g_value_get_object (value));
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		break;
#line 859 "HeaderBar.c"
		default:
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 1 "/home/alain/Proyectos/byte/src/Widgets/HeaderBar.vala"
		break;
#line 865 "HeaderBar.c"
	}
}



