
#ifndef _GUI_TASK_SAHARA_IMAGE_TRANSFER_TASK_H
#define _GUI_TASK_SAHARA_IMAGE_TRANSFER_TASK_H

#include "definitions.h"
#include "task/task.h"
#include "qualcomm/sahara_serial.h"
#include "widget/progress_group_widget.h"


using OpenPST::QC::SaharaSerial;
using OpenPST::QC::SaharaSerialError;

namespace OpenPST {
	namespace GUI {
		class SaharaImageTransferTask : public Task
		{
			private:
				std::string imagePath;
				SaharaSerial& port;
				ProgressGroupWidget* progressContainer;
				SaharaReadDataRequest initalReadRequest;

			public:
				SaharaImageTransferTask(std::string imagePath, SaharaReadDataRequest initalReadRequest, ProgressGroupWidget* progressContainer, SaharaSerial& port);
				~SaharaImageTransferTask();
				void run();
		};
	}
}


#endif // _GUI_TASK_SAHARA_IMAGE_TRANSFER_TASK_H