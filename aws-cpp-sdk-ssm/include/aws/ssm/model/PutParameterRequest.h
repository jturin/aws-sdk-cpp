﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ParameterType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/ParameterTier.h>
#include <aws/ssm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API PutParameterRequest : public SSMRequest
  {
  public:
    PutParameterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutParameter"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The fully qualified name of the parameter that you want to add to the system.
     * The fully qualified name includes the complete hierarchy of the parameter path
     * and name. For example: <code>/Dev/DBServer/MySQL/db-string13</code> </p>
     * <p>Naming Constraints:</p> <ul> <li> <p>Parameter names are case sensitive.</p>
     * </li> <li> <p>A parameter name must be unique within an AWS Region</p> </li>
     * <li> <p>A parameter name can't be prefixed with "aws" or "ssm"
     * (case-insensitive).</p> </li> <li> <p>Parameter names can include only the
     * following symbols and letters: <code>a-zA-Z0-9_.-/</code> </p> </li> <li> <p>A
     * parameter name can't include spaces.</p> </li> <li> <p>Parameter hierarchies are
     * limited to a maximum depth of fifteen levels.</p> </li> </ul> <p>For additional
     * information about valid values for parameter names, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-parameter-name-constraints.html">Requirements
     * and Constraints for Parameter Names</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p> <note> <p>The maximum length constraint listed below includes
     * capacity for additional system attributes that are not part of the name. The
     * maximum length for the fully qualified parameter name is 1011 characters. </p>
     * </note>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The fully qualified name of the parameter that you want to add to the system.
     * The fully qualified name includes the complete hierarchy of the parameter path
     * and name. For example: <code>/Dev/DBServer/MySQL/db-string13</code> </p>
     * <p>Naming Constraints:</p> <ul> <li> <p>Parameter names are case sensitive.</p>
     * </li> <li> <p>A parameter name must be unique within an AWS Region</p> </li>
     * <li> <p>A parameter name can't be prefixed with "aws" or "ssm"
     * (case-insensitive).</p> </li> <li> <p>Parameter names can include only the
     * following symbols and letters: <code>a-zA-Z0-9_.-/</code> </p> </li> <li> <p>A
     * parameter name can't include spaces.</p> </li> <li> <p>Parameter hierarchies are
     * limited to a maximum depth of fifteen levels.</p> </li> </ul> <p>For additional
     * information about valid values for parameter names, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-parameter-name-constraints.html">Requirements
     * and Constraints for Parameter Names</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p> <note> <p>The maximum length constraint listed below includes
     * capacity for additional system attributes that are not part of the name. The
     * maximum length for the fully qualified parameter name is 1011 characters. </p>
     * </note>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The fully qualified name of the parameter that you want to add to the system.
     * The fully qualified name includes the complete hierarchy of the parameter path
     * and name. For example: <code>/Dev/DBServer/MySQL/db-string13</code> </p>
     * <p>Naming Constraints:</p> <ul> <li> <p>Parameter names are case sensitive.</p>
     * </li> <li> <p>A parameter name must be unique within an AWS Region</p> </li>
     * <li> <p>A parameter name can't be prefixed with "aws" or "ssm"
     * (case-insensitive).</p> </li> <li> <p>Parameter names can include only the
     * following symbols and letters: <code>a-zA-Z0-9_.-/</code> </p> </li> <li> <p>A
     * parameter name can't include spaces.</p> </li> <li> <p>Parameter hierarchies are
     * limited to a maximum depth of fifteen levels.</p> </li> </ul> <p>For additional
     * information about valid values for parameter names, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-parameter-name-constraints.html">Requirements
     * and Constraints for Parameter Names</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p> <note> <p>The maximum length constraint listed below includes
     * capacity for additional system attributes that are not part of the name. The
     * maximum length for the fully qualified parameter name is 1011 characters. </p>
     * </note>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The fully qualified name of the parameter that you want to add to the system.
     * The fully qualified name includes the complete hierarchy of the parameter path
     * and name. For example: <code>/Dev/DBServer/MySQL/db-string13</code> </p>
     * <p>Naming Constraints:</p> <ul> <li> <p>Parameter names are case sensitive.</p>
     * </li> <li> <p>A parameter name must be unique within an AWS Region</p> </li>
     * <li> <p>A parameter name can't be prefixed with "aws" or "ssm"
     * (case-insensitive).</p> </li> <li> <p>Parameter names can include only the
     * following symbols and letters: <code>a-zA-Z0-9_.-/</code> </p> </li> <li> <p>A
     * parameter name can't include spaces.</p> </li> <li> <p>Parameter hierarchies are
     * limited to a maximum depth of fifteen levels.</p> </li> </ul> <p>For additional
     * information about valid values for parameter names, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-parameter-name-constraints.html">Requirements
     * and Constraints for Parameter Names</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p> <note> <p>The maximum length constraint listed below includes
     * capacity for additional system attributes that are not part of the name. The
     * maximum length for the fully qualified parameter name is 1011 characters. </p>
     * </note>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The fully qualified name of the parameter that you want to add to the system.
     * The fully qualified name includes the complete hierarchy of the parameter path
     * and name. For example: <code>/Dev/DBServer/MySQL/db-string13</code> </p>
     * <p>Naming Constraints:</p> <ul> <li> <p>Parameter names are case sensitive.</p>
     * </li> <li> <p>A parameter name must be unique within an AWS Region</p> </li>
     * <li> <p>A parameter name can't be prefixed with "aws" or "ssm"
     * (case-insensitive).</p> </li> <li> <p>Parameter names can include only the
     * following symbols and letters: <code>a-zA-Z0-9_.-/</code> </p> </li> <li> <p>A
     * parameter name can't include spaces.</p> </li> <li> <p>Parameter hierarchies are
     * limited to a maximum depth of fifteen levels.</p> </li> </ul> <p>For additional
     * information about valid values for parameter names, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-parameter-name-constraints.html">Requirements
     * and Constraints for Parameter Names</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p> <note> <p>The maximum length constraint listed below includes
     * capacity for additional system attributes that are not part of the name. The
     * maximum length for the fully qualified parameter name is 1011 characters. </p>
     * </note>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The fully qualified name of the parameter that you want to add to the system.
     * The fully qualified name includes the complete hierarchy of the parameter path
     * and name. For example: <code>/Dev/DBServer/MySQL/db-string13</code> </p>
     * <p>Naming Constraints:</p> <ul> <li> <p>Parameter names are case sensitive.</p>
     * </li> <li> <p>A parameter name must be unique within an AWS Region</p> </li>
     * <li> <p>A parameter name can't be prefixed with "aws" or "ssm"
     * (case-insensitive).</p> </li> <li> <p>Parameter names can include only the
     * following symbols and letters: <code>a-zA-Z0-9_.-/</code> </p> </li> <li> <p>A
     * parameter name can't include spaces.</p> </li> <li> <p>Parameter hierarchies are
     * limited to a maximum depth of fifteen levels.</p> </li> </ul> <p>For additional
     * information about valid values for parameter names, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-parameter-name-constraints.html">Requirements
     * and Constraints for Parameter Names</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p> <note> <p>The maximum length constraint listed below includes
     * capacity for additional system attributes that are not part of the name. The
     * maximum length for the fully qualified parameter name is 1011 characters. </p>
     * </note>
     */
    inline PutParameterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The fully qualified name of the parameter that you want to add to the system.
     * The fully qualified name includes the complete hierarchy of the parameter path
     * and name. For example: <code>/Dev/DBServer/MySQL/db-string13</code> </p>
     * <p>Naming Constraints:</p> <ul> <li> <p>Parameter names are case sensitive.</p>
     * </li> <li> <p>A parameter name must be unique within an AWS Region</p> </li>
     * <li> <p>A parameter name can't be prefixed with "aws" or "ssm"
     * (case-insensitive).</p> </li> <li> <p>Parameter names can include only the
     * following symbols and letters: <code>a-zA-Z0-9_.-/</code> </p> </li> <li> <p>A
     * parameter name can't include spaces.</p> </li> <li> <p>Parameter hierarchies are
     * limited to a maximum depth of fifteen levels.</p> </li> </ul> <p>For additional
     * information about valid values for parameter names, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-parameter-name-constraints.html">Requirements
     * and Constraints for Parameter Names</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p> <note> <p>The maximum length constraint listed below includes
     * capacity for additional system attributes that are not part of the name. The
     * maximum length for the fully qualified parameter name is 1011 characters. </p>
     * </note>
     */
    inline PutParameterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified name of the parameter that you want to add to the system.
     * The fully qualified name includes the complete hierarchy of the parameter path
     * and name. For example: <code>/Dev/DBServer/MySQL/db-string13</code> </p>
     * <p>Naming Constraints:</p> <ul> <li> <p>Parameter names are case sensitive.</p>
     * </li> <li> <p>A parameter name must be unique within an AWS Region</p> </li>
     * <li> <p>A parameter name can't be prefixed with "aws" or "ssm"
     * (case-insensitive).</p> </li> <li> <p>Parameter names can include only the
     * following symbols and letters: <code>a-zA-Z0-9_.-/</code> </p> </li> <li> <p>A
     * parameter name can't include spaces.</p> </li> <li> <p>Parameter hierarchies are
     * limited to a maximum depth of fifteen levels.</p> </li> </ul> <p>For additional
     * information about valid values for parameter names, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-parameter-name-constraints.html">Requirements
     * and Constraints for Parameter Names</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p> <note> <p>The maximum length constraint listed below includes
     * capacity for additional system attributes that are not part of the name. The
     * maximum length for the fully qualified parameter name is 1011 characters. </p>
     * </note>
     */
    inline PutParameterRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Information about the parameter that you want to add to the system. Optional
     * but recommended.</p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Information about the parameter that you want to add to the system. Optional
     * but recommended.</p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Information about the parameter that you want to add to the system. Optional
     * but recommended.</p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Information about the parameter that you want to add to the system. Optional
     * but recommended.</p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Information about the parameter that you want to add to the system. Optional
     * but recommended.</p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Information about the parameter that you want to add to the system. Optional
     * but recommended.</p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline PutParameterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Information about the parameter that you want to add to the system. Optional
     * but recommended.</p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline PutParameterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Information about the parameter that you want to add to the system. Optional
     * but recommended.</p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline PutParameterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The parameter value that you want to add to the system. Standard parameters
     * have a value limit of 4 KB. Advanced parameters have a value limit of 8 KB.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The parameter value that you want to add to the system. Standard parameters
     * have a value limit of 4 KB. Advanced parameters have a value limit of 8 KB.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The parameter value that you want to add to the system. Standard parameters
     * have a value limit of 4 KB. Advanced parameters have a value limit of 8 KB.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The parameter value that you want to add to the system. Standard parameters
     * have a value limit of 4 KB. Advanced parameters have a value limit of 8 KB.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The parameter value that you want to add to the system. Standard parameters
     * have a value limit of 4 KB. Advanced parameters have a value limit of 8 KB.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The parameter value that you want to add to the system. Standard parameters
     * have a value limit of 4 KB. Advanced parameters have a value limit of 8 KB.</p>
     */
    inline PutParameterRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The parameter value that you want to add to the system. Standard parameters
     * have a value limit of 4 KB. Advanced parameters have a value limit of 8 KB.</p>
     */
    inline PutParameterRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The parameter value that you want to add to the system. Standard parameters
     * have a value limit of 4 KB. Advanced parameters have a value limit of 8 KB.</p>
     */
    inline PutParameterRequest& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The type of parameter that you want to add to the system.</p> <p>Items in a
     * <code>StringList</code> must be separated by a comma (,). You can't use other
     * punctuation or special character to escape items in the list. If you have a
     * parameter value that requires a comma, then use the <code>String</code> data
     * type.</p> <note> <p> <code>SecureString</code> is not currently supported for
     * AWS CloudFormation templates or in the China Regions.</p> </note>
     */
    inline const ParameterType& GetType() const{ return m_type; }

    /**
     * <p>The type of parameter that you want to add to the system.</p> <p>Items in a
     * <code>StringList</code> must be separated by a comma (,). You can't use other
     * punctuation or special character to escape items in the list. If you have a
     * parameter value that requires a comma, then use the <code>String</code> data
     * type.</p> <note> <p> <code>SecureString</code> is not currently supported for
     * AWS CloudFormation templates or in the China Regions.</p> </note>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of parameter that you want to add to the system.</p> <p>Items in a
     * <code>StringList</code> must be separated by a comma (,). You can't use other
     * punctuation or special character to escape items in the list. If you have a
     * parameter value that requires a comma, then use the <code>String</code> data
     * type.</p> <note> <p> <code>SecureString</code> is not currently supported for
     * AWS CloudFormation templates or in the China Regions.</p> </note>
     */
    inline void SetType(const ParameterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of parameter that you want to add to the system.</p> <p>Items in a
     * <code>StringList</code> must be separated by a comma (,). You can't use other
     * punctuation or special character to escape items in the list. If you have a
     * parameter value that requires a comma, then use the <code>String</code> data
     * type.</p> <note> <p> <code>SecureString</code> is not currently supported for
     * AWS CloudFormation templates or in the China Regions.</p> </note>
     */
    inline void SetType(ParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of parameter that you want to add to the system.</p> <p>Items in a
     * <code>StringList</code> must be separated by a comma (,). You can't use other
     * punctuation or special character to escape items in the list. If you have a
     * parameter value that requires a comma, then use the <code>String</code> data
     * type.</p> <note> <p> <code>SecureString</code> is not currently supported for
     * AWS CloudFormation templates or in the China Regions.</p> </note>
     */
    inline PutParameterRequest& WithType(const ParameterType& value) { SetType(value); return *this;}

    /**
     * <p>The type of parameter that you want to add to the system.</p> <p>Items in a
     * <code>StringList</code> must be separated by a comma (,). You can't use other
     * punctuation or special character to escape items in the list. If you have a
     * parameter value that requires a comma, then use the <code>String</code> data
     * type.</p> <note> <p> <code>SecureString</code> is not currently supported for
     * AWS CloudFormation templates or in the China Regions.</p> </note>
     */
    inline PutParameterRequest& WithType(ParameterType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The KMS Key ID that you want to use to encrypt a parameter. Either the
     * default AWS Key Management Service (AWS KMS) key automatically assigned to your
     * AWS account or a custom key. Required for parameters that use the
     * <code>SecureString</code> data type.</p> <p>If you don't specify a key ID, the
     * system uses the default key associated with your AWS account.</p> <ul> <li>
     * <p>To use your default AWS KMS key, choose the <code>SecureString</code> data
     * type, and do <i>not</i> specify the <code>Key ID</code> when you create the
     * parameter. The system automatically populates <code>Key ID</code> with your
     * default KMS key.</p> </li> <li> <p>To use a custom KMS key, choose the
     * <code>SecureString</code> data type with the <code>Key ID</code> parameter.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The KMS Key ID that you want to use to encrypt a parameter. Either the
     * default AWS Key Management Service (AWS KMS) key automatically assigned to your
     * AWS account or a custom key. Required for parameters that use the
     * <code>SecureString</code> data type.</p> <p>If you don't specify a key ID, the
     * system uses the default key associated with your AWS account.</p> <ul> <li>
     * <p>To use your default AWS KMS key, choose the <code>SecureString</code> data
     * type, and do <i>not</i> specify the <code>Key ID</code> when you create the
     * parameter. The system automatically populates <code>Key ID</code> with your
     * default KMS key.</p> </li> <li> <p>To use a custom KMS key, choose the
     * <code>SecureString</code> data type with the <code>Key ID</code> parameter.</p>
     * </li> </ul>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The KMS Key ID that you want to use to encrypt a parameter. Either the
     * default AWS Key Management Service (AWS KMS) key automatically assigned to your
     * AWS account or a custom key. Required for parameters that use the
     * <code>SecureString</code> data type.</p> <p>If you don't specify a key ID, the
     * system uses the default key associated with your AWS account.</p> <ul> <li>
     * <p>To use your default AWS KMS key, choose the <code>SecureString</code> data
     * type, and do <i>not</i> specify the <code>Key ID</code> when you create the
     * parameter. The system automatically populates <code>Key ID</code> with your
     * default KMS key.</p> </li> <li> <p>To use a custom KMS key, choose the
     * <code>SecureString</code> data type with the <code>Key ID</code> parameter.</p>
     * </li> </ul>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The KMS Key ID that you want to use to encrypt a parameter. Either the
     * default AWS Key Management Service (AWS KMS) key automatically assigned to your
     * AWS account or a custom key. Required for parameters that use the
     * <code>SecureString</code> data type.</p> <p>If you don't specify a key ID, the
     * system uses the default key associated with your AWS account.</p> <ul> <li>
     * <p>To use your default AWS KMS key, choose the <code>SecureString</code> data
     * type, and do <i>not</i> specify the <code>Key ID</code> when you create the
     * parameter. The system automatically populates <code>Key ID</code> with your
     * default KMS key.</p> </li> <li> <p>To use a custom KMS key, choose the
     * <code>SecureString</code> data type with the <code>Key ID</code> parameter.</p>
     * </li> </ul>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The KMS Key ID that you want to use to encrypt a parameter. Either the
     * default AWS Key Management Service (AWS KMS) key automatically assigned to your
     * AWS account or a custom key. Required for parameters that use the
     * <code>SecureString</code> data type.</p> <p>If you don't specify a key ID, the
     * system uses the default key associated with your AWS account.</p> <ul> <li>
     * <p>To use your default AWS KMS key, choose the <code>SecureString</code> data
     * type, and do <i>not</i> specify the <code>Key ID</code> when you create the
     * parameter. The system automatically populates <code>Key ID</code> with your
     * default KMS key.</p> </li> <li> <p>To use a custom KMS key, choose the
     * <code>SecureString</code> data type with the <code>Key ID</code> parameter.</p>
     * </li> </ul>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The KMS Key ID that you want to use to encrypt a parameter. Either the
     * default AWS Key Management Service (AWS KMS) key automatically assigned to your
     * AWS account or a custom key. Required for parameters that use the
     * <code>SecureString</code> data type.</p> <p>If you don't specify a key ID, the
     * system uses the default key associated with your AWS account.</p> <ul> <li>
     * <p>To use your default AWS KMS key, choose the <code>SecureString</code> data
     * type, and do <i>not</i> specify the <code>Key ID</code> when you create the
     * parameter. The system automatically populates <code>Key ID</code> with your
     * default KMS key.</p> </li> <li> <p>To use a custom KMS key, choose the
     * <code>SecureString</code> data type with the <code>Key ID</code> parameter.</p>
     * </li> </ul>
     */
    inline PutParameterRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The KMS Key ID that you want to use to encrypt a parameter. Either the
     * default AWS Key Management Service (AWS KMS) key automatically assigned to your
     * AWS account or a custom key. Required for parameters that use the
     * <code>SecureString</code> data type.</p> <p>If you don't specify a key ID, the
     * system uses the default key associated with your AWS account.</p> <ul> <li>
     * <p>To use your default AWS KMS key, choose the <code>SecureString</code> data
     * type, and do <i>not</i> specify the <code>Key ID</code> when you create the
     * parameter. The system automatically populates <code>Key ID</code> with your
     * default KMS key.</p> </li> <li> <p>To use a custom KMS key, choose the
     * <code>SecureString</code> data type with the <code>Key ID</code> parameter.</p>
     * </li> </ul>
     */
    inline PutParameterRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS Key ID that you want to use to encrypt a parameter. Either the
     * default AWS Key Management Service (AWS KMS) key automatically assigned to your
     * AWS account or a custom key. Required for parameters that use the
     * <code>SecureString</code> data type.</p> <p>If you don't specify a key ID, the
     * system uses the default key associated with your AWS account.</p> <ul> <li>
     * <p>To use your default AWS KMS key, choose the <code>SecureString</code> data
     * type, and do <i>not</i> specify the <code>Key ID</code> when you create the
     * parameter. The system automatically populates <code>Key ID</code> with your
     * default KMS key.</p> </li> <li> <p>To use a custom KMS key, choose the
     * <code>SecureString</code> data type with the <code>Key ID</code> parameter.</p>
     * </li> </ul>
     */
    inline PutParameterRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Overwrite an existing parameter. If not specified, will default to
     * "false".</p>
     */
    inline bool GetOverwrite() const{ return m_overwrite; }

    /**
     * <p>Overwrite an existing parameter. If not specified, will default to
     * "false".</p>
     */
    inline bool OverwriteHasBeenSet() const { return m_overwriteHasBeenSet; }

    /**
     * <p>Overwrite an existing parameter. If not specified, will default to
     * "false".</p>
     */
    inline void SetOverwrite(bool value) { m_overwriteHasBeenSet = true; m_overwrite = value; }

    /**
     * <p>Overwrite an existing parameter. If not specified, will default to
     * "false".</p>
     */
    inline PutParameterRequest& WithOverwrite(bool value) { SetOverwrite(value); return *this;}


    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline const Aws::String& GetAllowedPattern() const{ return m_allowedPattern; }

    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline bool AllowedPatternHasBeenSet() const { return m_allowedPatternHasBeenSet; }

    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline void SetAllowedPattern(const Aws::String& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = value; }

    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline void SetAllowedPattern(Aws::String&& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = std::move(value); }

    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline void SetAllowedPattern(const char* value) { m_allowedPatternHasBeenSet = true; m_allowedPattern.assign(value); }

    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline PutParameterRequest& WithAllowedPattern(const Aws::String& value) { SetAllowedPattern(value); return *this;}

    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline PutParameterRequest& WithAllowedPattern(Aws::String&& value) { SetAllowedPattern(std::move(value)); return *this;}

    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline PutParameterRequest& WithAllowedPattern(const char* value) { SetAllowedPattern(value); return *this;}


    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Systems Manager parameter to
     * identify the type of resource to which it applies, the environment, or the type
     * of configuration data referenced by the parameter. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=Resource,Value=S3bucket</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=ParameterType,Value=LicenseKey</code> </p> </li> </ul> <note> <p>To
     * add tags to an existing Systems Manager parameter, use the
     * <a>AddTagsToResource</a> action.</p> </note>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Systems Manager parameter to
     * identify the type of resource to which it applies, the environment, or the type
     * of configuration data referenced by the parameter. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=Resource,Value=S3bucket</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=ParameterType,Value=LicenseKey</code> </p> </li> </ul> <note> <p>To
     * add tags to an existing Systems Manager parameter, use the
     * <a>AddTagsToResource</a> action.</p> </note>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Systems Manager parameter to
     * identify the type of resource to which it applies, the environment, or the type
     * of configuration data referenced by the parameter. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=Resource,Value=S3bucket</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=ParameterType,Value=LicenseKey</code> </p> </li> </ul> <note> <p>To
     * add tags to an existing Systems Manager parameter, use the
     * <a>AddTagsToResource</a> action.</p> </note>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Systems Manager parameter to
     * identify the type of resource to which it applies, the environment, or the type
     * of configuration data referenced by the parameter. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=Resource,Value=S3bucket</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=ParameterType,Value=LicenseKey</code> </p> </li> </ul> <note> <p>To
     * add tags to an existing Systems Manager parameter, use the
     * <a>AddTagsToResource</a> action.</p> </note>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Systems Manager parameter to
     * identify the type of resource to which it applies, the environment, or the type
     * of configuration data referenced by the parameter. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=Resource,Value=S3bucket</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=ParameterType,Value=LicenseKey</code> </p> </li> </ul> <note> <p>To
     * add tags to an existing Systems Manager parameter, use the
     * <a>AddTagsToResource</a> action.</p> </note>
     */
    inline PutParameterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Systems Manager parameter to
     * identify the type of resource to which it applies, the environment, or the type
     * of configuration data referenced by the parameter. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=Resource,Value=S3bucket</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=ParameterType,Value=LicenseKey</code> </p> </li> </ul> <note> <p>To
     * add tags to an existing Systems Manager parameter, use the
     * <a>AddTagsToResource</a> action.</p> </note>
     */
    inline PutParameterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Systems Manager parameter to
     * identify the type of resource to which it applies, the environment, or the type
     * of configuration data referenced by the parameter. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=Resource,Value=S3bucket</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=ParameterType,Value=LicenseKey</code> </p> </li> </ul> <note> <p>To
     * add tags to an existing Systems Manager parameter, use the
     * <a>AddTagsToResource</a> action.</p> </note>
     */
    inline PutParameterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Systems Manager parameter to
     * identify the type of resource to which it applies, the environment, or the type
     * of configuration data referenced by the parameter. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=Resource,Value=S3bucket</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=ParameterType,Value=LicenseKey</code> </p> </li> </ul> <note> <p>To
     * add tags to an existing Systems Manager parameter, use the
     * <a>AddTagsToResource</a> action.</p> </note>
     */
    inline PutParameterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The parameter tier to assign to a parameter.</p> <p>Parameter Store offers a
     * standard tier and an advanced tier for parameters. Standard parameters have a
     * content size limit of 4 KB and can't be configured to use parameter policies.
     * You can create a maximum of 10,000 standard parameters for each Region in an AWS
     * account. Standard parameters are offered at no additional cost. </p> <p>Advanced
     * parameters have a content size limit of 8 KB and can be configured to use
     * parameter policies. You can create a maximum of 100,000 advanced parameters for
     * each Region in an AWS account. Advanced parameters incur a charge. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-store-advanced-parameters.html">About
     * Advanced Parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p> <p>You
     * can change a standard parameter to an advanced parameter any time. But you can't
     * revert an advanced parameter to a standard parameter. Reverting an advanced
     * parameter to a standard parameter would result in data loss because the system
     * would truncate the size of the parameter from 8 KB to 4 KB. Reverting would also
     * remove any policies attached to the parameter. Lastly, advanced parameters use a
     * different form of encryption than standard parameters. </p> <p>If you no longer
     * need an advanced parameter, or if you no longer want to incur charges for an
     * advanced parameter, you must delete it and recreate it as a new standard
     * parameter. </p> <p> <b>Using the Default Tier Configuration</b> </p> <p>In
     * <code>PutParameter</code> requests, you can specify the tier to create the
     * parameter in. Whenever you specify a tier in the request, Parameter Store
     * creates or updates the parameter according to that request. However, if you do
     * not specify a tier in a request, Parameter Store assigns the tier based on the
     * current Parameter Store default tier configuration.</p> <p>The default tier when
     * you begin using Parameter Store is the standard-parameter tier. If you use the
     * advanced-parameter tier, you can specify one of the following as the
     * default:</p> <ul> <li> <p> <b>Advanced</b>: With this option, Parameter Store
     * evaluates all requests as advanced parameters. </p> </li> <li> <p>
     * <b>Intelligent-Tiering</b>: With this option, Parameter Store evaluates each
     * request to determine if the parameter is standard or advanced. </p> <p>If the
     * request doesn't include any options that require an advanced parameter, the
     * parameter is created in the standard-parameter tier. If one or more options
     * requiring an advanced parameter are included in the request, Parameter Store
     * create a parameter in the advanced-parameter tier.</p> <p>This approach helps
     * control your parameter-related costs by always creating standard parameters
     * unless an advanced parameter is necessary. </p> </li> </ul> <p>Options that
     * require an advanced parameter include the following:</p> <ul> <li> <p>The
     * content size of the parameter is more than 4 KB.</p> </li> <li> <p>The parameter
     * uses a parameter policy.</p> </li> <li> <p>More than 10,000 parameters already
     * exist in your AWS account in the current Region.</p> </li> </ul> <p>For more
     * information about configuring the default tier option, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/ps-default-tier.html">Specifying
     * a Default Parameter Tier</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline const ParameterTier& GetTier() const{ return m_tier; }

    /**
     * <p>The parameter tier to assign to a parameter.</p> <p>Parameter Store offers a
     * standard tier and an advanced tier for parameters. Standard parameters have a
     * content size limit of 4 KB and can't be configured to use parameter policies.
     * You can create a maximum of 10,000 standard parameters for each Region in an AWS
     * account. Standard parameters are offered at no additional cost. </p> <p>Advanced
     * parameters have a content size limit of 8 KB and can be configured to use
     * parameter policies. You can create a maximum of 100,000 advanced parameters for
     * each Region in an AWS account. Advanced parameters incur a charge. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-store-advanced-parameters.html">About
     * Advanced Parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p> <p>You
     * can change a standard parameter to an advanced parameter any time. But you can't
     * revert an advanced parameter to a standard parameter. Reverting an advanced
     * parameter to a standard parameter would result in data loss because the system
     * would truncate the size of the parameter from 8 KB to 4 KB. Reverting would also
     * remove any policies attached to the parameter. Lastly, advanced parameters use a
     * different form of encryption than standard parameters. </p> <p>If you no longer
     * need an advanced parameter, or if you no longer want to incur charges for an
     * advanced parameter, you must delete it and recreate it as a new standard
     * parameter. </p> <p> <b>Using the Default Tier Configuration</b> </p> <p>In
     * <code>PutParameter</code> requests, you can specify the tier to create the
     * parameter in. Whenever you specify a tier in the request, Parameter Store
     * creates or updates the parameter according to that request. However, if you do
     * not specify a tier in a request, Parameter Store assigns the tier based on the
     * current Parameter Store default tier configuration.</p> <p>The default tier when
     * you begin using Parameter Store is the standard-parameter tier. If you use the
     * advanced-parameter tier, you can specify one of the following as the
     * default:</p> <ul> <li> <p> <b>Advanced</b>: With this option, Parameter Store
     * evaluates all requests as advanced parameters. </p> </li> <li> <p>
     * <b>Intelligent-Tiering</b>: With this option, Parameter Store evaluates each
     * request to determine if the parameter is standard or advanced. </p> <p>If the
     * request doesn't include any options that require an advanced parameter, the
     * parameter is created in the standard-parameter tier. If one or more options
     * requiring an advanced parameter are included in the request, Parameter Store
     * create a parameter in the advanced-parameter tier.</p> <p>This approach helps
     * control your parameter-related costs by always creating standard parameters
     * unless an advanced parameter is necessary. </p> </li> </ul> <p>Options that
     * require an advanced parameter include the following:</p> <ul> <li> <p>The
     * content size of the parameter is more than 4 KB.</p> </li> <li> <p>The parameter
     * uses a parameter policy.</p> </li> <li> <p>More than 10,000 parameters already
     * exist in your AWS account in the current Region.</p> </li> </ul> <p>For more
     * information about configuring the default tier option, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/ps-default-tier.html">Specifying
     * a Default Parameter Tier</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * <p>The parameter tier to assign to a parameter.</p> <p>Parameter Store offers a
     * standard tier and an advanced tier for parameters. Standard parameters have a
     * content size limit of 4 KB and can't be configured to use parameter policies.
     * You can create a maximum of 10,000 standard parameters for each Region in an AWS
     * account. Standard parameters are offered at no additional cost. </p> <p>Advanced
     * parameters have a content size limit of 8 KB and can be configured to use
     * parameter policies. You can create a maximum of 100,000 advanced parameters for
     * each Region in an AWS account. Advanced parameters incur a charge. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-store-advanced-parameters.html">About
     * Advanced Parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p> <p>You
     * can change a standard parameter to an advanced parameter any time. But you can't
     * revert an advanced parameter to a standard parameter. Reverting an advanced
     * parameter to a standard parameter would result in data loss because the system
     * would truncate the size of the parameter from 8 KB to 4 KB. Reverting would also
     * remove any policies attached to the parameter. Lastly, advanced parameters use a
     * different form of encryption than standard parameters. </p> <p>If you no longer
     * need an advanced parameter, or if you no longer want to incur charges for an
     * advanced parameter, you must delete it and recreate it as a new standard
     * parameter. </p> <p> <b>Using the Default Tier Configuration</b> </p> <p>In
     * <code>PutParameter</code> requests, you can specify the tier to create the
     * parameter in. Whenever you specify a tier in the request, Parameter Store
     * creates or updates the parameter according to that request. However, if you do
     * not specify a tier in a request, Parameter Store assigns the tier based on the
     * current Parameter Store default tier configuration.</p> <p>The default tier when
     * you begin using Parameter Store is the standard-parameter tier. If you use the
     * advanced-parameter tier, you can specify one of the following as the
     * default:</p> <ul> <li> <p> <b>Advanced</b>: With this option, Parameter Store
     * evaluates all requests as advanced parameters. </p> </li> <li> <p>
     * <b>Intelligent-Tiering</b>: With this option, Parameter Store evaluates each
     * request to determine if the parameter is standard or advanced. </p> <p>If the
     * request doesn't include any options that require an advanced parameter, the
     * parameter is created in the standard-parameter tier. If one or more options
     * requiring an advanced parameter are included in the request, Parameter Store
     * create a parameter in the advanced-parameter tier.</p> <p>This approach helps
     * control your parameter-related costs by always creating standard parameters
     * unless an advanced parameter is necessary. </p> </li> </ul> <p>Options that
     * require an advanced parameter include the following:</p> <ul> <li> <p>The
     * content size of the parameter is more than 4 KB.</p> </li> <li> <p>The parameter
     * uses a parameter policy.</p> </li> <li> <p>More than 10,000 parameters already
     * exist in your AWS account in the current Region.</p> </li> </ul> <p>For more
     * information about configuring the default tier option, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/ps-default-tier.html">Specifying
     * a Default Parameter Tier</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetTier(const ParameterTier& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>The parameter tier to assign to a parameter.</p> <p>Parameter Store offers a
     * standard tier and an advanced tier for parameters. Standard parameters have a
     * content size limit of 4 KB and can't be configured to use parameter policies.
     * You can create a maximum of 10,000 standard parameters for each Region in an AWS
     * account. Standard parameters are offered at no additional cost. </p> <p>Advanced
     * parameters have a content size limit of 8 KB and can be configured to use
     * parameter policies. You can create a maximum of 100,000 advanced parameters for
     * each Region in an AWS account. Advanced parameters incur a charge. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-store-advanced-parameters.html">About
     * Advanced Parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p> <p>You
     * can change a standard parameter to an advanced parameter any time. But you can't
     * revert an advanced parameter to a standard parameter. Reverting an advanced
     * parameter to a standard parameter would result in data loss because the system
     * would truncate the size of the parameter from 8 KB to 4 KB. Reverting would also
     * remove any policies attached to the parameter. Lastly, advanced parameters use a
     * different form of encryption than standard parameters. </p> <p>If you no longer
     * need an advanced parameter, or if you no longer want to incur charges for an
     * advanced parameter, you must delete it and recreate it as a new standard
     * parameter. </p> <p> <b>Using the Default Tier Configuration</b> </p> <p>In
     * <code>PutParameter</code> requests, you can specify the tier to create the
     * parameter in. Whenever you specify a tier in the request, Parameter Store
     * creates or updates the parameter according to that request. However, if you do
     * not specify a tier in a request, Parameter Store assigns the tier based on the
     * current Parameter Store default tier configuration.</p> <p>The default tier when
     * you begin using Parameter Store is the standard-parameter tier. If you use the
     * advanced-parameter tier, you can specify one of the following as the
     * default:</p> <ul> <li> <p> <b>Advanced</b>: With this option, Parameter Store
     * evaluates all requests as advanced parameters. </p> </li> <li> <p>
     * <b>Intelligent-Tiering</b>: With this option, Parameter Store evaluates each
     * request to determine if the parameter is standard or advanced. </p> <p>If the
     * request doesn't include any options that require an advanced parameter, the
     * parameter is created in the standard-parameter tier. If one or more options
     * requiring an advanced parameter are included in the request, Parameter Store
     * create a parameter in the advanced-parameter tier.</p> <p>This approach helps
     * control your parameter-related costs by always creating standard parameters
     * unless an advanced parameter is necessary. </p> </li> </ul> <p>Options that
     * require an advanced parameter include the following:</p> <ul> <li> <p>The
     * content size of the parameter is more than 4 KB.</p> </li> <li> <p>The parameter
     * uses a parameter policy.</p> </li> <li> <p>More than 10,000 parameters already
     * exist in your AWS account in the current Region.</p> </li> </ul> <p>For more
     * information about configuring the default tier option, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/ps-default-tier.html">Specifying
     * a Default Parameter Tier</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetTier(ParameterTier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * <p>The parameter tier to assign to a parameter.</p> <p>Parameter Store offers a
     * standard tier and an advanced tier for parameters. Standard parameters have a
     * content size limit of 4 KB and can't be configured to use parameter policies.
     * You can create a maximum of 10,000 standard parameters for each Region in an AWS
     * account. Standard parameters are offered at no additional cost. </p> <p>Advanced
     * parameters have a content size limit of 8 KB and can be configured to use
     * parameter policies. You can create a maximum of 100,000 advanced parameters for
     * each Region in an AWS account. Advanced parameters incur a charge. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-store-advanced-parameters.html">About
     * Advanced Parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p> <p>You
     * can change a standard parameter to an advanced parameter any time. But you can't
     * revert an advanced parameter to a standard parameter. Reverting an advanced
     * parameter to a standard parameter would result in data loss because the system
     * would truncate the size of the parameter from 8 KB to 4 KB. Reverting would also
     * remove any policies attached to the parameter. Lastly, advanced parameters use a
     * different form of encryption than standard parameters. </p> <p>If you no longer
     * need an advanced parameter, or if you no longer want to incur charges for an
     * advanced parameter, you must delete it and recreate it as a new standard
     * parameter. </p> <p> <b>Using the Default Tier Configuration</b> </p> <p>In
     * <code>PutParameter</code> requests, you can specify the tier to create the
     * parameter in. Whenever you specify a tier in the request, Parameter Store
     * creates or updates the parameter according to that request. However, if you do
     * not specify a tier in a request, Parameter Store assigns the tier based on the
     * current Parameter Store default tier configuration.</p> <p>The default tier when
     * you begin using Parameter Store is the standard-parameter tier. If you use the
     * advanced-parameter tier, you can specify one of the following as the
     * default:</p> <ul> <li> <p> <b>Advanced</b>: With this option, Parameter Store
     * evaluates all requests as advanced parameters. </p> </li> <li> <p>
     * <b>Intelligent-Tiering</b>: With this option, Parameter Store evaluates each
     * request to determine if the parameter is standard or advanced. </p> <p>If the
     * request doesn't include any options that require an advanced parameter, the
     * parameter is created in the standard-parameter tier. If one or more options
     * requiring an advanced parameter are included in the request, Parameter Store
     * create a parameter in the advanced-parameter tier.</p> <p>This approach helps
     * control your parameter-related costs by always creating standard parameters
     * unless an advanced parameter is necessary. </p> </li> </ul> <p>Options that
     * require an advanced parameter include the following:</p> <ul> <li> <p>The
     * content size of the parameter is more than 4 KB.</p> </li> <li> <p>The parameter
     * uses a parameter policy.</p> </li> <li> <p>More than 10,000 parameters already
     * exist in your AWS account in the current Region.</p> </li> </ul> <p>For more
     * information about configuring the default tier option, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/ps-default-tier.html">Specifying
     * a Default Parameter Tier</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline PutParameterRequest& WithTier(const ParameterTier& value) { SetTier(value); return *this;}

    /**
     * <p>The parameter tier to assign to a parameter.</p> <p>Parameter Store offers a
     * standard tier and an advanced tier for parameters. Standard parameters have a
     * content size limit of 4 KB and can't be configured to use parameter policies.
     * You can create a maximum of 10,000 standard parameters for each Region in an AWS
     * account. Standard parameters are offered at no additional cost. </p> <p>Advanced
     * parameters have a content size limit of 8 KB and can be configured to use
     * parameter policies. You can create a maximum of 100,000 advanced parameters for
     * each Region in an AWS account. Advanced parameters incur a charge. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-store-advanced-parameters.html">About
     * Advanced Parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p> <p>You
     * can change a standard parameter to an advanced parameter any time. But you can't
     * revert an advanced parameter to a standard parameter. Reverting an advanced
     * parameter to a standard parameter would result in data loss because the system
     * would truncate the size of the parameter from 8 KB to 4 KB. Reverting would also
     * remove any policies attached to the parameter. Lastly, advanced parameters use a
     * different form of encryption than standard parameters. </p> <p>If you no longer
     * need an advanced parameter, or if you no longer want to incur charges for an
     * advanced parameter, you must delete it and recreate it as a new standard
     * parameter. </p> <p> <b>Using the Default Tier Configuration</b> </p> <p>In
     * <code>PutParameter</code> requests, you can specify the tier to create the
     * parameter in. Whenever you specify a tier in the request, Parameter Store
     * creates or updates the parameter according to that request. However, if you do
     * not specify a tier in a request, Parameter Store assigns the tier based on the
     * current Parameter Store default tier configuration.</p> <p>The default tier when
     * you begin using Parameter Store is the standard-parameter tier. If you use the
     * advanced-parameter tier, you can specify one of the following as the
     * default:</p> <ul> <li> <p> <b>Advanced</b>: With this option, Parameter Store
     * evaluates all requests as advanced parameters. </p> </li> <li> <p>
     * <b>Intelligent-Tiering</b>: With this option, Parameter Store evaluates each
     * request to determine if the parameter is standard or advanced. </p> <p>If the
     * request doesn't include any options that require an advanced parameter, the
     * parameter is created in the standard-parameter tier. If one or more options
     * requiring an advanced parameter are included in the request, Parameter Store
     * create a parameter in the advanced-parameter tier.</p> <p>This approach helps
     * control your parameter-related costs by always creating standard parameters
     * unless an advanced parameter is necessary. </p> </li> </ul> <p>Options that
     * require an advanced parameter include the following:</p> <ul> <li> <p>The
     * content size of the parameter is more than 4 KB.</p> </li> <li> <p>The parameter
     * uses a parameter policy.</p> </li> <li> <p>More than 10,000 parameters already
     * exist in your AWS account in the current Region.</p> </li> </ul> <p>For more
     * information about configuring the default tier option, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/ps-default-tier.html">Specifying
     * a Default Parameter Tier</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline PutParameterRequest& WithTier(ParameterTier&& value) { SetTier(std::move(value)); return *this;}


    /**
     * <p>One or more policies to apply to a parameter. This action takes a JSON array.
     * Parameter Store supports the following policy types:</p> <p>Expiration: This
     * policy deletes the parameter after it expires. When you create the policy, you
     * specify the expiration date. You can update the expiration date and time by
     * updating the policy. Updating the <i>parameter</i> does not affect the
     * expiration date and time. When the expiration time is reached, Parameter Store
     * deletes the parameter.</p> <p>ExpirationNotification: This policy triggers an
     * event in Amazon CloudWatch Events that notifies you about the expiration. By
     * using this policy, you can receive notification before or after the expiration
     * time is reached, in units of days or hours.</p> <p>NoChangeNotification: This
     * policy triggers a CloudWatch event if a parameter has not been modified for a
     * specified period of time. This policy type is useful when, for example, a secret
     * needs to be changed within a period of time, but it has not been changed.</p>
     * <p>All existing policies are preserved until you send new policies or an empty
     * policy. For more information about parameter policies, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-policies.html">Working
     * with Parameter Policies</a>. </p>
     */
    inline const Aws::String& GetPolicies() const{ return m_policies; }

    /**
     * <p>One or more policies to apply to a parameter. This action takes a JSON array.
     * Parameter Store supports the following policy types:</p> <p>Expiration: This
     * policy deletes the parameter after it expires. When you create the policy, you
     * specify the expiration date. You can update the expiration date and time by
     * updating the policy. Updating the <i>parameter</i> does not affect the
     * expiration date and time. When the expiration time is reached, Parameter Store
     * deletes the parameter.</p> <p>ExpirationNotification: This policy triggers an
     * event in Amazon CloudWatch Events that notifies you about the expiration. By
     * using this policy, you can receive notification before or after the expiration
     * time is reached, in units of days or hours.</p> <p>NoChangeNotification: This
     * policy triggers a CloudWatch event if a parameter has not been modified for a
     * specified period of time. This policy type is useful when, for example, a secret
     * needs to be changed within a period of time, but it has not been changed.</p>
     * <p>All existing policies are preserved until you send new policies or an empty
     * policy. For more information about parameter policies, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-policies.html">Working
     * with Parameter Policies</a>. </p>
     */
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }

    /**
     * <p>One or more policies to apply to a parameter. This action takes a JSON array.
     * Parameter Store supports the following policy types:</p> <p>Expiration: This
     * policy deletes the parameter after it expires. When you create the policy, you
     * specify the expiration date. You can update the expiration date and time by
     * updating the policy. Updating the <i>parameter</i> does not affect the
     * expiration date and time. When the expiration time is reached, Parameter Store
     * deletes the parameter.</p> <p>ExpirationNotification: This policy triggers an
     * event in Amazon CloudWatch Events that notifies you about the expiration. By
     * using this policy, you can receive notification before or after the expiration
     * time is reached, in units of days or hours.</p> <p>NoChangeNotification: This
     * policy triggers a CloudWatch event if a parameter has not been modified for a
     * specified period of time. This policy type is useful when, for example, a secret
     * needs to be changed within a period of time, but it has not been changed.</p>
     * <p>All existing policies are preserved until you send new policies or an empty
     * policy. For more information about parameter policies, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-policies.html">Working
     * with Parameter Policies</a>. </p>
     */
    inline void SetPolicies(const Aws::String& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>One or more policies to apply to a parameter. This action takes a JSON array.
     * Parameter Store supports the following policy types:</p> <p>Expiration: This
     * policy deletes the parameter after it expires. When you create the policy, you
     * specify the expiration date. You can update the expiration date and time by
     * updating the policy. Updating the <i>parameter</i> does not affect the
     * expiration date and time. When the expiration time is reached, Parameter Store
     * deletes the parameter.</p> <p>ExpirationNotification: This policy triggers an
     * event in Amazon CloudWatch Events that notifies you about the expiration. By
     * using this policy, you can receive notification before or after the expiration
     * time is reached, in units of days or hours.</p> <p>NoChangeNotification: This
     * policy triggers a CloudWatch event if a parameter has not been modified for a
     * specified period of time. This policy type is useful when, for example, a secret
     * needs to be changed within a period of time, but it has not been changed.</p>
     * <p>All existing policies are preserved until you send new policies or an empty
     * policy. For more information about parameter policies, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-policies.html">Working
     * with Parameter Policies</a>. </p>
     */
    inline void SetPolicies(Aws::String&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }

    /**
     * <p>One or more policies to apply to a parameter. This action takes a JSON array.
     * Parameter Store supports the following policy types:</p> <p>Expiration: This
     * policy deletes the parameter after it expires. When you create the policy, you
     * specify the expiration date. You can update the expiration date and time by
     * updating the policy. Updating the <i>parameter</i> does not affect the
     * expiration date and time. When the expiration time is reached, Parameter Store
     * deletes the parameter.</p> <p>ExpirationNotification: This policy triggers an
     * event in Amazon CloudWatch Events that notifies you about the expiration. By
     * using this policy, you can receive notification before or after the expiration
     * time is reached, in units of days or hours.</p> <p>NoChangeNotification: This
     * policy triggers a CloudWatch event if a parameter has not been modified for a
     * specified period of time. This policy type is useful when, for example, a secret
     * needs to be changed within a period of time, but it has not been changed.</p>
     * <p>All existing policies are preserved until you send new policies or an empty
     * policy. For more information about parameter policies, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-policies.html">Working
     * with Parameter Policies</a>. </p>
     */
    inline void SetPolicies(const char* value) { m_policiesHasBeenSet = true; m_policies.assign(value); }

    /**
     * <p>One or more policies to apply to a parameter. This action takes a JSON array.
     * Parameter Store supports the following policy types:</p> <p>Expiration: This
     * policy deletes the parameter after it expires. When you create the policy, you
     * specify the expiration date. You can update the expiration date and time by
     * updating the policy. Updating the <i>parameter</i> does not affect the
     * expiration date and time. When the expiration time is reached, Parameter Store
     * deletes the parameter.</p> <p>ExpirationNotification: This policy triggers an
     * event in Amazon CloudWatch Events that notifies you about the expiration. By
     * using this policy, you can receive notification before or after the expiration
     * time is reached, in units of days or hours.</p> <p>NoChangeNotification: This
     * policy triggers a CloudWatch event if a parameter has not been modified for a
     * specified period of time. This policy type is useful when, for example, a secret
     * needs to be changed within a period of time, but it has not been changed.</p>
     * <p>All existing policies are preserved until you send new policies or an empty
     * policy. For more information about parameter policies, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-policies.html">Working
     * with Parameter Policies</a>. </p>
     */
    inline PutParameterRequest& WithPolicies(const Aws::String& value) { SetPolicies(value); return *this;}

    /**
     * <p>One or more policies to apply to a parameter. This action takes a JSON array.
     * Parameter Store supports the following policy types:</p> <p>Expiration: This
     * policy deletes the parameter after it expires. When you create the policy, you
     * specify the expiration date. You can update the expiration date and time by
     * updating the policy. Updating the <i>parameter</i> does not affect the
     * expiration date and time. When the expiration time is reached, Parameter Store
     * deletes the parameter.</p> <p>ExpirationNotification: This policy triggers an
     * event in Amazon CloudWatch Events that notifies you about the expiration. By
     * using this policy, you can receive notification before or after the expiration
     * time is reached, in units of days or hours.</p> <p>NoChangeNotification: This
     * policy triggers a CloudWatch event if a parameter has not been modified for a
     * specified period of time. This policy type is useful when, for example, a secret
     * needs to be changed within a period of time, but it has not been changed.</p>
     * <p>All existing policies are preserved until you send new policies or an empty
     * policy. For more information about parameter policies, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-policies.html">Working
     * with Parameter Policies</a>. </p>
     */
    inline PutParameterRequest& WithPolicies(Aws::String&& value) { SetPolicies(std::move(value)); return *this;}

    /**
     * <p>One or more policies to apply to a parameter. This action takes a JSON array.
     * Parameter Store supports the following policy types:</p> <p>Expiration: This
     * policy deletes the parameter after it expires. When you create the policy, you
     * specify the expiration date. You can update the expiration date and time by
     * updating the policy. Updating the <i>parameter</i> does not affect the
     * expiration date and time. When the expiration time is reached, Parameter Store
     * deletes the parameter.</p> <p>ExpirationNotification: This policy triggers an
     * event in Amazon CloudWatch Events that notifies you about the expiration. By
     * using this policy, you can receive notification before or after the expiration
     * time is reached, in units of days or hours.</p> <p>NoChangeNotification: This
     * policy triggers a CloudWatch event if a parameter has not been modified for a
     * specified period of time. This policy type is useful when, for example, a secret
     * needs to be changed within a period of time, but it has not been changed.</p>
     * <p>All existing policies are preserved until you send new policies or an empty
     * policy. For more information about parameter policies, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-policies.html">Working
     * with Parameter Policies</a>. </p>
     */
    inline PutParameterRequest& WithPolicies(const char* value) { SetPolicies(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    ParameterType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;

    bool m_overwrite;
    bool m_overwriteHasBeenSet;

    Aws::String m_allowedPattern;
    bool m_allowedPatternHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    ParameterTier m_tier;
    bool m_tierHasBeenSet;

    Aws::String m_policies;
    bool m_policiesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
