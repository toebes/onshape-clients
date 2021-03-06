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


export class BTWebRendererPerformanceMeasurementParams {
    'vendor'?: string;
    'renderer'?: string;
    'trianglesPerSecond'?: number;
    'linesPerSecond'?: number;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "vendor",
            "baseName": "vendor",
            "type": "string"
        },
        {
            "name": "renderer",
            "baseName": "renderer",
            "type": "string"
        },
        {
            "name": "trianglesPerSecond",
            "baseName": "trianglesPerSecond",
            "type": "number"
        },
        {
            "name": "linesPerSecond",
            "baseName": "linesPerSecond",
            "type": "number"
        }    ];

    static getAttributeTypeMap() {
        return BTWebRendererPerformanceMeasurementParams.attributeTypeMap;
    }
}

