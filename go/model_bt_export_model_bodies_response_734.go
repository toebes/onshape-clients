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
// BtExportModelBodiesResponse734 struct for BtExportModelBodiesResponse734
type BtExportModelBodiesResponse734 struct {
	Bodies []BtExportModelBody1272 `json:"bodies,omitempty"`
	ErrorEnum string `json:"errorEnum,omitempty"`
	MicroversionId BtMicroversionId366 `json:"microversionId,omitempty"`
}