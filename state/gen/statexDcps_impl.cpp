#include "statexDcps_impl.h"
#include "statexSplDcps.h"
//

extern c_bool
__dilib_demo_DevicePosition__copyIn (
    c_base base,
    const class dilib::demo::DevicePosition *from,
    struct _dilib_demo_DevicePosition *to);

extern void
__dilib_demo_DevicePosition__copyOut (
    const void *_from,
    void *_to);

// DDS dilib::demo::DevicePosition TypeSupportMetaHolder Object Body
dilib::demo::DevicePositionTypeSupportMetaHolder::DevicePositionTypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("dilib::demo::DevicePosition", "", "did")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __dilib_demo_DevicePosition__copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __dilib_demo_DevicePosition__copyOut;
    metaDescriptorArrLength = 3;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"dilib\"><Module name=\"demo\"><Struct name=\"DevicePosition\">",
"<Member name=\"did\"><String/></Member><Member name=\"lat\"><Float/></Member><Member name=\"lon\"><Float/>",
"</Member><Member name=\"lev\"><Float/></Member></Struct></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

dilib::demo::DevicePositionTypeSupportMetaHolder::~DevicePositionTypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::DataWriter *
dilib::demo::DevicePositionTypeSupportMetaHolder::create_datawriter ()
{
    return new dilib::demo::DevicePositionDataWriter_impl();
}

::DDS::OpenSplice::DataReader *
dilib::demo::DevicePositionTypeSupportMetaHolder::create_datareader ()
{
    return new dilib::demo::DevicePositionDataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
dilib::demo::DevicePositionTypeSupportMetaHolder::create_view ()
{
    return new dilib::demo::DevicePositionDataReaderView_impl();
}

// DDS dilib::demo::DevicePosition TypeSupport Object Body
dilib::demo::DevicePositionTypeSupport::DevicePositionTypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new dilib::demo::DevicePositionTypeSupportMetaHolder();
}

dilib::demo::DevicePositionTypeSupport::~DevicePositionTypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS dilib::demo::DevicePosition DataWriter_impl Object Body
dilib::demo::DevicePositionDataWriter_impl::DevicePositionDataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

dilib::demo::DevicePositionDataWriter_impl::~DevicePositionDataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t 
dilib::demo::DevicePositionDataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(publisher, participant, qos, a_topic, name, copyIn, copyOut);
}        

::DDS::InstanceHandle_t
dilib::demo::DevicePositionDataWriter_impl::register_instance (
    const dilib::demo::DevicePosition & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
dilib::demo::DevicePositionDataWriter_impl::register_instance_w_timestamp (
    const DevicePosition & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataWriter_impl::unregister_instance (
    const dilib::demo::DevicePosition & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataWriter_impl::unregister_instance_w_timestamp (
    const DevicePosition & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataWriter_impl::write (
    const dilib::demo::DevicePosition & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataWriter_impl::write_w_timestamp (
    const DevicePosition & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataWriter_impl::dispose (
    const dilib::demo::DevicePosition & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataWriter_impl::dispose_w_timestamp (
    const DevicePosition & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataWriter_impl::writedispose (
    const dilib::demo::DevicePosition & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataWriter_impl::writedispose_w_timestamp (
    const DevicePosition & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataWriter_impl::get_key_value (
    DevicePosition & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
dilib::demo::DevicePositionDataWriter_impl::lookup_instance (
    const dilib::demo::DevicePosition & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS dilib::demo::DevicePosition DataReader_impl Object Body
dilib::demo::DevicePositionDataReader_impl::DevicePositionDataReader_impl ()
{
    // Parent constructor takes care of everything.
}

dilib::demo::DevicePositionDataReader_impl::~DevicePositionDataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t 
dilib::demo::DevicePositionDataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReader_impl::read (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReader_impl::take (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReader_impl::read_w_condition (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReader_impl::take_w_condition (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReader_impl::read_next_sample (
    dilib::demo::DevicePosition & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReader_impl::take_next_sample (
    dilib::demo::DevicePosition & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReader_impl::read_instance (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReader_impl::take_instance (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReader_impl::read_next_instance (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReader_impl::take_next_instance (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReader_impl::read_next_instance_w_condition (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReader_impl::take_next_instance_w_condition (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReader_impl::return_loan (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            dilib::demo::DevicePositionSeq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReader_impl::get_key_value (
    dilib::demo::DevicePosition & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
dilib::demo::DevicePositionDataReader_impl::lookup_instance (
    const dilib::demo::DevicePosition & instance) THROW_ORB_EXCEPTIONS
{
    return FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReader_impl::check_preconditions (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
dilib::demo::DevicePositionDataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    dilib::demo::DevicePositionSeq *data_seq = reinterpret_cast<dilib::demo::DevicePositionSeq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
dilib::demo::DevicePositionDataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	dilib::demo::DevicePositionSeq *data_seq = reinterpret_cast<dilib::demo::DevicePositionSeq *>(received_data);
	return &((*data_seq)[index]);
}

void
dilib::demo::DevicePositionDataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    dilib::demo::DevicePositionSeq *data_seq = reinterpret_cast<dilib::demo::DevicePositionSeq *>(received_data);
    data_seq->length(len);
}

void
dilib::demo::DevicePositionDataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    dilib::demo::DevicePosition *data = reinterpret_cast<dilib::demo::DevicePosition *>(to);
    __dilib_demo_DevicePosition__copyOut(from, data);
}

void 
dilib::demo::DevicePositionDataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    dilib::demo::DevicePosition *data = reinterpret_cast<dilib::demo::DevicePosition *>(to);
    __dilib_demo_DevicePosition__copyOut(from, data);
}


// DDS dilib::demo::DevicePosition DataReaderView_impl Object Body
dilib::demo::DevicePositionDataReaderView_impl::DevicePositionDataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

dilib::demo::DevicePositionDataReaderView_impl::~DevicePositionDataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
dilib::demo::DevicePositionDataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, dilib::demo::DevicePositionDataReader_impl::dataSeqAlloc,
            dilib::demo::DevicePositionDataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReaderView_impl::read (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::DevicePositionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReaderView_impl::take (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::DevicePositionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReaderView_impl::read_w_condition (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::DevicePositionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReaderView_impl::take_w_condition (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::DevicePositionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReaderView_impl::read_next_sample (
    dilib::demo::DevicePosition & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReaderView_impl::take_next_sample (
    dilib::demo::DevicePosition & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReaderView_impl::read_instance (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::DevicePositionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReaderView_impl::take_instance (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::DevicePositionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReaderView_impl::read_next_instance (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::DevicePositionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReaderView_impl::take_next_instance (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::DevicePositionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReaderView_impl::read_next_instance_w_condition (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::DevicePositionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReaderView_impl::take_next_instance_w_condition (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::DevicePositionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReaderView_impl::return_loan (
    dilib::demo::DevicePositionSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            dilib::demo::DevicePositionSeq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
dilib::demo::DevicePositionDataReaderView_impl::get_key_value (
    dilib::demo::DevicePosition & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
dilib::demo::DevicePositionDataReaderView_impl::lookup_instance (
    const dilib::demo::DevicePosition & instance) THROW_ORB_EXCEPTIONS
{
    return FooDataReaderView_impl::lookup_instance(&instance);
}
