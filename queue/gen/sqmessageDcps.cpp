//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: sqmessageDcps.cpp
//  Source: gen/sqmessageDcps.idl
//  Generated: Mon Jul 20 23:56:23 2015
//  OpenSplice V6.5.0
//  
//******************************************************************

#include "sqmessageDcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < dilib::demo::Message, struct MessageSeq_uniq_>;
#endif

const char * dilib::demo::MessageTypeSupportInterface::_local_id = "IDL:dilib/demo/MessageTypeSupportInterface:1.0";

dilib::demo::MessageTypeSupportInterface_ptr dilib::demo::MessageTypeSupportInterface::_duplicate (dilib::demo::MessageTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean dilib::demo::MessageTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, dilib::demo::MessageTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

dilib::demo::MessageTypeSupportInterface_ptr dilib::demo::MessageTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   dilib::demo::MessageTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (dilib::demo::MessageTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < dilib::demo::MessageTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

dilib::demo::MessageTypeSupportInterface_ptr dilib::demo::MessageTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   dilib::demo::MessageTypeSupportInterface_ptr result;
   result = dynamic_cast < dilib::demo::MessageTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * dilib::demo::MessageDataWriter::_local_id = "IDL:dilib/demo/MessageDataWriter:1.0";

dilib::demo::MessageDataWriter_ptr dilib::demo::MessageDataWriter::_duplicate (dilib::demo::MessageDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean dilib::demo::MessageDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, dilib::demo::MessageDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

dilib::demo::MessageDataWriter_ptr dilib::demo::MessageDataWriter::_narrow (DDS::Object_ptr p)
{
   dilib::demo::MessageDataWriter_ptr result = NULL;
   if (p && p->_is_a (dilib::demo::MessageDataWriter::_local_id))
   {
      result = dynamic_cast < dilib::demo::MessageDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

dilib::demo::MessageDataWriter_ptr dilib::demo::MessageDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   dilib::demo::MessageDataWriter_ptr result;
   result = dynamic_cast < dilib::demo::MessageDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * dilib::demo::MessageDataReader::_local_id = "IDL:dilib/demo/MessageDataReader:1.0";

dilib::demo::MessageDataReader_ptr dilib::demo::MessageDataReader::_duplicate (dilib::demo::MessageDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean dilib::demo::MessageDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, dilib::demo::MessageDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

dilib::demo::MessageDataReader_ptr dilib::demo::MessageDataReader::_narrow (DDS::Object_ptr p)
{
   dilib::demo::MessageDataReader_ptr result = NULL;
   if (p && p->_is_a (dilib::demo::MessageDataReader::_local_id))
   {
      result = dynamic_cast < dilib::demo::MessageDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

dilib::demo::MessageDataReader_ptr dilib::demo::MessageDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   dilib::demo::MessageDataReader_ptr result;
   result = dynamic_cast < dilib::demo::MessageDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * dilib::demo::MessageDataReaderView::_local_id = "IDL:dilib/demo/MessageDataReaderView:1.0";

dilib::demo::MessageDataReaderView_ptr dilib::demo::MessageDataReaderView::_duplicate (dilib::demo::MessageDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean dilib::demo::MessageDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, dilib::demo::MessageDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

dilib::demo::MessageDataReaderView_ptr dilib::demo::MessageDataReaderView::_narrow (DDS::Object_ptr p)
{
   dilib::demo::MessageDataReaderView_ptr result = NULL;
   if (p && p->_is_a (dilib::demo::MessageDataReaderView::_local_id))
   {
      result = dynamic_cast < dilib::demo::MessageDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

dilib::demo::MessageDataReaderView_ptr dilib::demo::MessageDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   dilib::demo::MessageDataReaderView_ptr result;
   result = dynamic_cast < dilib::demo::MessageDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}


