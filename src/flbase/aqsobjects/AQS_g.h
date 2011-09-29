/***************************************************************************
 AQS_g.h
 -------------------
 begin                : 28/04/2011
 copyright            : (C) 2003-2011 by InfoSiAL S.L.
 email                : mail@infosial.com
 ***************************************************************************/
/***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; version 2 of the License.               *
 ***************************************************************************/
/***************************************************************************
 Este  programa es software libre. Puede redistribuirlo y/o modificarlo
 bajo  los  términos  de  la  Licencia  Pública General de GNU   en  su
 versión 2, publicada  por  la  Free  Software Foundation.
 ***************************************************************************/

#ifndef AQS_G_H_
#define AQS_G_H_

#include "AQSVoidPtr_p.h"
#include "AQSEvent_p.h"
#include "AQSObject_p.h"
#include "AQSAbstractMemArray_p.h"
#include "AQSActionGroup_p.h"
#include "AQSActionMD_p.h"
#include "AQSAction_p.h"
#include "AQSApplication_p.h"
#include "AQSBoxLayout_p.h"
#include "AQSBrush_p.h"
#include "AQSBuffer_p.h"
#include "AQSButtonGroup_p.h"
#include "AQSButton_p.h"
#include "AQSByteArray_p.h"
#include "AQSCheckBox_p.h"
#include "AQSCheckListItem_p.h"
#include "AQSCheckTableItem_p.h"
#include "AQSChildEvent_p.h"
#include "AQSCloseEvent_p.h"
#include "AQSColorDrag_p.h"
#include "AQSColor_p.h"
#include "AQSComboBox_p.h"
#include "AQSComboTableItem_p.h"
#include "AQSCompilerQSA_p.h"
#include "AQSContextMenuEvent_p.h"
#include "AQSCustomEvent_p.h"
#include "AQSDataStream_p.h"
#include "AQSDataTableDB_p.h"
#include "AQSDataTable_p.h"
#include "AQSDateEdit_p.h"
#include "AQSDialog_p.h"
#include "AQSDial_p.h"
#include "AQSDigiDoc_p.h"
#include "AQSDockArea_p.h"
#include "AQSDockWindow_p.h"
#include "AQSDomAttr_p.h"
#include "AQSDomCDATASection_p.h"
#include "AQSDomCharacterData_p.h"
#include "AQSDomComment_p.h"
#include "AQSDomDocumentFragment_p.h"
#include "AQSDomDocument_p.h"
#include "AQSDomDocumentType_p.h"
#include "AQSDomElement_p.h"
#include "AQSDomEntity_p.h"
#include "AQSDomEntityReference_p.h"
#include "AQSDomImplementation_p.h"
#include "AQSDomNamedNodeMap_p.h"
#include "AQSDomNodeList_p.h"
#include "AQSDomNode_p.h"
#include "AQSDomNotation_p.h"
#include "AQSDomProcessingInstruction_p.h"
#include "AQSDomText_p.h"
#include "AQSDragEnterEvent_p.h"
#include "AQSDragLeaveEvent_p.h"
#include "AQSDragMoveEvent_p.h"
#include "AQSDragObject_p.h"
#include "AQSDropEvent_p.h"
#include "AQSEventLoop_p.h"
#include "AQSFieldDB_p.h"
#include "AQSFieldMD_p.h"
#include "AQSFocusEvent_p.h"
#include "AQSFontMetrics_p.h"
#include "AQSFormDB_p.h"
#include "AQSFormRecordDB_p.h"
#include "AQSFormSearchDB_p.h"
#include "AQSFrame_p.h"
#include "AQSGroupBox_p.h"
#include "AQSHBoxLayout_p.h"
#include "AQSHButtonGroup_p.h"
#include "AQSHeader_p.h"
#include "AQSHGroupBox_p.h"
#include "AQSHideEvent_p.h"
#include "AQSHostAddress_p.h"
#include "AQSHttpHeader_p.h"
#include "AQSHttp_p.h"
#include "AQSHttpRequestHeader_p.h"
#include "AQSHttpResponseHeader_p.h"
#include "AQSIconDragEvent_p.h"
#include "AQSIconDragItem_p.h"
#include "AQSIconDrag_p.h"
#include "AQSIconSet_p.h"
#include "AQSIconViewItem_p.h"
#include "AQSIconView_p.h"
#include "AQSImageDrag_p.h"
#include "AQSImage_p.h"
#include "AQSIMEvent_p.h"
#include "AQSIODevice_p.h"
#include "AQSKeyEvent_p.h"
#include "AQSLabel_p.h"
#include "AQSLayout_p.h"
#include "AQSLineEdit_p.h"
#include "AQSListBoxItem_p.h"
#include "AQSListBox_p.h"
#include "AQSListBoxPixmap_p.h"
#include "AQSListBoxText_p.h"
#include "AQSListViewItem_p.h"
#include "AQSListView_p.h"
#include "AQSMainWindow_p.h"
#include "AQSManagerModules_p.h"
#include "AQSManager_p.h"
#include "AQSMenuBar_p.h"
#include "AQSMouseEvent_p.h"
#include "AQSMoveEvent_p.h"
#include "AQSNetworkOperation_p.h"
#include "AQSNetworkProtocol_p.h"
#include "AQSPackager_p.h"
#include "AQSPainter_p.h"
#include "AQSPaintEvent_p.h"
#include "AQSPen_p.h"
#include "AQSPicture_p.h"
#include "AQSPixmap_p.h"
#include "AQSPointArray_p.h"
#include "AQSPopupMenu_p.h"
#include "AQSPrinter_p.h"
#include "AQSProgressBar_p.h"
#include "AQSProgressDialog_p.h"
#include "AQSPushButton_p.h"
#include "AQSRadioButton_p.h"
#include "AQSRegion_p.h"
#include "AQSRelationMD_p.h"
#include "AQSResizeEvent_p.h"
#include "AQSScrollView_p.h"
#include "AQSSEditor_p.h"
#include "AQSSettings_p.h"
#include "AQSShowEvent_p.h"
#include "AQSSignalMapper_p.h"
#include "AQSSocketNotifier_p.h"
#include "AQSSpinBox_p.h"
#include "AQSSProject_p.h"
#include "AQSSqlCursor_p.h"
#include "AQSSqlDatabase_p.h"
#include "AQSSqlQuery_p.h"
#include "AQSSScript_p.h"
#include "AQSStatusBar_p.h"
#include "AQSStoredDrag_p.h"
#include "AQSTabBar_p.h"
#include "AQSTableDB_p.h"
#include "AQSTableItem_p.h"
#include "AQSTableMD_p.h"
#include "AQSTable_p.h"
#include "AQSTab_p.h"
#include "AQSTabWidget_p.h"
#include "AQSTextDrag_p.h"
#include "AQSTextEdit_p.h"
#include "AQSTextStream_p.h"
#include "AQSTimeEdit_p.h"
#include "AQSTimerEvent_p.h"
#include "AQSTimer_p.h"
#include "AQSToolBar_p.h"
#include "AQSToolBox_p.h"
#include "AQSToolButton_p.h"
#include "AQSUnpacker_p.h"
#include "AQSUriDrag_p.h"
#include "AQSUrlOperator_p.h"
#include "AQSVBoxLayout_p.h"
#include "AQSVButtonGroup_p.h"
#include "AQSVGroupBox_p.h"
#include "AQSWheelEvent_p.h"
#include "AQSWidget_p.h"
#include "AQSWidgetStack_p.h"
#include "AQSWizard_p.h"
#include "AQSWMatrix_p.h"

