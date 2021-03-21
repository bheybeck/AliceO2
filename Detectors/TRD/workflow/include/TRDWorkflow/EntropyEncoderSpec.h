// Copyright CERN and copyright holders of ALICE O2. This software is
// distributed under the terms of the GNU General Public License v3 (GPL
// Version 3), copied verbatim in the file "COPYING".
//
// See http://alice-o2.web.cern.ch/license for full licensing information.
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.

/// @file   EntropyEncoderSpec.h
/// @brief  Convert TRD data to CTF (EncodedBlocks)

#ifndef O2_TRD_ENTROPYENCODER_SPEC
#define O2_TRD_ENTROPYENCODER_SPEC

#include "Framework/DataProcessorSpec.h"
#include "Framework/Task.h"

namespace o2
{
namespace trd
{

/// create a processor spec
framework::DataProcessorSpec getEntropyEncoderSpec();

} // namespace trd
} // namespace o2

#endif
