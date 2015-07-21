#ifndef STATEXDCPS_IMPL_H_
#define STATEXDCPS_IMPL_H_

#include "statex_DCPS.hpp"
#include "ccpp.h"
#include "TypeSupportMetaHolder.h"
#include "TypeSupport.h"
#include "FooDataWriter_impl.h"
#include "FooDataReader_impl.h"
#include "FooDataReaderView_impl.h"



namespace dilib {

    namespace demo {

        class  DevicePositionTypeSupportMetaHolder : public ::DDS::OpenSplice::TypeSupportMetaHolder
        {
        public:
            DevicePositionTypeSupportMetaHolder ();
            virtual ~DevicePositionTypeSupportMetaHolder ();
        
        private:
            ::DDS::OpenSplice::DataWriter * create_datawriter ();
        
            ::DDS::OpenSplice::DataReader * create_datareader ();
        
            ::DDS::OpenSplice::DataReaderView * create_view ();
        };
        
        class  DevicePositionTypeSupport : public virtual DevicePositionTypeSupportInterface,
                                                           public ::DDS::OpenSplice::TypeSupport
        {
        public:
            DevicePositionTypeSupport ();
        
            virtual ~DevicePositionTypeSupport ();
        
        private:
            DevicePositionTypeSupport (const DevicePositionTypeSupport &);
        
            void operator= (const DevicePositionTypeSupport &);
        };
        
        typedef DevicePositionTypeSupportInterface_var DevicePositionTypeSupport_var;
        typedef DevicePositionTypeSupportInterface_ptr DevicePositionTypeSupport_ptr;
        
