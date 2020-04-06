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
// BtOccurrence74 struct for BtOccurrence74
type BtOccurrence74 struct {
	BtType string `json:"btType,omitempty"`
	FullPathAsString string `json:"fullPathAsString,omitempty"`
	HeadInstanceId string `json:"headInstanceId,omitempty"`
	OccurrenceWithoutHead BtOccurrence74 `json:"occurrenceWithoutHead,omitempty"`
	OccurrenceWithoutTail BtOccurrence74 `json:"occurrenceWithoutTail,omitempty"`
	Parent BtOccurrence74 `json:"parent,omitempty"`
	Path []string `json:"path,omitempty"`
	PatternDescendant bool `json:"patternDescendant,omitempty"`
	RootOccurrence bool `json:"rootOccurrence,omitempty"`
	TailInstanceId string `json:"tailInstanceId,omitempty"`
}