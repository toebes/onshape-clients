package onshape_test

import (
	"strings"
	"testing"

	"github.com/onshape-public/go-client/onshape"
)

func TestTreeNodes(t *testing.T) {

	type args struct {
		elementName string
		subElements *[]onshape.BTAppElementChangeParams
	}
	tests := []struct {
		name string
		args args
		want *onshape.BTAppElementContentInfo
	}{
		{"CreateAppElementWithNoSubElement",
			args{"Test-element-1", nil},
			nil,
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {

			appGlobalTreeNodes, rawResp, err := client.GlobalTreeNodesApi.GlobalTreeNodes(ctx).Execute()

			if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
				t.Error("err: ", err, " -- Response status: ", rawResp)
			} else {
				// Make sure we can call several of the methods.  Mostly these fields should be empty
				// but if they aren't we don't really want to fail the test.
				//  permissions, pathToRoot and next should be null.
				permissionSet, hasPermission := appGlobalTreeNodes.GetPermissionSetOk()
				if hasPermission {
					t.Log("Permission Set:", permissionSet)
				} else {
					t.Log("No Permissions")
				}
				pathToRoot, hasRoot := appGlobalTreeNodes.GetPathToRootOk()
				if hasRoot {
					t.Log("PathToRoot:", pathToRoot)
				} else {
					t.Log("No PathRoRoot")
				}
				next, hasNext := appGlobalTreeNodes.GetNextOk()
				if hasNext {
					t.Log("Next:", next)
				} else {
					t.Log("No Next")
				}
				// The href field better be there because it is the link to how we invoked it
				href, hasHref := appGlobalTreeNodes.GetHrefOk()
				if hasHref {
					t.Log("Href:", *href)
				} else {
					t.Error("GlobalTreeNodes - No href")
				}
				// Look for the items.  There should be at least one (at the time of this test there are 15)
				// However they are variable, so we really only need to check that we can find one - the My Onshape
				items, hasItems := appGlobalTreeNodes.GetItemsOk()
				if hasItems {
					// We have items, make sure that it isn't empty
					if len(*items) > 0 {
						t.Log("Total item Count", len(*items))
						// Find the item which matches subtype 1 (My Onshape)
						itemslot := -1
						for i := 0; i < len(*items); i++ {
							subType, hasSubtype := (*items)[i].GetSubTypeOk()
							if hasSubtype && *subType == 1 {
								itemslot = i
								break
							}
						}
						// If we actually found the entry with the correct subType, we need to check the name
						if itemslot != -1 {
							itemname, hasname := (*items)[itemslot].GetNameOk()
							if hasname {
								// TODO: This assumes English for purpose of the test..
								if strings.EqualFold(*itemname, "My Onshape") {
									t.Log("Found My Onshape at ", itemslot)
								} else {
									t.Error("GlobalTreeNodes - Did not match My Onshape with ", *itemname)
								}
							} else {
								t.Error("GlobalTreeNodes - First item has no name")
							}
						} else {
							t.Error("GlobalTreeNodes - Could not find My Onshape")
						}
					} else {
						t.Error("GlobalTreeNodes - Item List is empty")
					}
				} else {
					t.Error("GlobalTreeNodes - No Items returned")
				}
			}
		})
	}
}