#define  AQ_GEN_REG_WRAP \
         AQ_REG_WRAP(ActionGroup); \
         AQ_REG_WRAP_AQOBJECT(ActionMD); \
         AQ_REG_WRAP(Action); \
         AQ_REG_WRAP(BoxLayout); \
         AQ_REG_WRAP(Brush); \
         AQ_REG_WRAP(Buffer); \
         AQ_REG_WRAP(ButtonGroup); \
         AQ_REG_WRAP(Button); \
         AQ_REG_WRAP(ByteArray); \
         AQ_REG_WRAP(CheckBox); \
         AQ_REG_WRAP(CheckListItem); \
         AQ_REG_WRAP(CheckTableItem); \
         AQ_REG_WRAP(ChildEvent); \
         AQ_REG_WRAP(CloseEvent); \
         AQ_REG_WRAP(ColorDrag); \
         AQ_REG_WRAP(Color); \
         AQ_REG_WRAP(ComboBox); \
         AQ_REG_WRAP(ComboTableItem); \
         AQ_REG_WRAP_AQOBJECT(CompilerQSA); \
         AQ_REG_WRAP(ContextMenuEvent); \
         AQ_REG_WRAP(CustomEvent); \
         AQ_REG_WRAP(DataStream); \
         AQ_REG_WRAP_AQOBJECT(DataTableDB); \
         AQ_REG_WRAP(DataTable); \
         AQ_REG_WRAP(DateEdit); \
         AQ_REG_WRAP(Dialog); \
         AQ_REG_WRAP(Dial); \
         AQ_REG_WRAP_AQOBJECT(DigiDoc); \
         AQ_REG_WRAP(DockArea); \
         AQ_REG_WRAP(DockWindow); \
         AQ_REG_WRAP(DomAttr); \
         AQ_REG_WRAP(DomCDATASection); \
         AQ_REG_WRAP(DomCharacterData); \
         AQ_REG_WRAP(DomComment); \
         AQ_REG_WRAP(DomDocumentFragment); \
         AQ_REG_WRAP(DomDocument); \
         AQ_REG_WRAP(DomDocumentType); \
         AQ_REG_WRAP(DomElement); \
         AQ_REG_WRAP(DomEntity); \
         AQ_REG_WRAP(DomEntityReference); \
         AQ_REG_WRAP(DomImplementation); \
         AQ_REG_WRAP(DomNamedNodeMap); \
         AQ_REG_WRAP(DomNodeList); \
         AQ_REG_WRAP(DomNode); \
         AQ_REG_WRAP(DomNotation); \
         AQ_REG_WRAP(DomProcessingInstruction); \
         AQ_REG_WRAP(DomText); \
         AQ_REG_WRAP(DragEnterEvent); \
         AQ_REG_WRAP(DragLeaveEvent); \
         AQ_REG_WRAP(DragMoveEvent); \
         AQ_REG_WRAP(DragObject); \
         AQ_REG_WRAP(DropEvent); \
         AQ_REG_WRAP(EventLoop); \
         AQ_REG_WRAP(Event); \
         AQ_REG_WRAP_AQOBJECT(FieldDB); \
         AQ_REG_WRAP_AQOBJECT(FieldMD); \
         AQ_REG_WRAP(FocusEvent); \
         AQ_REG_WRAP(FontMetrics); \
         AQ_REG_WRAP_AQOBJECT(FormDB); \
         AQ_REG_WRAP_AQOBJECT(FormRecordDB); \
         AQ_REG_WRAP_AQOBJECT(FormSearchDB); \
         AQ_REG_WRAP(Frame); \
         AQ_REG_WRAP(GroupBox); \
         AQ_REG_WRAP(HBoxLayout); \
         AQ_REG_WRAP(HButtonGroup); \
         AQ_REG_WRAP(Header); \
         AQ_REG_WRAP(HGroupBox); \
         AQ_REG_WRAP(HideEvent); \
         AQ_REG_WRAP(HostAddress); \
         AQ_REG_WRAP(HttpHeader); \
         AQ_REG_WRAP(Http); \
         AQ_REG_WRAP(HttpRequestHeader); \
         AQ_REG_WRAP(HttpResponseHeader); \
         AQ_REG_WRAP(IconDragEvent); \
         AQ_REG_WRAP(IconDragItem); \
         AQ_REG_WRAP(IconDrag); \
         AQ_REG_WRAP(IconSet); \
         AQ_REG_WRAP(IconViewItem); \
         AQ_REG_WRAP(IconView); \
         AQ_REG_WRAP(ImageDrag); \
         AQ_REG_WRAP(Image); \
         AQ_REG_WRAP(IMEvent); \
         AQ_REG_WRAP(IODevice); \
         AQ_REG_WRAP(KeyEvent); \
         AQ_REG_WRAP(Label); \
         AQ_REG_WRAP(Layout); \
         AQ_REG_WRAP(LineEdit); \
         AQ_REG_WRAP(ListBoxItem); \
         AQ_REG_WRAP(ListBox); \
         AQ_REG_WRAP(ListBoxPixmap); \
         AQ_REG_WRAP(ListBoxText); \
         AQ_REG_WRAP(ListViewItem); \
         AQ_REG_WRAP(ListView); \
         AQ_REG_WRAP(MainWindow); \
         AQ_REG_WRAP_AQOBJECT(ManagerModules); \
         AQ_REG_WRAP_AQOBJECT(Manager); \
         AQ_REG_WRAP(MenuBar); \
         AQ_REG_WRAP(MouseEvent); \
         AQ_REG_WRAP(MoveEvent); \
         AQ_REG_WRAP(NetworkOperation); \
         AQ_REG_WRAP(NetworkProtocol); \
         AQ_REG_WRAP(Object); \
         AQ_REG_WRAP_AQOBJECT(Packager); \
         AQ_REG_WRAP(Painter); \
         AQ_REG_WRAP(PaintEvent); \
         AQ_REG_WRAP(Pen); \
         AQ_REG_WRAP(Picture); \
         AQ_REG_WRAP(Pixmap); \
         AQ_REG_WRAP(PointArray); \
         AQ_REG_WRAP(PopupMenu); \
         AQ_REG_WRAP(Printer); \
         AQ_REG_WRAP(ProgressBar); \
         AQ_REG_WRAP(ProgressDialog); \
         AQ_REG_WRAP(PushButton); \
         AQ_REG_WRAP(RadioButton); \
         AQ_REG_WRAP(Region); \
         AQ_REG_WRAP_AQOBJECT(RelationMD); \
         AQ_REG_WRAP(ResizeEvent); \
         AQ_REG_WRAP(ScrollView); \
         AQ_REG_WRAP(SEditor); \
         AQ_REG_WRAP_AQOBJECT(Settings); \
         AQ_REG_WRAP(ShowEvent); \
         AQ_REG_WRAP(SignalMapper); \
         AQ_REG_WRAP(SocketNotifier); \
         AQ_REG_WRAP(SpinBox); \
         AQ_REG_WRAP_AQOBJECT(SqlCursor); \
         AQ_REG_WRAP_AQOBJECT(SqlDatabase); \
         AQ_REG_WRAP_AQOBJECT(SqlQuery); \
         AQ_REG_WRAP(SScript); \
         AQ_REG_WRAP(StatusBar); \
         AQ_REG_WRAP(StoredDrag); \
         AQ_REG_WRAP(TabBar); \
         AQ_REG_WRAP_AQOBJECT(TableDB); \
         AQ_REG_WRAP(TableItem); \
         AQ_REG_WRAP_AQOBJECT(TableMD); \
         AQ_REG_WRAP(Table); \
         AQ_REG_WRAP(Tab); \
         AQ_REG_WRAP(TabWidget); \
         AQ_REG_WRAP(TextDrag); \
         AQ_REG_WRAP(TextEdit); \
         AQ_REG_WRAP(TextStream); \
         AQ_REG_WRAP(TimeEdit); \
         AQ_REG_WRAP(TimerEvent); \
         AQ_REG_WRAP(Timer); \
         AQ_REG_WRAP(ToolBar); \
         AQ_REG_WRAP(ToolBox); \
         AQ_REG_WRAP(ToolButton); \
         AQ_REG_WRAP_AQOBJECT(Unpacker); \
         AQ_REG_WRAP(UriDrag); \
         AQ_REG_WRAP(UrlOperator); \
         AQ_REG_WRAP(VBoxLayout); \
         AQ_REG_WRAP(VButtonGroup); \
         AQ_REG_WRAP(VGroupBox); \
         AQ_REG_WRAP(WheelEvent); \
         AQ_REG_WRAP(Widget); \
         AQ_REG_WRAP(WidgetStack); \
         AQ_REG_WRAP(Wizard); \
         AQ_REG_WRAP(WMatrix); \

