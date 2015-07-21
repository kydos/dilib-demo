//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: statex.h
//  Source: statex.idl
//  Generated: Tue Jul 21 00:20:06 2015
//  OpenSplice V6.5.0
//  
//******************************************************************
#ifndef _STATEX_H_
#define _STATEX_H_
#ifndef OPENSPLICE_ISOCXX_PSM
#define OPENSPLICE_ISOCXX_PSM
#endif

#include "sacpp_mapping.h"
#include <dds/core/ddscore.hpp>


namespace dilib
{
   namespace demo
   {
      class DevicePosition;

      class DevicePosition OSPL_DDS_FINAL
      {
      public:
            DevicePosition() {}
            explicit DevicePosition(
                        const ::std::string& did,
                        DDS::Float lat,
                        DDS::Float lon,
                        DDS::Float lev)            :
                                    did_(did),
                                    lat_(lat),
                                    lon_(lon),
                                    lev_(lev) {}
#ifdef OSPL_DDS_CXX11
#  ifdef OSPL_CXX11_NO_FUNCTION_DEFAULTS
            DevicePosition(const DevicePosition& _other)
            :
                                    did_(_other.did_),
                                    lat_(_other.lat_),
                                    lon_(_other.lon_),
                                    lev_(_other.lev_)
            {}
            DevicePosition(DevicePosition&& _other)
            :
                                    did_(::std::move(_other.did_)),
                                    lat_(::std::move(_other.lat_)),
                                    lon_(::std::move(_other.lon_)),
                                    lev_(::std::move(_other.lev_))
            {}
            DevicePosition& operator=(DevicePosition&& _other)
            {
                        if (this != &_other)
                        {
                                    did_ = ::std::move(_other.did_);
                                    lat_ = ::std::move(_other.lat_);
                                    lon_ = ::std::move(_other.lon_);
                                    lev_ = ::std::move(_other.lev_);
                        }
                        return *this;
            }
            DevicePosition& operator=(const DevicePosition& _other)
            {
                        if (this != &_other)
                        {
                                    did_ = _other.did_;
                                    lat_ = _other.lat_;
                                    lon_ = _other.lon_;
                                    lev_ = _other.lev_;
                        }
                        return *this;
            }
#  else
            DevicePosition(const DevicePosition& _other) = default;
            DevicePosition(DevicePosition&& _other) = default;
            DevicePosition& operator=(DevicePosition&& _other) = default;
            DevicePosition& operator=(const DevicePosition& _other) = default;
#  endif
#endif
            const ::std::string& did() const { return this->did_; }
            ::std::string& did() { return this->did_; }
            void did(const ::std::string& _val_) { this->did_ = _val_; }
#ifdef OSPL_DDS_CXX11
            void did(::std::string&& _val_) { this->did_ = _val_; }
#endif
            DDS::Float lat() const { return this->lat_; }
            DDS::Float& lat() { return this->lat_; }
            void lat(DDS::Float _val_) { this->lat_ = _val_; }
#ifdef OSPL_DDS_CXX11
            void lat(DDS::Float&& _val_) { this->lat_ = _val_; }
#endif
            DDS::Float lon() const { return this->lon_; }
            DDS::Float& lon() { return this->lon_; }
            void lon(DDS::Float _val_) { this->lon_ = _val_; }
#ifdef OSPL_DDS_CXX11
            void lon(DDS::Float&& _val_) { this->lon_ = _val_; }
#endif
            DDS::Float lev() const { return this->lev_; }
            DDS::Float& lev() { return this->lev_; }
            void lev(DDS::Float _val_) { this->lev_ = _val_; }
#ifdef OSPL_DDS_CXX11
            void lev(DDS::Float&& _val_) { this->lev_ = _val_; }
#endif
            bool operator==(const DevicePosition& _other) const
            {
                        return did_ == _other.did_ &&
                        lat_ == _other.lat_ &&
                        lon_ == _other.lon_ &&
                        lev_ == _other.lev_;
            }
            bool operator!=(const DevicePosition& other) const
            {
                        return !(*this == other);
            }
            ::std::string did_;
            DDS::Float lat_;
            DDS::Float lon_;
            DDS::Float lev_;
      };

   }
}




#endif