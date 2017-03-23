//*******************************************************************
//
// License:  LGPL
//
// See LICENSE.txt file in the top level directory for more details.
// 
// Author: Garrett Potts
//
// Description: Nitf support class
// 
//********************************************************************
// $Id: ossimNitfRegisteredDesFactory.cpp 23113 2015-01-28 17:04:17Z gpotts $

#include <ossim/support_data/ossimNitfRegisteredDesFactory.h>

#include <ossim/support_data/ossimNitfXmlDataContentDes.h>

RTTI_DEF1(ossimNitfRegisteredDesFactory, "ossimNitfRegisteredDesFactory", ossimNitfDesFactory);

static const char XML_DATA_CONTENT_DES[]                = "XML_DATA_CONTENT";

ossimNitfRegisteredDesFactory::ossimNitfRegisteredDesFactory()
{
}

ossimNitfRegisteredDesFactory::~ossimNitfRegisteredDesFactory()
{
}

ossimNitfRegisteredDesFactory* ossimNitfRegisteredDesFactory::instance()
{
   static ossimNitfRegisteredDesFactory inst;
   return &inst;
}

ossimRefPtr<ossimNitfRegisteredDes> ossimNitfRegisteredDesFactory::create(
   const ossimString& desName)const
{
   ossimString name = ossimString(desName).trim().upcase();
   
   if(desName == XML_DATA_CONTENT_DES)
   {
      return new ossimNitfXmlDataContentDes;
   }
   return NULL;
}