#define  AQ_GEN_CRE_WRAP \
         AQ_CRE_WRAP_OBJECT(ActionGroup); \
         AQ_CRE_WRAP_VOIDPTR_AQOBJECT(ActionMD); \
         AQ_CRE_WRAP_OBJECT(Action); \
         AQ_CRE_WRAP_OBJECT(BoxLayout); \
         AQ_CRE_WRAP_VOIDPTR(Brush); \
         AQ_CRE_WRAP_VOIDPTR(Buffer); \
         AQ_CRE_WRAP_OBJECT(ButtonGroup); \
         AQ_CRE_WRAP_OBJECT(Button); \
         AQ_CRE_WRAP_VOIDPTR(ByteArray); \
         AQ_CRE_WRAP_OBJECT(CheckBox); \
         AQ_CRE_WRAP_VOIDPTR(CheckListItem); \
         AQ_CRE_WRAP_VOIDPTR(CheckTableItem); \
         AQ_CRE_WRAP_VOIDPTR(ChildEvent); \
         AQ_CRE_WRAP_VOIDPTR(CloseEvent); \
         AQ_CRE_WRAP_OBJECT(ColorDrag); \
         AQ_CRE_WRAP_VOIDPTR(Color); \
         AQ_CRE_WRAP_OBJECT(ComboBox); \
         AQ_CRE_WRAP_VOIDPTR(ComboTableItem); \
         AQ_CRE_WRAP_VOIDPTR_AQOBJECT(CompilerQSA); \
         AQ_CRE_WRAP_VOIDPTR(ContextMenuEvent); \
         AQ_CRE_WRAP_VOIDPTR(CustomEvent); \
         AQ_CRE_WRAP_VOIDPTR(DataStream); \
         AQ_CRE_WRAP_AQOBJECT(DataTableDB); \
         AQ_CRE_WRAP_OBJECT(DataTable); \
         AQ_CRE_WRAP_OBJECT(DateEdit); \
         AQ_CRE_WRAP_OBJECT(Dialog); \
         AQ_CRE_WRAP_OBJECT(Dial); \
         AQ_CRE_WRAP_VOIDPTR_AQOBJECT(DigiDoc); \
         AQ_CRE_WRAP_OBJECT(DockArea); \
         AQ_CRE_WRAP_OBJECT(DockWindow); \
         AQ_CRE_WRAP_VOIDPTR(DomAttr); \
         AQ_CRE_WRAP_VOIDPTR(DomCDATASection); \
         AQ_CRE_WRAP_VOIDPTR(DomCharacterData); \
         AQ_CRE_WRAP_VOIDPTR(DomComment); \
         AQ_CRE_WRAP_VOIDPTR(DomDocumentFragment); \
         AQ_CRE_WRAP_VOIDPTR(DomDocument); \
         AQ_CRE_WRAP_VOIDPTR(DomDocumentType); \
         AQ_CRE_WRAP_VOIDPTR(DomElement); \
         AQ_CRE_WRAP_VOIDPTR(DomEntity); \
         AQ_CRE_WRAP_VOIDPTR(DomEntityReference); \
         AQ_CRE_WRAP_VOIDPTR(DomImplementation); \
         AQ_CRE_WRAP_VOIDPTR(DomNamedNodeMap); \
         AQ_CRE_WRAP_VOIDPTR(DomNodeList); \
         AQ_CRE_WRAP_VOIDPTR(DomNode); \
         AQ_CRE_WRAP_VOIDPTR(DomNotation); \
         AQ_CRE_WRAP_VOIDPTR(DomProcessingInstruction); \
         AQ_CRE_WRAP_VOIDPTR(DomText); \
         AQ_CRE_WRAP_VOIDPTR(DragEnterEvent); \
         AQ_CRE_WRAP_VOIDPTR(DragLeaveEvent); \
         AQ_CRE_WRAP_VOIDPTR(DragMoveEvent); \
         AQ_CRE_WRAP_OBJECT(DragObject); \
         AQ_CRE_WRAP_VOIDPTR(DropEvent); \
         AQ_CRE_WRAP_OBJECT(EventLoop); \
         AQ_CRE_WRAP_VOIDPTR(Event); \
         AQ_CRE_WRAP_AQOBJECT(FieldDB); \
         AQ_CRE_WRAP_VOIDPTR_AQOBJECT(FieldMD); \
         AQ_CRE_WRAP_VOIDPTR(FocusEvent); \
         AQ_CRE_WRAP_VOIDPTR(FontMetrics); \
         AQ_CRE_WRAP_AQOBJECT(FormDB); \
         AQ_CRE_WRAP_AQOBJECT(FormRecordDB); \
         AQ_CRE_WRAP_AQOBJECT(FormSearchDB); \
         AQ_CRE_WRAP_OBJECT(Frame); \
         AQ_CRE_WRAP_OBJECT(GroupBox); \
         AQ_CRE_WRAP_OBJECT(HBoxLayout); \
         AQ_CRE_WRAP_OBJECT(HButtonGroup); \
         AQ_CRE_WRAP_OBJECT(Header); \
         AQ_CRE_WRAP_OBJECT(HGroupBox); \
         AQ_CRE_WRAP_VOIDPTR(HideEvent); \
         AQ_CRE_WRAP_VOIDPTR(HostAddress); \
         AQ_CRE_WRAP_VOIDPTR(HttpHeader); \
         AQ_CRE_WRAP_OBJECT(Http); \
         AQ_CRE_WRAP_VOIDPTR(HttpRequestHeader); \
         AQ_CRE_WRAP_VOIDPTR(HttpResponseHeader); \
         AQ_CRE_WRAP_VOIDPTR(IconDragEvent); \
         AQ_CRE_WRAP_VOIDPTR(IconDragItem); \
         AQ_CRE_WRAP_OBJECT(IconDrag); \
         AQ_CRE_WRAP_VOIDPTR(IconSet); \
         AQ_CRE_WRAP_VOIDPTR(IconViewItem); \
         AQ_CRE_WRAP_OBJECT(IconView); \
         AQ_CRE_WRAP_OBJECT(ImageDrag); \
         AQ_CRE_WRAP_VOIDPTR(Image); \
         AQ_CRE_WRAP_VOIDPTR(IMEvent); \
         AQ_CRE_WRAP_VOIDPTR(IODevice); \
         AQ_CRE_WRAP_VOIDPTR(KeyEvent); \
         AQ_CRE_WRAP_OBJECT(Label); \
         AQ_CRE_WRAP_OBJECT(Layout); \
         AQ_CRE_WRAP_OBJECT(LineEdit); \
         AQ_CRE_WRAP_VOIDPTR(ListBoxItem); \
         AQ_CRE_WRAP_OBJECT(ListBox); \
         AQ_CRE_WRAP_VOIDPTR(ListBoxPixmap); \
         AQ_CRE_WRAP_VOIDPTR(ListBoxText); \
         AQ_CRE_WRAP_VOIDPTR(ListViewItem); \
         AQ_CRE_WRAP_OBJECT(ListView); \
         AQ_CRE_WRAP_OBJECT(MainWindow); \
         AQ_CRE_WRAP_VOIDPTR_AQOBJECT(ManagerModules); \
         AQ_CRE_WRAP_VOIDPTR_AQOBJECT(Manager); \
         AQ_CRE_WRAP_OBJECT(MenuBar); \
         AQ_CRE_WRAP_VOIDPTR(MouseEvent); \
         AQ_CRE_WRAP_VOIDPTR(MoveEvent); \
         AQ_CRE_WRAP_OBJECT(NetworkOperation); \
         AQ_CRE_WRAP_OBJECT(NetworkProtocol); \
         AQ_CRE_WRAP_OBJECT(Object); \
         AQ_CRE_WRAP_VOIDPTR_AQOBJECT(Packager); \
         AQ_CRE_WRAP_VOIDPTR(Painter); \
         AQ_CRE_WRAP_VOIDPTR(PaintEvent); \
         AQ_CRE_WRAP_VOIDPTR(Pen); \
         AQ_CRE_WRAP_VOIDPTR(Picture); \
         AQ_CRE_WRAP_VOIDPTR(Pixmap); \
         AQ_CRE_WRAP_VOIDPTR(PointArray); \
         AQ_CRE_WRAP_OBJECT(PopupMenu); \
         AQ_CRE_WRAP_VOIDPTR(Printer); \
         AQ_CRE_WRAP_OBJECT(ProgressBar); \
         AQ_CRE_WRAP_OBJECT(ProgressDialog); \
         AQ_CRE_WRAP_OBJECT(PushButton); \
         AQ_CRE_WRAP_OBJECT(RadioButton); \
         AQ_CRE_WRAP_VOIDPTR(Region); \
         AQ_CRE_WRAP_VOIDPTR_AQOBJECT(RelationMD); \
         AQ_CRE_WRAP_VOIDPTR(ResizeEvent); \
         AQ_CRE_WRAP_OBJECT(ScrollView); \
         AQ_CRE_WRAP_OBJECT(SEditor); \
         AQ_CRE_WRAP_VOIDPTR_AQOBJECT(Settings); \
         AQ_CRE_WRAP_VOIDPTR(ShowEvent); \
         AQ_CRE_WRAP_OBJECT(SignalMapper); \
         AQ_CRE_WRAP_OBJECT(SocketNotifier); \
         AQ_CRE_WRAP_OBJECT(SpinBox); \
         AQ_CRE_WRAP_AQOBJECT(SqlCursor); \
         AQ_CRE_WRAP_VOIDPTR_AQOBJECT(SqlDatabase); \
         AQ_CRE_WRAP_AQOBJECT(SqlQuery); \
         AQ_CRE_WRAP_OBJECT(SScript); \
         AQ_CRE_WRAP_OBJECT(StatusBar); \
         AQ_CRE_WRAP_OBJECT(StoredDrag); \
         AQ_CRE_WRAP_OBJECT(TabBar); \
         AQ_CRE_WRAP_AQOBJECT(TableDB); \
         AQ_CRE_WRAP_VOIDPTR(TableItem); \
         AQ_CRE_WRAP_AQOBJECT(TableMD); \
         AQ_CRE_WRAP_OBJECT(Table); \
         AQ_CRE_WRAP_VOIDPTR(Tab); \
         AQ_CRE_WRAP_OBJECT(TabWidget); \
         AQ_CRE_WRAP_OBJECT(TextDrag); \
         AQ_CRE_WRAP_OBJECT(TextEdit); \
         AQ_CRE_WRAP_VOIDPTR(TextStream); \
         AQ_CRE_WRAP_OBJECT(TimeEdit); \
         AQ_CRE_WRAP_VOIDPTR(TimerEvent); \
         AQ_CRE_WRAP_OBJECT(Timer); \
         AQ_CRE_WRAP_OBJECT(ToolBar); \
         AQ_CRE_WRAP_OBJECT(ToolBox); \
         AQ_CRE_WRAP_OBJECT(ToolButton); \
         AQ_CRE_WRAP_VOIDPTR_AQOBJECT(Unpacker); \
         AQ_CRE_WRAP_OBJECT(UriDrag); \
         AQ_CRE_WRAP_OBJECT(UrlOperator); \
         AQ_CRE_WRAP_OBJECT(VBoxLayout); \
         AQ_CRE_WRAP_OBJECT(VButtonGroup); \
         AQ_CRE_WRAP_OBJECT(VGroupBox); \
         AQ_CRE_WRAP_VOIDPTR(WheelEvent); \
         AQ_CRE_WRAP_OBJECT(Widget); \
         AQ_CRE_WRAP_OBJECT(WidgetStack); \
         AQ_CRE_WRAP_OBJECT(Wizard); \
         AQ_CRE_WRAP_VOIDPTR(WMatrix); \

