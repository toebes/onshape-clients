package onshape_test

import (
	"strings"
	"testing"
)

func TestTreeNodes(t *testing.T) {
	tests := []struct {
		name string
	}{
		{"TestGlobalTreeNodes"},
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

func TestTreeNodesMagic(t *testing.T) {
	type args struct {
		magicId       string
		getPathToRoot bool
		Offset        int32
		Limit         int32
		SortColumn    string
		SortOrder     string
	}
	tests := []struct {
		name          string
		args          args
		expectedname  string
		expectedhref  string
		expectedcount int32
		expectednext  string
	}{
		{"TestGlobalTreeNodesMagic",
			args{"1", true, 0, 15, "", ""},
			"My Onshape",
			"https://cad.onshape.com/api/globaltreenodes/magic/1?getPathToRoot=true&offset=0&limit=15",
			15,
			"https://cad.onshape.com/api/globaltreenodes/magic/1?getPathToRoot=true&offset=15&limit=15",
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			globalTreeNodesApi := client.GlobalTreeNodesApi.GlobalTreeNodesMagic(ctx, tt.args.magicId).GetPathToRoot(tt.args.getPathToRoot)
			if tt.args.Offset != -1 {
				globalTreeNodesApi = globalTreeNodesApi.Offset(tt.args.Offset)
			}
			if tt.args.Limit != -1 {
				globalTreeNodesApi = globalTreeNodesApi.Limit(tt.args.Limit)
			}
			if tt.args.SortColumn != "" {
				globalTreeNodesApi = globalTreeNodesApi.SortColumn(tt.args.SortColumn)
			}
			if tt.args.SortOrder != "" {
				globalTreeNodesApi = globalTreeNodesApi.SortOrder(tt.args.SortOrder)
			}
			appGlobalTreeNodes, rawResp, err := globalTreeNodesApi.Execute()

			if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
				t.Error("err: ", err, " -- Response status: ", rawResp)
			} else {
				// Make sure we can call several of the methods.  Mostly these fields should be empty
				// but if they aren't we don't really want to fail the test.
				//  permissions should be null.
				permissionSet, hasPermission := appGlobalTreeNodes.GetPermissionSetOk()
				if hasPermission {
					t.Log("Permission Set:", permissionSet)
				} else {
					t.Log("No Permissions")
				}
				// See if we have to check the root entry (assuming we asked for it)
				pathToRoot, hasRoot := appGlobalTreeNodes.GetPathToRootOk()
				if hasRoot != tt.args.getPathToRoot {
					t.Errorf(tt.name+" - pathToRoot '%v' not consistent with request '%v'", pathToRoot, tt.args.getPathToRoot)
				} else if hasRoot {
					// Make sure we have at least one entry in the root to compare against
					if len(*pathToRoot) < 1 {
						t.Error(tt.name + " - pathToRoot array is empty")
					} else {
						name, hasname := (*pathToRoot)[0].GetNameOk()
						if !hasname {
							t.Error(tt.name + " no name on pathToRoot entry")
						} else if !strings.EqualFold(*name, tt.expectedname) {
							t.Errorf(tt.name+" - pathToRoot name '%v' did not match '%v'", *name, tt.expectedname)
						} else {
							t.Log("Root Entry is:", *name)
						}
					}
				} else {
					t.Log("No PathRoRoot")
				}
				// Whether we have a next is sub
				next, hasNext := appGlobalTreeNodes.GetNextOk()
				if hasNext {
					if !strings.EqualFold(*next, tt.expectednext) {
						t.Errorf(tt.name+" - next '%v' did not match '%v'", *next, tt.expectednext)
					} else {
						t.Log("Next:", *next)
					}
				} else {
					t.Log("No Next")
				}
				// The href field better be there because it is the link to how we invoked it
				href, hasHref := appGlobalTreeNodes.GetHrefOk()
				if hasHref {
					if !strings.EqualFold(*href, tt.expectedhref) {
						t.Errorf(tt.name+" - href '%v' did not match '%v'", *href, tt.expectedhref)
					} else {
						t.Log("href:", *href)
					}
				} else {
					t.Error("GlobalTreeNodes - No href")
				}
				// Look for the items.  There should be at least one (at the time of this test there are 15)
				// However they are variable, so we really only need to check that we can find one - the My Onshape
				items, hasItems := appGlobalTreeNodes.GetItemsOk()
				if hasItems {
					// If there is a next, then we should get the correct number of items.
					if hasNext && (len(*items) != int(tt.args.Limit)) {
						t.Errorf(tt.name+" - Number of items '%v' did not match requested number '%v'", len(*items), tt.args.Limit)
					}
					// We have items, make sure that it isn't empty
					if len(*items) > 0 {
						t.Log("Total item Count", len(*items))
						// Find the item which matches subtype 1 (My Onshape)
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
