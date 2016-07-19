/* ***** BEGIN LICENCE BLOCK *****
 * Version: MPL 2.0
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License,
 * v. 2.0. If a copy of the MPL was not distributed with this file, You can
 * obtain one at http://mozilla.org/MPL/2.0/.
 * 
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 * 
 * The Original Code is Drood Script Manager.
 * 
 * The Initial Developer of the Original Code is 4067479 Canada Inc.
 * t/a DROOD.
 * 
 * Portions created by Drood are Copyright (C) 4067479 Canada Inc. All
 * Rights Reserved.
 * 
 * Contributor(s):
 *
 ***** END LICENCE BLOCK ***** */

#ifndef DROOD_NODE_ITERATOR_H_
#define DROOD_NODE_ITERATOR_H_

#define DROOD_NODEITERATOR_CID                    \
{ /* B3647396-3CF0-4C69-BAB2-5A2E647AE750 */  \
0xb3647396, 0x3cf0, 0x4c69,                   \
{ 0xba, 0xb2, 0x5a, 0x2e, 0x64, 0x7a, 0xe7, 0x50 } }

#define DROOD_NODEITERATOR_CONTRACTID "@drood.com/dom/iterator;1"

#include "droodINodeIterator.h"
#include "nsIDOMNode.h"
#include "nsIDOMRange.h"
#include "nsCOMPtr.h"

class droodNodeIterator : public droodINodeIterator {
public:
  NS_DECL_ISUPPORTS

  NS_DECL_DROODINODEITERATOR

  droodNodeIterator ();

protected:
  virtual ~droodNodeIterator () {}

  nsCOMPtr<nsIDOMNode> mCurrentNode;
  nsCOMPtr<nsIDOMRange> mRange;
  nsCOMPtr<nsIDOMNode> mFirst;
  nsCOMPtr<nsIDOMNode> mLast;
  PRBool mContainsLast;
};

#endif // DROOD_NODE_ITERATOR_H_
