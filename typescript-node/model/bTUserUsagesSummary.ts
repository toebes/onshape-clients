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


export class BTUserUsagesSummary {
    'ownerName'?: string;
    'ownerId'?: string;
    'ownerType'?: string;
    'count'?: number;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "ownerName",
            "baseName": "ownerName",
            "type": "string"
        },
        {
            "name": "ownerId",
            "baseName": "ownerId",
            "type": "string"
        },
        {
            "name": "ownerType",
            "baseName": "ownerType",
            "type": "string"
        },
        {
            "name": "count",
            "baseName": "count",
            "type": "number"
        }    ];

    static getAttributeTypeMap() {
        return BTUserUsagesSummary.attributeTypeMap;
    }
}
