/*
 * Onshape REST API
 *
 * The Onshape REST API consumed by all clients.
 *
 * API version: 1.111
 * Contact: api-support@onshape.zendesk.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// BtBillOfMaterialsTableRowMetadata1300AllOf struct for BtBillOfMaterialsTableRowMetadata1300AllOf
type BtBillOfMaterialsTableRowMetadata1300AllOf struct {
	CrossHighlightDataIfAny BtTableAssemblyCrossHighlightData2675 `json:"crossHighlightDataIfAny,omitempty"`
	CrossHighlightData BtTableAssemblyCrossHighlightData2675 `json:"crossHighlightData,omitempty"`
	BtType string `json:"btType,omitempty"`
}