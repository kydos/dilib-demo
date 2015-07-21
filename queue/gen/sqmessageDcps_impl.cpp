#include "sqmessageDcps_impl.h"
#include "sqmessageSplDcps.h"
//

extern c_bool
__dilib_demo_Message__copyIn (
    c_base base,
    const class dilib::demo::Message *from,
    struct _dilib_demo_Message *to);

extern void
__dilib_demo_Message__copyOut (
    const void *_from,
    void *_to);

// DDS dilib::demo::Message TypeSupportMetaHolder Object Body
dilib::demo::MessageTypeSupportMetaHolder::MessageTypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("dilib::demo::Message", "", "key")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __dilib_demo_Message__copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __dilib_demo_Message__copyOut;
    metaDescriptorArrLength = 2;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"dilib\"><Module name=\"demo\"><Struct name=\"Message\"><Member name=\"key\">",
"<String/></Member><Member name=\"body\"><String/></Member></Struct></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

dilib::demo::MessageTypeSupportMetaHolder::~MessageTypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::DataWriter *
dilib::demo::MessageTypeSupportMetaHolder::create_datawriter ()
{
    return new dilib::demo::MessageDataWriter_impl();
}

::DDS::OpenSplice::DataReader *
dilib::demo::MessageTypeSupportMetaHolder::create_datareader ()
{
    return new dilib::demo::MessageDataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
dilib::demo::MessageTypeSupportMetaHolder::create_view ()
{
    return new dilib::demo::MessageDataReaderView_impl();
}

// DDS dilib::demo::Message TypeSupport Object Body
dilib::demo::MessageTypeSupport::MessageTypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new dilib::demo::MessageTypeSupportMetaHolder();
}

dilib::demo::MessageTypeSupport::~MessageTypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS dilib::demo::Message DataWriter_impl Object Body
dilib::demo::MessageDataWriter_impl::MessageDataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