#define  AQ_GEN_REG_CLASS \
         AQ_REG_CLASS(ActionGroup); \
         AQ_REG_CLASS_AQOBJECT(ActionMD); \
         AQ_REG_CLASS(Action); \
         AQ_REG_CLASS(BoxLayout); \
         AQ_REG_CLASS(Brush); \
         AQ_REG_CLASS(Buffer); \
         AQ_REG_CLASS(ButtonGroup); \
         AQ_REG_CLASS(Button); \
         AQ_REG_CLASS(ByteArray); \
         AQ_REG_CLASS(CheckBox); \
         AQ_REG_CLASS(CheckListItem); \
         AQ_REG_CLASS(CheckTableItem); \
         AQ_REG_CLASS(ChildEvent); \
         AQ_REG_CLASS(CloseEvent); \
         AQ_REG_CLASS(ColorDrag); \
         AQ_REG_CLASS(Color); \
         AQ_REG_CLASS(ComboBox); \
         AQ_REG_CLASS(ComboTableItem); \
         AQ_REG_CLASS_AQOBJECT(CompilerQSA); \
         AQ_REG_CLASS(ContextMenuEvent); \
         AQ_REG_CLASS(CustomEvent); \
         AQ_REG_CLASS(DataStream); \
         AQ_REG_CLASS_AQOBJECT(DataTableDB); \
         AQ_REG_CLASS(DataTable); \
         AQ_REG_CLASS(DateEdit); \
         AQ_REG_CLASS(Dialog); \
         AQ_REG_CLASS(Dial); \
         AQ_REG_CLASS_AQOBJECT(DigiDoc); \
         AQ_REG_CLASS(DockArea); \
         AQ_REG_CLASS(DockWindow); \
         AQ_REG_CLASS(DomAttr); \
         AQ_REG_CLASS(DomCDATASection); \
         AQ_REG_CLASS(DomCharacterData); \
         AQ_REG_CLASS(DomComment); \
         AQ_REG_CLASS(DomDocumentFragment); \
         AQ_REG_CLASS(DomDocument); \
         AQ_REG_CLASS(DomDocumentType); \
         AQ_REG_CLASS(DomElement); \
         AQ_REG_CLASS(DomEntity); \
         AQ_REG_CLASS(DomEntityReference); \
         AQ_REG_CLASS(DomImplementation); \
         AQ_REG_CLASS(DomNamedNodeMap); \
         AQ_REG_CLASS(DomNodeList); \
         AQ_REG_CLASS(DomNode); \
         AQ_REG_CLASS(DomNotation); \
         AQ_REG_CLASS(DomProcessingInstruction); \
         AQ_REG_CLASS(DomText); \
         AQ_REG_CLASS(DragEnterEvent); \
         AQ_REG_CLASS(DragLeaveEvent); \
         AQ_REG_CLASS(DragMoveEvent); \
         AQ_REG_CLASS(DragObject); \
         AQ_REG_CLASS(DropEvent); \
         AQ_REG_CLASS(Event); \
         AQ_REG_CLASS_AQOBJECT(FieldDB); \
         AQ_REG_CLASS_AQOBJECT(FieldMD); \
         AQ_REG_CLASS(FocusEvent); \
         AQ_REG_CLASS(FontMetrics); \
         AQ_REG_CLASS_AQOBJECT(FormDB); \
         AQ_REG_CLASS_AQOBJECT(FormRecordDB); \
         AQ_REG_CLASS_AQOBJECT(FormSearchDB); \
         AQ_REG_CLASS(Frame); \
         AQ_REG_CLASS(GroupBox); \
         AQ_REG_CLASS(HBoxLayout); \
         AQ_REG_CLASS(HButtonGroup); \
         AQ_REG_CLASS(Header); \
         AQ_REG_CLASS(HGroupBox); \
         AQ_REG_CLASS(HideEvent); \
         AQ_REG_CLASS(HostAddress); \
         AQ_REG_CLASS(HttpHeader); \
         AQ_REG_CLASS(Http); \
         AQ_REG_CLASS(HttpRequestHeader); \
         AQ_REG_CLASS(HttpResponseHeader); \
         AQ_REG_CLASS(IconDragEvent); \
         AQ_REG_CLASS(IconDragItem); \
         AQ_REG_CLASS(IconDrag); \
         AQ_REG_CLASS(IconSet); \
         AQ_REG_CLASS(IconViewItem); \
         AQ_REG_CLASS(IconView); \
         AQ_REG_CLASS(ImageDrag); \
         AQ_REG_CLASS(Image); \
         AQ_REG_CLASS(IMEvent); \
         AQ_REG_CLASS(IODevice); \
         AQ_REG_CLASS(KeyEvent); \
         AQ_REG_CLASS(Label); \
         AQ_REG_CLASS(Layout); \
         AQ_REG_CLASS(LineEdit); \
         AQ_REG_CLASS(ListBoxItem); \
         AQ_REG_CLASS(ListBox); \
         AQ_REG_CLASS(ListBoxPixmap); \
         AQ_REG_CLASS(ListBoxText); \
         AQ_REG_CLASS(ListViewItem); \
         AQ_REG_CLASS(ListView); \
         AQ_REG_CLASS(MainWindow); \
         AQ_REG_CLASS(MenuBar); \
         AQ_REG_CLASS(MouseEvent); \
         AQ_REG_CLASS(MoveEvent); \
         AQ_REG_CLASS(NetworkOperation); \
         AQ_REG_CLASS(NetworkProtocol); \
         AQ_REG_CLASS(Object); \
         AQ_REG_CLASS_AQOBJECT(Packager); \
         AQ_REG_CLASS(Painter); \
         AQ_REG_CLASS(PaintEvent); \
         AQ_REG_CLASS(Pen); \
         AQ_REG_CLASS(Picture); \
         AQ_REG_CLASS(Pixmap); \
         AQ_REG_CLASS(PointArray); \
         AQ_REG_CLASS(PopupMenu); \
         AQ_REG_CLASS(Printer); \
         AQ_REG_CLASS(ProgressBar); \
         AQ_REG_CLASS(ProgressDialog); \
         AQ_REG_CLASS(PushButton); \
         AQ_REG_CLASS(RadioButton); \
         AQ_REG_CLASS(Region); \
         AQ_REG_CLASS_AQOBJECT(RelationMD); \
         AQ_REG_CLASS(ResizeEvent); \
         AQ_REG_CLASS(ScrollView); \
         AQ_REG_CLASS(SEditor); \
         AQ_REG_CLASS_AQOBJECT(Settings); \
         AQ_REG_CLASS(ShowEvent); \
         AQ_REG_CLASS(SignalMapper); \
         AQ_REG_CLASS(SocketNotifier); \
         AQ_REG_CLASS(SpinBox); \
         AQ_REG_CLASS_AQOBJECT(SqlCursor); \
         AQ_REG_CLASS_AQOBJECT(SqlQuery); \
         AQ_REG_CLASS(StatusBar); \
         AQ_REG_CLASS(StoredDrag); \
         AQ_REG_CLASS(TabBar); \
         AQ_REG_CLASS_AQOBJECT(TableDB); \
         AQ_REG_CLASS(TableItem); \
         AQ_REG_CLASS_AQOBJECT(TableMD); \
         AQ_REG_CLASS(Table); \
         AQ_REG_CLASS(Tab); \
         AQ_REG_CLASS(TabWidget); \
         AQ_REG_CLASS(TextDrag); \
         AQ_REG_CLASS(TextEdit); \
         AQ_REG_CLASS(TextStream); \
         AQ_REG_CLASS(TimeEdit); \
         AQ_REG_CLASS(TimerEvent); \
         AQ_REG_CLASS(Timer); \
         AQ_REG_CLASS(ToolBar); \
         AQ_REG_CLASS(ToolBox); \
         AQ_REG_CLASS(ToolButton); \
         AQ_REG_CLASS_AQOBJECT(Unpacker); \
         AQ_REG_CLASS(UriDrag); \
         AQ_REG_CLASS(UrlOperator); \
         AQ_REG_CLASS(VBoxLayout); \
         AQ_REG_CLASS(VButtonGroup); \
         AQ_REG_CLASS(VGroupBox); \
         AQ_REG_CLASS(WheelEvent); \
         AQ_REG_CLASS(Widget); \
         AQ_REG_CLASS(WidgetStack); \
         AQ_REG_CLASS(Wizard); \
         AQ_REG_CLASS(WMatrix); \

