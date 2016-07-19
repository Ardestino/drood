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

var gDialog = new Object;

function loaded () {
  var versionlabel  = document.getElementById("versionlabel");
  var strings       = document.getElementById("drood-strings");
  gDialog.creditbox = document.getElementById("creditbox");

  var appinfo = Components.classes["@mozilla.org/xre/app-info;1"]
    .getService(Components.interfaces.nsIXULAppInfo);
  versionlabel.value = strings.getString("DroodVersion") + " " + Cx.VERSION
    + " (" + appinfo.appBuildID + ")";
  window.setInterval(rollCredits, 50);
}

function rollCredits () {
  var cw = gDialog.creditbox.contentWindow;
  if (cw.scrollY < cw.scrollMaxY)
    cw.scrollBy(0, 1);
  else
    cw.scrollTo(0, 0);
}
