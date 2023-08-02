// Copyright 2022 Michel Brito.

#include "MSC_Record.h"

#define LOCTEXT_NAMESPACE "FMSC_RecordModule"
DEFINE_LOG_CATEGORY(LogMscScreenRecorder)

void FMSC_RecordModule::StartupModule()
{
}

void FMSC_RecordModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMSC_RecordModule, MSC_Record)