dilib::demo::MessageDataWriter_impl::~MessageDataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t 
dilib::demo::MessageDataWriter_impl::init (
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
dilib::demo::MessageDataWriter_impl::register_instance (
    const dilib::demo::Message & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
dilib::demo::MessageDataWriter_impl::register_instance_w_timestamp (
    const Message & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
dilib::demo::MessageDataWriter_impl::unregister_instance (
    const dilib::demo::Message & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
dilib::demo::MessageDataWriter_impl::unregister_instance_w_timestamp (
    const Message & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
dilib::demo::MessageDataWriter_impl::write (
    const dilib::demo::Message & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
dilib::demo::MessageDataWriter_impl::write_w_timestamp (
    const Message & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
dilib::demo::MessageDataWriter_impl::dispose (
    const dilib::demo::Message & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
dilib::demo::MessageDataWriter_impl::dispose_w_timestamp (
    const Message & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
dilib::demo::MessageDataWriter_impl::writedispose (
    const dilib::demo::Message & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
dilib::demo::MessageDataWriter_impl::writedispose_w_timestamp (
    const Message & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
dilib::demo::MessageDataWriter_impl::get_key_value (
    Message & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
dilib::demo::MessageDataWriter_impl::lookup_instance (
    const dilib::demo::Message & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS dilib::demo::Message DataReader_impl Object Body
dilib::demo::MessageDataReader_impl::MessageDataReader_impl ()
{
    // Parent constructor takes care of everything.
}

dilib::demo::MessageDataReader_impl::~MessageDataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t 
dilib::demo::MessageDataReader_impl::init (
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
dilib::demo::MessageDataReader_impl::read (
    dilib::demo::MessageSeq & received_data,
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
dilib::demo::MessageDataReader_impl::take (
    dilib::demo::MessageSeq & received_data,
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
dilib::demo::MessageDataReader_impl::read_w_condition (
    dilib::demo::MessageSeq & received_data,
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
dilib::demo::MessageDataReader_impl::take_w_condition (
    dilib::demo::MessageSeq & received_data,
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
dilib::demo::MessageDataReader_impl::read_next_sample (
    dilib::demo::Message & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReader_impl::take_next_sample (
    dilib::demo::Message & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReader_impl::read_instance (
    dilib::demo::MessageSeq & received_data,
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
dilib::demo::MessageDataReader_impl::take_instance (
    dilib::demo::MessageSeq & received_data,
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
dilib::demo::MessageDataReader_impl::read_next_instance (
    dilib::demo::MessageSeq & received_data,
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
dilib::demo::MessageDataReader_impl::take_next_instance (
    dilib::demo::MessageSeq & received_data,
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
dilib::demo::MessageDataReader_impl::read_next_instance_w_condition (
    dilib::demo::MessageSeq & received_data,
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
dilib::demo::MessageDataReader_impl::take_next_instance_w_condition (
    dilib::demo::MessageSeq & received_data,
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
dilib::demo::MessageDataReader_impl::return_loan (
    dilib::demo::MessageSeq & received_data,
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
                            dilib::demo::MessageSeq::freebuf( received_data.get_buffer(false) );
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
dilib::demo::MessageDataReader_impl::get_key_value (
    dilib::demo::Message & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
dilib::demo::MessageDataReader_impl::lookup_instance (
    const dilib::demo::Message & instance) THROW_ORB_EXCEPTIONS
{
    return FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReader_impl::check_preconditions (
    dilib::demo::MessageSeq & received_data,
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
dilib::demo::MessageDataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    dilib::demo::MessageSeq *data_seq = reinterpret_cast<dilib::demo::MessageSeq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
dilib::demo::MessageDataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	dilib::demo::MessageSeq *data_seq = reinterpret_cast<dilib::demo::MessageSeq *>(received_data);
	return &((*data_seq)[index]);
}

void
dilib::demo::MessageDataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    dilib::demo::MessageSeq *data_seq = reinterpret_cast<dilib::demo::MessageSeq *>(received_data);
    data_seq->length(len);
}

void
dilib::demo::MessageDataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    dilib::demo::Message *data = reinterpret_cast<dilib::demo::Message *>(to);
    __dilib_demo_Message__copyOut(from, data);
}

void 
dilib::demo::MessageDataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    dilib::demo::Message *data = reinterpret_cast<dilib::demo::Message *>(to);
    __dilib_demo_Message__copyOut(from, data);
}


// DDS dilib::demo::Message DataReaderView_impl Object Body
dilib::demo::MessageDataReaderView_impl::MessageDataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

dilib::demo::MessageDataReaderView_impl::~MessageDataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
dilib::demo::MessageDataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, dilib::demo::MessageDataReader_impl::dataSeqAlloc,
            dilib::demo::MessageDataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReaderView_impl::read (
    dilib::demo::MessageSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::MessageDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReaderView_impl::take (
    dilib::demo::MessageSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::MessageDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReaderView_impl::read_w_condition (
    dilib::demo::MessageSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::MessageDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReaderView_impl::take_w_condition (
    dilib::demo::MessageSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::MessageDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReaderView_impl::read_next_sample (
    dilib::demo::Message & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReaderView_impl::take_next_sample (
    dilib::demo::Message & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReaderView_impl::read_instance (
    dilib::demo::MessageSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::MessageDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReaderView_impl::take_instance (
    dilib::demo::MessageSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::MessageDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReaderView_impl::read_next_instance (
    dilib::demo::MessageSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::MessageDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReaderView_impl::take_next_instance (
    dilib::demo::MessageSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::MessageDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReaderView_impl::read_next_instance_w_condition (
    dilib::demo::MessageSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::MessageDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReaderView_impl::take_next_instance_w_condition (
    dilib::demo::MessageSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = dilib::demo::MessageDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
dilib::demo::MessageDataReaderView_impl::return_loan (
    dilib::demo::MessageSeq & received_data,
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
                            dilib::demo::MessageSeq::freebuf( received_data.get_buffer(false) );
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
dilib::demo::MessageDataReaderView_impl::get_key_value (
    dilib::demo::Message & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
dilib::demo::MessageDataReaderView_impl::lookup_instance (
    const dilib::demo::Message & instance) THROW_ORB_EXCEPTIONS
{
    return FooDataReaderView_impl::lookup_instance(&instance);
}
