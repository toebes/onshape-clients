/**
 * Onshape REST API
 * The Onshape REST API consumed by all clients.
 *
 * OpenAPI spec version: 1.93
 * Contact: api-support@onshape.zendesk.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


export class BTMatchingStandardContentHierarchyInfo {
    'type'?: Array<string>;
    'standardDefault'?: string;
    'categoryDefault'?: string;
    'typesDefault'?: string;
    'typeDefault'?: string;
    'category'?: Array<string>;
    'standard'?: Array<string>;
    'types'?: Array<string>;
    'componentDocumentId'?: string;
    'name'?: string;
    'id'?: string;
    'href'?: string;
    'viewRef'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "type",
            "baseName": "type",
            "type": "Array<string>"
        },
        {
            "name": "standardDefault",
            "baseName": "standardDefault",
            "type": "string"
        },
        {
            "name": "categoryDefault",
            "baseName": "categoryDefault",
            "type": "string"
        },
        {
            "name": "typesDefault",
            "baseName": "typesDefault",
            "type": "string"
        },
        {
            "name": "typeDefault",
            "baseName": "typeDefault",
            "type": "string"
        },
        {
            "name": "category",
            "baseName": "category",
            "type": "Array<string>"
        },
        {
            "name": "standard",
            "baseName": "standard",
            "type": "Array<string>"
        },
        {
            "name": "types",
            "baseName": "types",
            "type": "Array<string>"
        },
        {
            "name": "componentDocumentId",
            "baseName": "componentDocumentId",
            "type": "string"
        },
        {
            "name": "name",
            "baseName": "name",
            "type": "string"
        },
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "href",
            "baseName": "href",
            "type": "string"
        },
        {
            "name": "viewRef",
            "baseName": "viewRef",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return BTMatchingStandardContentHierarchyInfo.attributeTypeMap;
    }
}