        class  DevicePositionDataWriter_impl : public virtual DevicePositionDataWriter,
                                                               public ::DDS::OpenSplice::FooDataWriter_impl
        {
            friend class DDS::OpenSplice::Publisher;
            friend class DevicePositionTypeSupportMetaHolder;
        
        public:
            virtual ::DDS::InstanceHandle_t register_instance (
                const DevicePosition & instance_data) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
                const DevicePosition & instance_data,
                const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t unregister_instance (
                const DevicePosition & instance_data,
                ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
                const DevicePosition & instance_data,
                ::DDS::InstanceHandle_t handle,
                const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t write (
                const DevicePosition & instance_data,
                ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t write_w_timestamp (
                const DevicePosition & instance_data,
                ::DDS::InstanceHandle_t handle,
                const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t dispose (
                const DevicePosition & instance_data,
                ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t dispose_w_timestamp (
                const DevicePosition & instance_data,
                ::DDS::InstanceHandle_t handle,
                const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t writedispose (
                const DevicePosition & instance_data,
                ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t writedispose_w_timestamp (
                const DevicePosition & instance_data,
                ::DDS::InstanceHandle_t handle,
                const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t get_key_value (
                DevicePosition & key_holder,
                ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::InstanceHandle_t lookup_instance (
                const DevicePosition & instance_data) THROW_ORB_EXCEPTIONS;
        
        protected:
            DevicePositionDataWriter_impl ();
        
            virtual ~DevicePositionDataWriter_impl ();
        
            virtual DDS::ReturnCode_t init (
                            DDS::OpenSplice::Publisher *publisher,
                            DDS::OpenSplice::DomainParticipant *participant,
                            const DDS::DataWriterQos &qos,
                            DDS::OpenSplice::Topic *a_topic,
                            const char *name,
                            DDS::OpenSplice::cxxCopyIn copyIn,
                            DDS::OpenSplice::cxxCopyOut copyOut);
        
        private:
            DevicePositionDataWriter_impl (const DevicePositionDataWriter_impl &);
        
            void operator= (const DevicePositionDataWriter &);
        };
        
        class  DevicePositionDataReader_impl : public virtual DevicePositionDataReader,
                                                               public ::DDS::OpenSplice::FooDataReader_impl
        {
            friend class DDS::OpenSplice::Subscriber;
            friend class DevicePositionTypeSupportMetaHolder;
            friend class DevicePositionDataReaderView_impl;
        
        public:
            virtual ::DDS::ReturnCode_t read (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::SampleStateMask sample_states,
                ::DDS::ViewStateMask view_states,
                ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t take (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::SampleStateMask sample_states,
                ::DDS::ViewStateMask view_states,
                ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t read_w_condition (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t take_w_condition (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t read_next_sample (
                DevicePosition & received_data,
                ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t take_next_sample (
                DevicePosition & received_data,
                ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t read_instance (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::InstanceHandle_t a_handle,
                ::DDS::SampleStateMask sample_states,
                ::DDS::ViewStateMask view_states,
                ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t take_instance (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::InstanceHandle_t a_handle,
                ::DDS::SampleStateMask sample_states,
                ::DDS::ViewStateMask view_states,
                ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t read_next_instance (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::InstanceHandle_t a_handle,
                ::DDS::SampleStateMask sample_states,
                ::DDS::ViewStateMask view_states,
                ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t take_next_instance (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::InstanceHandle_t a_handle,
                ::DDS::SampleStateMask sample_states,
                ::DDS::ViewStateMask view_states,
                ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::InstanceHandle_t a_handle,
                ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::InstanceHandle_t a_handle,
                ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t return_loan (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t get_key_value (
                DevicePosition & key_holder,
                ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::InstanceHandle_t lookup_instance (
                const DevicePosition & instance) THROW_ORB_EXCEPTIONS;
        
        protected:
            DevicePositionDataReader_impl ();
        
            virtual ~DevicePositionDataReader_impl ();
        
            DDS::ReturnCode_t init (
                    DDS::OpenSplice::Subscriber *subscriber,
                    const DDS::DataReaderQos &qos,
                    DDS::OpenSplice::TopicDescription *a_topic,
                    const char *name,
                    DDS::OpenSplice::cxxCopyIn copyIn,
                    DDS::OpenSplice::cxxCopyOut copyOut);
        
            static void* dataSeqAlloc (
                void * data_values,
                DDS::ULong len);
        
            static void dataSeqLength (
                void * data_values,
                DDS::ULong len);
        
            static void * dataSeqGetBuffer (
                void * data_values,
                DDS::ULong index);
        
            static void dataSeqCopyOut (
                const void * from,
                void * received_data);
            static void copyDataOut(const void *from, void *to);
        
        private:
            DevicePositionDataReader_impl (const DevicePositionDataReader &);
            void operator= (const DevicePositionDataReader &);
        
            static ::DDS::ReturnCode_t check_preconditions (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples);
        };
        
        class  DevicePositionDataReaderView_impl : public virtual DevicePositionDataReaderView,
                                                                   public ::DDS::OpenSplice::FooDataReaderView_impl
        {
            friend class DDS::OpenSplice::DataReader;
            friend class DevicePositionTypeSupportMetaHolder;
        
        public:
            virtual ::DDS::ReturnCode_t read (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::SampleStateMask sample_states,
                ::DDS::ViewStateMask view_states,
                ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t take (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::SampleStateMask sample_states,
                ::DDS::ViewStateMask view_states,
                ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t read_w_condition (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t take_w_condition (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t read_next_sample (
                DevicePosition & received_data,
                ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t take_next_sample (
                DevicePosition & received_data,
                ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t read_instance (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::InstanceHandle_t a_handle,
                ::DDS::SampleStateMask sample_states,
                ::DDS::ViewStateMask view_states,
                ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t take_instance (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::InstanceHandle_t a_handle,
                ::DDS::SampleStateMask sample_states,
                ::DDS::ViewStateMask view_states,
                ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t read_next_instance (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::InstanceHandle_t a_handle,
                ::DDS::SampleStateMask sample_states,
                ::DDS::ViewStateMask view_states,
                ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t take_next_instance (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::InstanceHandle_t a_handle,
                ::DDS::SampleStateMask sample_states,
                ::DDS::ViewStateMask view_states,
                ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::InstanceHandle_t a_handle,
                ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq,
                ::DDS::Long max_samples,
                ::DDS::InstanceHandle_t a_handle,
                ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t return_loan (
                DevicePositionSeq & received_data,
                ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::ReturnCode_t get_key_value (
                DevicePosition & key_holder,
                ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
        
            virtual ::DDS::InstanceHandle_t lookup_instance (
                const DevicePosition & instance) THROW_ORB_EXCEPTIONS;
        
        protected:
            DevicePositionDataReaderView_impl ();
        
            virtual ~DevicePositionDataReaderView_impl ();
        
            virtual DDS::ReturnCode_t init (
                DDS::OpenSplice::DataReader *reader,
                const char *name,
                const DDS::DataReaderViewQos &qos,
                DDS::OpenSplice::cxxCopyIn copyIn,
                DDS::OpenSplice::cxxCopyOut copyOut);
        
        private:
            DevicePositionDataReaderView_impl (const DevicePositionDataReaderView &);
        
            void operator= (const DevicePositionDataReaderView &);
        };
        
    }

}

#define STATEX_DCPS_TYPESUPPORT_DEFINED
#undef OS_API
#endif