#define  AQ_GEN_CRE_CLASS \
         AQ_CRE_OBJECT(ActionGroup); \
         AQ_CRE_VOIDPTR_AQOBJECT(ActionMD); \
         AQ_CRE_OBJECT(Action); \
         AQ_CRE_OBJECT(BoxLayout); \
         AQ_CRE_VOIDPTR(Brush); \
         AQ_CRE_VOIDPTR(Buffer); \
         AQ_CRE_WIDGET(ButtonGroup); \
         AQ_CRE_WIDGET(Button); \
         AQ_CRE_VOIDPTR(ByteArray); \
         AQ_CRE_WIDGET(CheckBox); \
         AQ_CRE_VOIDPTR(CheckListItem); \
         AQ_CRE_VOIDPTR(CheckTableItem); \
         AQ_CRE_VOIDPTR(ChildEvent); \
         AQ_CRE_VOIDPTR(CloseEvent); \
         AQ_CRE_OBJECT(ColorDrag); \
         AQ_CRE_VOIDPTR(Color); \
         AQ_CRE_WIDGET(ComboBox); \
         AQ_CRE_VOIDPTR(ComboTableItem); \
         AQ_CRE_VOIDPTR_AQOBJECT(CompilerQSA); \
         AQ_CRE_VOIDPTR(ContextMenuEvent); \
         AQ_CRE_VOIDPTR(CustomEvent); \
         AQ_CRE_VOIDPTR(DataStream); \
         AQ_CRE_AQWIDGET(DataTableDB); \
         AQ_CRE_WIDGET(DataTable); \
         AQ_CRE_WIDGET(DateEdit); \
         AQ_CRE_WIDGET(Dialog); \
         AQ_CRE_WIDGET(Dial); \
         AQ_CRE_VOIDPTR_AQOBJECT(DigiDoc); \
         AQ_CRE_WIDGET(DockArea); \
         AQ_CRE_WIDGET(DockWindow); \
         AQ_CRE_VOIDPTR(DomAttr); \
         AQ_CRE_VOIDPTR(DomCDATASection); \
         AQ_CRE_VOIDPTR(DomCharacterData); \
         AQ_CRE_VOIDPTR(DomComment); \
         AQ_CRE_VOIDPTR(DomDocumentFragment); \
         AQ_CRE_VOIDPTR(DomDocument); \
         AQ_CRE_VOIDPTR(DomDocumentType); \
         AQ_CRE_VOIDPTR(DomElement); \
         AQ_CRE_VOIDPTR(DomEntity); \
         AQ_CRE_VOIDPTR(DomEntityReference); \
         AQ_CRE_VOIDPTR(DomImplementation); \
         AQ_CRE_VOIDPTR(DomNamedNodeMap); \
         AQ_CRE_VOIDPTR(DomNodeList); \
         AQ_CRE_VOIDPTR(DomNode); \
         AQ_CRE_VOIDPTR(DomNotation); \
         AQ_CRE_VOIDPTR(DomProcessingInstruction); \
         AQ_CRE_VOIDPTR(DomText); \
         AQ_CRE_VOIDPTR(DragEnterEvent); \
         AQ_CRE_VOIDPTR(DragLeaveEvent); \
         AQ_CRE_VOIDPTR(DragMoveEvent); \
         AQ_CRE_OBJECT(DragObject); \
         AQ_CRE_VOIDPTR(DropEvent); \
         AQ_CRE_VOIDPTR(Event); \
         AQ_CRE_AQWIDGET(FieldDB); \
         AQ_CRE_VOIDPTR_AQOBJECT(FieldMD); \
         AQ_CRE_VOIDPTR(FocusEvent); \
         AQ_CRE_VOIDPTR(FontMetrics); \
         AQ_CRE_AQWIDGET(FormDB); \
         AQ_CRE_AQWIDGET(FormRecordDB); \
         AQ_CRE_AQWIDGET(FormSearchDB); \
         AQ_CRE_WIDGET(Frame); \
         AQ_CRE_WIDGET(GroupBox); \
         AQ_CRE_OBJECT(HBoxLayout); \
         AQ_CRE_WIDGET(HButtonGroup); \
         AQ_CRE_WIDGET(Header); \
         AQ_CRE_WIDGET(HGroupBox); \
         AQ_CRE_VOIDPTR(HideEvent); \
         AQ_CRE_VOIDPTR(HostAddress); \
         AQ_CRE_VOIDPTR(HttpHeader); \
         AQ_CRE_OBJECT(Http); \
         AQ_CRE_VOIDPTR(HttpRequestHeader); \
         AQ_CRE_VOIDPTR(HttpResponseHeader); \
         AQ_CRE_VOIDPTR(IconDragEvent); \
         AQ_CRE_VOIDPTR(IconDragItem); \
         AQ_CRE_OBJECT(IconDrag); \
         AQ_CRE_VOIDPTR(IconSet); \
         AQ_CRE_VOIDPTR(IconViewItem); \
         AQ_CRE_WIDGET(IconView); \
         AQ_CRE_OBJECT(ImageDrag); \
         AQ_CRE_VOIDPTR(Image); \
         AQ_CRE_VOIDPTR(IMEvent); \
         AQ_CRE_VOIDPTR(IODevice); \
         AQ_CRE_VOIDPTR(KeyEvent); \
         AQ_CRE_WIDGET(Label); \
         AQ_CRE_OBJECT(Layout); \
         AQ_CRE_WIDGET(LineEdit); \
         AQ_CRE_VOIDPTR(ListBoxItem); \
         AQ_CRE_WIDGET(ListBox); \
         AQ_CRE_VOIDPTR(ListBoxPixmap); \
         AQ_CRE_VOIDPTR(ListBoxText); \
         AQ_CRE_VOIDPTR(ListViewItem); \
         AQ_CRE_WIDGET(ListView); \
         AQ_CRE_WIDGET(MainWindow); \
         AQ_CRE_WIDGET(MenuBar); \
         AQ_CRE_VOIDPTR(MouseEvent); \
         AQ_CRE_VOIDPTR(MoveEvent); \
         AQ_CRE_OBJECT(NetworkOperation); \
         AQ_CRE_OBJECT(NetworkProtocol); \
         AQ_CRE_OBJECT(Object); \
         AQ_CRE_VOIDPTR_AQOBJECT(Packager); \
         AQ_CRE_VOIDPTR(Painter); \
         AQ_CRE_VOIDPTR(PaintEvent); \
         AQ_CRE_VOIDPTR(Pen); \
         AQ_CRE_VOIDPTR(Picture); \
         AQ_CRE_VOIDPTR(Pixmap); \
         AQ_CRE_VOIDPTR(PointArray); \
         AQ_CRE_WIDGET(PopupMenu); \
         AQ_CRE_VOIDPTR(Printer); \
         AQ_CRE_WIDGET(ProgressBar); \
         AQ_CRE_WIDGET(ProgressDialog); \
         AQ_CRE_WIDGET(PushButton); \
         AQ_CRE_WIDGET(RadioButton); \
         AQ_CRE_VOIDPTR(Region); \
         AQ_CRE_VOIDPTR_AQOBJECT(RelationMD); \
         AQ_CRE_VOIDPTR(ResizeEvent); \
         AQ_CRE_WIDGET(ScrollView); \
         AQ_CRE_WIDGET(SEditor); \
         AQ_CRE_VOIDPTR_AQOBJECT(Settings); \
         AQ_CRE_VOIDPTR(ShowEvent); \
         AQ_CRE_OBJECT(SignalMapper); \
         AQ_CRE_OBJECT(SocketNotifier); \
         AQ_CRE_WIDGET(SpinBox); \
         AQ_CRE_AQOBJECT(SqlCursor); \
         AQ_CRE_AQOBJECT(SqlQuery); \
         AQ_CRE_WIDGET(StatusBar); \
         AQ_CRE_OBJECT(StoredDrag); \
         AQ_CRE_WIDGET(TabBar); \
         AQ_CRE_AQWIDGET(TableDB); \
         AQ_CRE_VOIDPTR(TableItem); \
         AQ_CRE_AQOBJECT(TableMD); \
         AQ_CRE_WIDGET(Table); \
         AQ_CRE_VOIDPTR(Tab); \
         AQ_CRE_WIDGET(TabWidget); \
         AQ_CRE_OBJECT(TextDrag); \
         AQ_CRE_WIDGET(TextEdit); \
         AQ_CRE_VOIDPTR(TextStream); \
         AQ_CRE_WIDGET(TimeEdit); \
         AQ_CRE_VOIDPTR(TimerEvent); \
         AQ_CRE_OBJECT(Timer); \
         AQ_CRE_WIDGET(ToolBar); \
         AQ_CRE_WIDGET(ToolBox); \
         AQ_CRE_WIDGET(ToolButton); \
         AQ_CRE_VOIDPTR_AQOBJECT(Unpacker); \
         AQ_CRE_OBJECT(UriDrag); \
         AQ_CRE_OBJECT(UrlOperator); \
         AQ_CRE_OBJECT(VBoxLayout); \
         AQ_CRE_WIDGET(VButtonGroup); \
         AQ_CRE_WIDGET(VGroupBox); \
         AQ_CRE_VOIDPTR(WheelEvent); \
         AQ_CRE_WIDGET(Widget); \
         AQ_CRE_WIDGET(WidgetStack); \
         AQ_CRE_WIDGET(Wizard); \
         AQ_CRE_VOIDPTR(WMatrix); \

#endif /*AQS_G_H_*/
