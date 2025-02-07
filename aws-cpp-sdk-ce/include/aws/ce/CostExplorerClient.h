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
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ce/model/GetCostAndUsageResult.h>
#include <aws/ce/model/GetCostAndUsageWithResourcesResult.h>
#include <aws/ce/model/GetCostForecastResult.h>
#include <aws/ce/model/GetDimensionValuesResult.h>
#include <aws/ce/model/GetReservationCoverageResult.h>
#include <aws/ce/model/GetReservationPurchaseRecommendationResult.h>
#include <aws/ce/model/GetReservationUtilizationResult.h>
#include <aws/ce/model/GetRightsizingRecommendationResult.h>
#include <aws/ce/model/GetSavingsPlansCoverageResult.h>
#include <aws/ce/model/GetSavingsPlansPurchaseRecommendationResult.h>
#include <aws/ce/model/GetSavingsPlansUtilizationResult.h>
#include <aws/ce/model/GetSavingsPlansUtilizationDetailsResult.h>
#include <aws/ce/model/GetTagsResult.h>
#include <aws/ce/model/GetUsageForecastResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace CostExplorer
{

namespace Model
{
        class GetCostAndUsageRequest;
        class GetCostAndUsageWithResourcesRequest;
        class GetCostForecastRequest;
        class GetDimensionValuesRequest;
        class GetReservationCoverageRequest;
        class GetReservationPurchaseRecommendationRequest;
        class GetReservationUtilizationRequest;
        class GetRightsizingRecommendationRequest;
        class GetSavingsPlansCoverageRequest;
        class GetSavingsPlansPurchaseRecommendationRequest;
        class GetSavingsPlansUtilizationRequest;
        class GetSavingsPlansUtilizationDetailsRequest;
        class GetTagsRequest;
        class GetUsageForecastRequest;

        typedef Aws::Utils::Outcome<GetCostAndUsageResult, Aws::Client::AWSError<CostExplorerErrors>> GetCostAndUsageOutcome;
        typedef Aws::Utils::Outcome<GetCostAndUsageWithResourcesResult, Aws::Client::AWSError<CostExplorerErrors>> GetCostAndUsageWithResourcesOutcome;
        typedef Aws::Utils::Outcome<GetCostForecastResult, Aws::Client::AWSError<CostExplorerErrors>> GetCostForecastOutcome;
        typedef Aws::Utils::Outcome<GetDimensionValuesResult, Aws::Client::AWSError<CostExplorerErrors>> GetDimensionValuesOutcome;
        typedef Aws::Utils::Outcome<GetReservationCoverageResult, Aws::Client::AWSError<CostExplorerErrors>> GetReservationCoverageOutcome;
        typedef Aws::Utils::Outcome<GetReservationPurchaseRecommendationResult, Aws::Client::AWSError<CostExplorerErrors>> GetReservationPurchaseRecommendationOutcome;
        typedef Aws::Utils::Outcome<GetReservationUtilizationResult, Aws::Client::AWSError<CostExplorerErrors>> GetReservationUtilizationOutcome;
        typedef Aws::Utils::Outcome<GetRightsizingRecommendationResult, Aws::Client::AWSError<CostExplorerErrors>> GetRightsizingRecommendationOutcome;
        typedef Aws::Utils::Outcome<GetSavingsPlansCoverageResult, Aws::Client::AWSError<CostExplorerErrors>> GetSavingsPlansCoverageOutcome;
        typedef Aws::Utils::Outcome<GetSavingsPlansPurchaseRecommendationResult, Aws::Client::AWSError<CostExplorerErrors>> GetSavingsPlansPurchaseRecommendationOutcome;
        typedef Aws::Utils::Outcome<GetSavingsPlansUtilizationResult, Aws::Client::AWSError<CostExplorerErrors>> GetSavingsPlansUtilizationOutcome;
        typedef Aws::Utils::Outcome<GetSavingsPlansUtilizationDetailsResult, Aws::Client::AWSError<CostExplorerErrors>> GetSavingsPlansUtilizationDetailsOutcome;
        typedef Aws::Utils::Outcome<GetTagsResult, Aws::Client::AWSError<CostExplorerErrors>> GetTagsOutcome;
        typedef Aws::Utils::Outcome<GetUsageForecastResult, Aws::Client::AWSError<CostExplorerErrors>> GetUsageForecastOutcome;

        typedef std::future<GetCostAndUsageOutcome> GetCostAndUsageOutcomeCallable;
        typedef std::future<GetCostAndUsageWithResourcesOutcome> GetCostAndUsageWithResourcesOutcomeCallable;
        typedef std::future<GetCostForecastOutcome> GetCostForecastOutcomeCallable;
        typedef std::future<GetDimensionValuesOutcome> GetDimensionValuesOutcomeCallable;
        typedef std::future<GetReservationCoverageOutcome> GetReservationCoverageOutcomeCallable;
        typedef std::future<GetReservationPurchaseRecommendationOutcome> GetReservationPurchaseRecommendationOutcomeCallable;
        typedef std::future<GetReservationUtilizationOutcome> GetReservationUtilizationOutcomeCallable;
        typedef std::future<GetRightsizingRecommendationOutcome> GetRightsizingRecommendationOutcomeCallable;
        typedef std::future<GetSavingsPlansCoverageOutcome> GetSavingsPlansCoverageOutcomeCallable;
        typedef std::future<GetSavingsPlansPurchaseRecommendationOutcome> GetSavingsPlansPurchaseRecommendationOutcomeCallable;
        typedef std::future<GetSavingsPlansUtilizationOutcome> GetSavingsPlansUtilizationOutcomeCallable;
        typedef std::future<GetSavingsPlansUtilizationDetailsOutcome> GetSavingsPlansUtilizationDetailsOutcomeCallable;
        typedef std::future<GetTagsOutcome> GetTagsOutcomeCallable;
        typedef std::future<GetUsageForecastOutcome> GetUsageForecastOutcomeCallable;
} // namespace Model

  class CostExplorerClient;

    typedef std::function<void(const CostExplorerClient*, const Model::GetCostAndUsageRequest&, const Model::GetCostAndUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCostAndUsageResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetCostAndUsageWithResourcesRequest&, const Model::GetCostAndUsageWithResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCostAndUsageWithResourcesResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetCostForecastRequest&, const Model::GetCostForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCostForecastResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetDimensionValuesRequest&, const Model::GetDimensionValuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDimensionValuesResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetReservationCoverageRequest&, const Model::GetReservationCoverageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReservationCoverageResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetReservationPurchaseRecommendationRequest&, const Model::GetReservationPurchaseRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReservationPurchaseRecommendationResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetReservationUtilizationRequest&, const Model::GetReservationUtilizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReservationUtilizationResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetRightsizingRecommendationRequest&, const Model::GetRightsizingRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRightsizingRecommendationResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetSavingsPlansCoverageRequest&, const Model::GetSavingsPlansCoverageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSavingsPlansCoverageResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetSavingsPlansPurchaseRecommendationRequest&, const Model::GetSavingsPlansPurchaseRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSavingsPlansPurchaseRecommendationResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetSavingsPlansUtilizationRequest&, const Model::GetSavingsPlansUtilizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSavingsPlansUtilizationResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetSavingsPlansUtilizationDetailsRequest&, const Model::GetSavingsPlansUtilizationDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSavingsPlansUtilizationDetailsResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetTagsRequest&, const Model::GetTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagsResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetUsageForecastRequest&, const Model::GetUsageForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsageForecastResponseReceivedHandler;

  /**
   * <p>The Cost Explorer API enables you to programmatically query your cost and
   * usage data. You can query for aggregated data such as total monthly costs or
   * total daily usage. You can also query for granular data, such as the number of
   * daily write operations for Amazon DynamoDB database tables in your production
   * environment. </p> <p>Service Endpoint</p> <p>The Cost Explorer API provides the
   * following endpoint:</p> <ul> <li> <p>
   * <code>https://ce.us-east-1.amazonaws.com</code> </p> </li> </ul> <p>For
   * information about costs associated with the Cost Explorer API, see <a
   * href="https://aws.amazon.com/aws-cost-management/pricing/">AWS Cost Management
   * Pricing</a>.</p>
   */
  class AWS_COSTEXPLORER_API CostExplorerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostExplorerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostExplorerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CostExplorerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CostExplorerClient();

        inline virtual const char* GetServiceClientName() const override { return "Cost Explorer"; }


        /**
         * <p>Retrieves cost and usage metrics for your account. You can specify which cost
         * and usage-related metric, such as <code>BlendedCosts</code> or
         * <code>UsageQuantity</code>, that you want the request to return. You can also
         * filter and group your data by various dimensions, such as <code>SERVICE</code>
         * or <code>AZ</code>, in a specific time range. For a complete list of valid
         * dimensions, see the <a
         * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_GetDimensionValues.html">GetDimensionValues</a>
         * operation. Master accounts in an organization in AWS Organizations have access
         * to all member accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostAndUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCostAndUsageOutcome GetCostAndUsage(const Model::GetCostAndUsageRequest& request) const;

        /**
         * <p>Retrieves cost and usage metrics for your account. You can specify which cost
         * and usage-related metric, such as <code>BlendedCosts</code> or
         * <code>UsageQuantity</code>, that you want the request to return. You can also
         * filter and group your data by various dimensions, such as <code>SERVICE</code>
         * or <code>AZ</code>, in a specific time range. For a complete list of valid
         * dimensions, see the <a
         * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_GetDimensionValues.html">GetDimensionValues</a>
         * operation. Master accounts in an organization in AWS Organizations have access
         * to all member accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostAndUsage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCostAndUsageOutcomeCallable GetCostAndUsageCallable(const Model::GetCostAndUsageRequest& request) const;

        /**
         * <p>Retrieves cost and usage metrics for your account. You can specify which cost
         * and usage-related metric, such as <code>BlendedCosts</code> or
         * <code>UsageQuantity</code>, that you want the request to return. You can also
         * filter and group your data by various dimensions, such as <code>SERVICE</code>
         * or <code>AZ</code>, in a specific time range. For a complete list of valid
         * dimensions, see the <a
         * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_GetDimensionValues.html">GetDimensionValues</a>
         * operation. Master accounts in an organization in AWS Organizations have access
         * to all member accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostAndUsage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCostAndUsageAsync(const Model::GetCostAndUsageRequest& request, const GetCostAndUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves cost and usage metrics with resources for your account. You can
         * specify which cost and usage-related metric, such as <code>BlendedCosts</code>
         * or <code>UsageQuantity</code>, that you want the request to return. You can also
         * filter and group your data by various dimensions, such as <code>SERVICE</code>
         * or <code>AZ</code>, in a specific time range. For a complete list of valid
         * dimensions, see the <a
         * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_GetDimensionValues.html">GetDimensionValues</a>
         * operation. Master accounts in an organization in AWS Organizations have access
         * to all member accounts. This API is currently available for the Amazon Elastic
         * Compute Cloud – Compute service only.</p> <note> <p>This is an opt-in only
         * feature. You can enable this feature from the Cost Explorer Settings page. For
         * information on how to access the Settings page, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/ce-access.html">Controlling
         * Access for Cost Explorer</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostAndUsageWithResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCostAndUsageWithResourcesOutcome GetCostAndUsageWithResources(const Model::GetCostAndUsageWithResourcesRequest& request) const;

        /**
         * <p>Retrieves cost and usage metrics with resources for your account. You can
         * specify which cost and usage-related metric, such as <code>BlendedCosts</code>
         * or <code>UsageQuantity</code>, that you want the request to return. You can also
         * filter and group your data by various dimensions, such as <code>SERVICE</code>
         * or <code>AZ</code>, in a specific time range. For a complete list of valid
         * dimensions, see the <a
         * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_GetDimensionValues.html">GetDimensionValues</a>
         * operation. Master accounts in an organization in AWS Organizations have access
         * to all member accounts. This API is currently available for the Amazon Elastic
         * Compute Cloud – Compute service only.</p> <note> <p>This is an opt-in only
         * feature. You can enable this feature from the Cost Explorer Settings page. For
         * information on how to access the Settings page, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/ce-access.html">Controlling
         * Access for Cost Explorer</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostAndUsageWithResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCostAndUsageWithResourcesOutcomeCallable GetCostAndUsageWithResourcesCallable(const Model::GetCostAndUsageWithResourcesRequest& request) const;

        /**
         * <p>Retrieves cost and usage metrics with resources for your account. You can
         * specify which cost and usage-related metric, such as <code>BlendedCosts</code>
         * or <code>UsageQuantity</code>, that you want the request to return. You can also
         * filter and group your data by various dimensions, such as <code>SERVICE</code>
         * or <code>AZ</code>, in a specific time range. For a complete list of valid
         * dimensions, see the <a
         * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_GetDimensionValues.html">GetDimensionValues</a>
         * operation. Master accounts in an organization in AWS Organizations have access
         * to all member accounts. This API is currently available for the Amazon Elastic
         * Compute Cloud – Compute service only.</p> <note> <p>This is an opt-in only
         * feature. You can enable this feature from the Cost Explorer Settings page. For
         * information on how to access the Settings page, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/ce-access.html">Controlling
         * Access for Cost Explorer</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostAndUsageWithResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCostAndUsageWithResourcesAsync(const Model::GetCostAndUsageWithResourcesRequest& request, const GetCostAndUsageWithResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a forecast for how much Amazon Web Services predicts that you will
         * spend over the forecast time period that you select, based on your past costs.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCostForecastOutcome GetCostForecast(const Model::GetCostForecastRequest& request) const;

        /**
         * <p>Retrieves a forecast for how much Amazon Web Services predicts that you will
         * spend over the forecast time period that you select, based on your past costs.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostForecast">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCostForecastOutcomeCallable GetCostForecastCallable(const Model::GetCostForecastRequest& request) const;

        /**
         * <p>Retrieves a forecast for how much Amazon Web Services predicts that you will
         * spend over the forecast time period that you select, based on your past costs.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostForecast">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCostForecastAsync(const Model::GetCostForecastRequest& request, const GetCostForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all available filter values for a specified filter over a period of
         * time. You can search the dimension values for an arbitrary string.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetDimensionValues">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDimensionValuesOutcome GetDimensionValues(const Model::GetDimensionValuesRequest& request) const;

        /**
         * <p>Retrieves all available filter values for a specified filter over a period of
         * time. You can search the dimension values for an arbitrary string.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetDimensionValues">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDimensionValuesOutcomeCallable GetDimensionValuesCallable(const Model::GetDimensionValuesRequest& request) const;

        /**
         * <p>Retrieves all available filter values for a specified filter over a period of
         * time. You can search the dimension values for an arbitrary string.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetDimensionValues">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDimensionValuesAsync(const Model::GetDimensionValuesRequest& request, const GetDimensionValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the reservation coverage for your account. This enables you to see
         * how much of your Amazon Elastic Compute Cloud, Amazon ElastiCache, Amazon
         * Relational Database Service, or Amazon Redshift usage is covered by a
         * reservation. An organization's master account can see the coverage of the
         * associated member accounts. For any time period, you can filter data about
         * reservation usage by the following dimensions:</p> <ul> <li> <p>AZ</p> </li>
         * <li> <p>CACHE_ENGINE</p> </li> <li> <p>DATABASE_ENGINE</p> </li> <li>
         * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
         * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
         * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>SERVICE</p> </li> <li>
         * <p>TAG</p> </li> <li> <p>TENANCY</p> </li> </ul> <p>To determine valid values
         * for a dimension, use the <code>GetDimensionValues</code> operation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationCoverage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReservationCoverageOutcome GetReservationCoverage(const Model::GetReservationCoverageRequest& request) const;

        /**
         * <p>Retrieves the reservation coverage for your account. This enables you to see
         * how much of your Amazon Elastic Compute Cloud, Amazon ElastiCache, Amazon
         * Relational Database Service, or Amazon Redshift usage is covered by a
         * reservation. An organization's master account can see the coverage of the
         * associated member accounts. For any time period, you can filter data about
         * reservation usage by the following dimensions:</p> <ul> <li> <p>AZ</p> </li>
         * <li> <p>CACHE_ENGINE</p> </li> <li> <p>DATABASE_ENGINE</p> </li> <li>
         * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
         * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
         * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>SERVICE</p> </li> <li>
         * <p>TAG</p> </li> <li> <p>TENANCY</p> </li> </ul> <p>To determine valid values
         * for a dimension, use the <code>GetDimensionValues</code> operation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationCoverage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReservationCoverageOutcomeCallable GetReservationCoverageCallable(const Model::GetReservationCoverageRequest& request) const;

        /**
         * <p>Retrieves the reservation coverage for your account. This enables you to see
         * how much of your Amazon Elastic Compute Cloud, Amazon ElastiCache, Amazon
         * Relational Database Service, or Amazon Redshift usage is covered by a
         * reservation. An organization's master account can see the coverage of the
         * associated member accounts. For any time period, you can filter data about
         * reservation usage by the following dimensions:</p> <ul> <li> <p>AZ</p> </li>
         * <li> <p>CACHE_ENGINE</p> </li> <li> <p>DATABASE_ENGINE</p> </li> <li>
         * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
         * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
         * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>SERVICE</p> </li> <li>
         * <p>TAG</p> </li> <li> <p>TENANCY</p> </li> </ul> <p>To determine valid values
         * for a dimension, use the <code>GetDimensionValues</code> operation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationCoverage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReservationCoverageAsync(const Model::GetReservationCoverageRequest& request, const GetReservationCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets recommendations for which reservations to purchase. These
         * recommendations could help you reduce your costs. Reservations provide a
         * discounted hourly rate (up to 75%) compared to On-Demand pricing.</p> <p>AWS
         * generates your recommendations by identifying your On-Demand usage during a
         * specific time period and collecting your usage into categories that are eligible
         * for a reservation. After AWS has these categories, it simulates every
         * combination of reservations in each category of usage to identify the best
         * number of each type of RI to purchase to maximize your estimated savings. </p>
         * <p>For example, AWS automatically aggregates your Amazon EC2 Linux, shared
         * tenancy, and c4 family usage in the US West (Oregon) Region and recommends that
         * you buy size-flexible regional reservations to apply to the c4 family usage. AWS
         * recommends the smallest size instance in an instance family. This makes it
         * easier to purchase a size-flexible RI. AWS also shows the equal number of
         * normalized units so that you can purchase any instance size that you want. For
         * this example, your RI recommendation would be for <code>c4.large</code> because
         * that is the smallest size instance in the c4 instance family.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationPurchaseRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReservationPurchaseRecommendationOutcome GetReservationPurchaseRecommendation(const Model::GetReservationPurchaseRecommendationRequest& request) const;

        /**
         * <p>Gets recommendations for which reservations to purchase. These
         * recommendations could help you reduce your costs. Reservations provide a
         * discounted hourly rate (up to 75%) compared to On-Demand pricing.</p> <p>AWS
         * generates your recommendations by identifying your On-Demand usage during a
         * specific time period and collecting your usage into categories that are eligible
         * for a reservation. After AWS has these categories, it simulates every
         * combination of reservations in each category of usage to identify the best
         * number of each type of RI to purchase to maximize your estimated savings. </p>
         * <p>For example, AWS automatically aggregates your Amazon EC2 Linux, shared
         * tenancy, and c4 family usage in the US West (Oregon) Region and recommends that
         * you buy size-flexible regional reservations to apply to the c4 family usage. AWS
         * recommends the smallest size instance in an instance family. This makes it
         * easier to purchase a size-flexible RI. AWS also shows the equal number of
         * normalized units so that you can purchase any instance size that you want. For
         * this example, your RI recommendation would be for <code>c4.large</code> because
         * that is the smallest size instance in the c4 instance family.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationPurchaseRecommendation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReservationPurchaseRecommendationOutcomeCallable GetReservationPurchaseRecommendationCallable(const Model::GetReservationPurchaseRecommendationRequest& request) const;

        /**
         * <p>Gets recommendations for which reservations to purchase. These
         * recommendations could help you reduce your costs. Reservations provide a
         * discounted hourly rate (up to 75%) compared to On-Demand pricing.</p> <p>AWS
         * generates your recommendations by identifying your On-Demand usage during a
         * specific time period and collecting your usage into categories that are eligible
         * for a reservation. After AWS has these categories, it simulates every
         * combination of reservations in each category of usage to identify the best
         * number of each type of RI to purchase to maximize your estimated savings. </p>
         * <p>For example, AWS automatically aggregates your Amazon EC2 Linux, shared
         * tenancy, and c4 family usage in the US West (Oregon) Region and recommends that
         * you buy size-flexible regional reservations to apply to the c4 family usage. AWS
         * recommends the smallest size instance in an instance family. This makes it
         * easier to purchase a size-flexible RI. AWS also shows the equal number of
         * normalized units so that you can purchase any instance size that you want. For
         * this example, your RI recommendation would be for <code>c4.large</code> because
         * that is the smallest size instance in the c4 instance family.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationPurchaseRecommendation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReservationPurchaseRecommendationAsync(const Model::GetReservationPurchaseRecommendationRequest& request, const GetReservationPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the reservation utilization for your account. Master accounts in an
         * organization have access to member accounts. You can filter data by dimensions
         * in a time period. You can use <code>GetDimensionValues</code> to determine the
         * possible dimension values. Currently, you can group only by
         * <code>SUBSCRIPTION_ID</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationUtilization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReservationUtilizationOutcome GetReservationUtilization(const Model::GetReservationUtilizationRequest& request) const;

        /**
         * <p>Retrieves the reservation utilization for your account. Master accounts in an
         * organization have access to member accounts. You can filter data by dimensions
         * in a time period. You can use <code>GetDimensionValues</code> to determine the
         * possible dimension values. Currently, you can group only by
         * <code>SUBSCRIPTION_ID</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationUtilization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReservationUtilizationOutcomeCallable GetReservationUtilizationCallable(const Model::GetReservationUtilizationRequest& request) const;

        /**
         * <p>Retrieves the reservation utilization for your account. Master accounts in an
         * organization have access to member accounts. You can filter data by dimensions
         * in a time period. You can use <code>GetDimensionValues</code> to determine the
         * possible dimension values. Currently, you can group only by
         * <code>SUBSCRIPTION_ID</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationUtilization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReservationUtilizationAsync(const Model::GetReservationUtilizationRequest& request, const GetReservationUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates recommendations that helps you save cost by identifying idle and
         * underutilized Amazon EC2 instances.</p> <p>Recommendations are generated to
         * either downsize or terminate instances, along with providing savings detail and
         * metrics. For details on calculation and function, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/ce-what-is.html">Optimizing
         * Your Cost with Rightsizing Recommendations</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetRightsizingRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRightsizingRecommendationOutcome GetRightsizingRecommendation(const Model::GetRightsizingRecommendationRequest& request) const;

        /**
         * <p>Creates recommendations that helps you save cost by identifying idle and
         * underutilized Amazon EC2 instances.</p> <p>Recommendations are generated to
         * either downsize or terminate instances, along with providing savings detail and
         * metrics. For details on calculation and function, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/ce-what-is.html">Optimizing
         * Your Cost with Rightsizing Recommendations</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetRightsizingRecommendation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRightsizingRecommendationOutcomeCallable GetRightsizingRecommendationCallable(const Model::GetRightsizingRecommendationRequest& request) const;

        /**
         * <p>Creates recommendations that helps you save cost by identifying idle and
         * underutilized Amazon EC2 instances.</p> <p>Recommendations are generated to
         * either downsize or terminate instances, along with providing savings detail and
         * metrics. For details on calculation and function, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/ce-what-is.html">Optimizing
         * Your Cost with Rightsizing Recommendations</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetRightsizingRecommendation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRightsizingRecommendationAsync(const Model::GetRightsizingRecommendationRequest& request, const GetRightsizingRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the Savings Plans covered for your account. This enables you to see
         * how much of your cost is covered by a Savings Plan. An organization’s master
         * account can see the coverage of the associated member accounts. For any time
         * period, you can filter data for Savings Plans usage with the following
         * dimensions:</p> <ul> <li> <p> <code>LINKED_ACCOUNT</code> </p> </li> <li> <p>
         * <code>REGION</code> </p> </li> <li> <p> <code>SERVICE</code> </p> </li> <li> <p>
         * <code>INSTANCE_FAMILY</code> </p> </li> </ul> <p>To determine valid values for a
         * dimension, use the <code>GetDimensionValues</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansCoverage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSavingsPlansCoverageOutcome GetSavingsPlansCoverage(const Model::GetSavingsPlansCoverageRequest& request) const;

        /**
         * <p>Retrieves the Savings Plans covered for your account. This enables you to see
         * how much of your cost is covered by a Savings Plan. An organization’s master
         * account can see the coverage of the associated member accounts. For any time
         * period, you can filter data for Savings Plans usage with the following
         * dimensions:</p> <ul> <li> <p> <code>LINKED_ACCOUNT</code> </p> </li> <li> <p>
         * <code>REGION</code> </p> </li> <li> <p> <code>SERVICE</code> </p> </li> <li> <p>
         * <code>INSTANCE_FAMILY</code> </p> </li> </ul> <p>To determine valid values for a
         * dimension, use the <code>GetDimensionValues</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansCoverage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSavingsPlansCoverageOutcomeCallable GetSavingsPlansCoverageCallable(const Model::GetSavingsPlansCoverageRequest& request) const;

        /**
         * <p>Retrieves the Savings Plans covered for your account. This enables you to see
         * how much of your cost is covered by a Savings Plan. An organization’s master
         * account can see the coverage of the associated member accounts. For any time
         * period, you can filter data for Savings Plans usage with the following
         * dimensions:</p> <ul> <li> <p> <code>LINKED_ACCOUNT</code> </p> </li> <li> <p>
         * <code>REGION</code> </p> </li> <li> <p> <code>SERVICE</code> </p> </li> <li> <p>
         * <code>INSTANCE_FAMILY</code> </p> </li> </ul> <p>To determine valid values for a
         * dimension, use the <code>GetDimensionValues</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansCoverage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSavingsPlansCoverageAsync(const Model::GetSavingsPlansCoverageRequest& request, const GetSavingsPlansCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves your request parameters, Savings Plan Recommendations Summary and
         * Details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansPurchaseRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSavingsPlansPurchaseRecommendationOutcome GetSavingsPlansPurchaseRecommendation(const Model::GetSavingsPlansPurchaseRecommendationRequest& request) const;

        /**
         * <p>Retrieves your request parameters, Savings Plan Recommendations Summary and
         * Details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansPurchaseRecommendation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSavingsPlansPurchaseRecommendationOutcomeCallable GetSavingsPlansPurchaseRecommendationCallable(const Model::GetSavingsPlansPurchaseRecommendationRequest& request) const;

        /**
         * <p>Retrieves your request parameters, Savings Plan Recommendations Summary and
         * Details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansPurchaseRecommendation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSavingsPlansPurchaseRecommendationAsync(const Model::GetSavingsPlansPurchaseRecommendationRequest& request, const GetSavingsPlansPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the Savings Plans utilization for your account across date ranges
         * with daily or monthly granularity. Master accounts in an organization have
         * access to member accounts. You can use <code>GetDimensionValues</code> in
         * <code>SAVINGS_PLANS</code> to determine the possible dimension values.</p>
         * <note> <p>You cannot group by any dimension values for
         * <code>GetSavingsPlansUtilization</code>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansUtilization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSavingsPlansUtilizationOutcome GetSavingsPlansUtilization(const Model::GetSavingsPlansUtilizationRequest& request) const;

        /**
         * <p>Retrieves the Savings Plans utilization for your account across date ranges
         * with daily or monthly granularity. Master accounts in an organization have
         * access to member accounts. You can use <code>GetDimensionValues</code> in
         * <code>SAVINGS_PLANS</code> to determine the possible dimension values.</p>
         * <note> <p>You cannot group by any dimension values for
         * <code>GetSavingsPlansUtilization</code>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansUtilization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSavingsPlansUtilizationOutcomeCallable GetSavingsPlansUtilizationCallable(const Model::GetSavingsPlansUtilizationRequest& request) const;

        /**
         * <p>Retrieves the Savings Plans utilization for your account across date ranges
         * with daily or monthly granularity. Master accounts in an organization have
         * access to member accounts. You can use <code>GetDimensionValues</code> in
         * <code>SAVINGS_PLANS</code> to determine the possible dimension values.</p>
         * <note> <p>You cannot group by any dimension values for
         * <code>GetSavingsPlansUtilization</code>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansUtilization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSavingsPlansUtilizationAsync(const Model::GetSavingsPlansUtilizationRequest& request, const GetSavingsPlansUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves attribute data along with aggregate utilization and savings data
         * for a given time period. This doesn't support granular or grouped data
         * (daily/monthly) in response. You can't retrieve data by dates in a single
         * response similar to <code>GetSavingsPlanUtilization</code>, but you have the
         * option to make multiple calls to <code>GetSavingsPlanUtilizationDetails</code>
         * by providing individual dates. You can use <code>GetDimensionValues</code> in
         * <code>SAVINGS_PLANS</code> to determine the possible dimension values.</p>
         * <note> <p> <code>GetSavingsPlanUtilizationDetails</code> internally groups data
         * by <code>SavingsPlansArn</code>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansUtilizationDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSavingsPlansUtilizationDetailsOutcome GetSavingsPlansUtilizationDetails(const Model::GetSavingsPlansUtilizationDetailsRequest& request) const;

        /**
         * <p>Retrieves attribute data along with aggregate utilization and savings data
         * for a given time period. This doesn't support granular or grouped data
         * (daily/monthly) in response. You can't retrieve data by dates in a single
         * response similar to <code>GetSavingsPlanUtilization</code>, but you have the
         * option to make multiple calls to <code>GetSavingsPlanUtilizationDetails</code>
         * by providing individual dates. You can use <code>GetDimensionValues</code> in
         * <code>SAVINGS_PLANS</code> to determine the possible dimension values.</p>
         * <note> <p> <code>GetSavingsPlanUtilizationDetails</code> internally groups data
         * by <code>SavingsPlansArn</code>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansUtilizationDetails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSavingsPlansUtilizationDetailsOutcomeCallable GetSavingsPlansUtilizationDetailsCallable(const Model::GetSavingsPlansUtilizationDetailsRequest& request) const;

        /**
         * <p>Retrieves attribute data along with aggregate utilization and savings data
         * for a given time period. This doesn't support granular or grouped data
         * (daily/monthly) in response. You can't retrieve data by dates in a single
         * response similar to <code>GetSavingsPlanUtilization</code>, but you have the
         * option to make multiple calls to <code>GetSavingsPlanUtilizationDetails</code>
         * by providing individual dates. You can use <code>GetDimensionValues</code> in
         * <code>SAVINGS_PLANS</code> to determine the possible dimension values.</p>
         * <note> <p> <code>GetSavingsPlanUtilizationDetails</code> internally groups data
         * by <code>SavingsPlansArn</code>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansUtilizationDetails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSavingsPlansUtilizationDetailsAsync(const Model::GetSavingsPlansUtilizationDetailsRequest& request, const GetSavingsPlansUtilizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Queries for available tag keys and tag values for a specified period. You can
         * search the tag values for an arbitrary string. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetTags">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;

        /**
         * <p>Queries for available tag keys and tag values for a specified period. You can
         * search the tag values for an arbitrary string. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetTags">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTagsOutcomeCallable GetTagsCallable(const Model::GetTagsRequest& request) const;

        /**
         * <p>Queries for available tag keys and tag values for a specified period. You can
         * search the tag values for an arbitrary string. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetTags">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTagsAsync(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a forecast for how much Amazon Web Services predicts that you will
         * use over the forecast time period that you select, based on your past usage.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetUsageForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageForecastOutcome GetUsageForecast(const Model::GetUsageForecastRequest& request) const;

        /**
         * <p>Retrieves a forecast for how much Amazon Web Services predicts that you will
         * use over the forecast time period that you select, based on your past usage.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetUsageForecast">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsageForecastOutcomeCallable GetUsageForecastCallable(const Model::GetUsageForecastRequest& request) const;

        /**
         * <p>Retrieves a forecast for how much Amazon Web Services predicts that you will
         * use over the forecast time period that you select, based on your past usage.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetUsageForecast">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsageForecastAsync(const Model::GetUsageForecastRequest& request, const GetUsageForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void GetCostAndUsageAsyncHelper(const Model::GetCostAndUsageRequest& request, const GetCostAndUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCostAndUsageWithResourcesAsyncHelper(const Model::GetCostAndUsageWithResourcesRequest& request, const GetCostAndUsageWithResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCostForecastAsyncHelper(const Model::GetCostForecastRequest& request, const GetCostForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDimensionValuesAsyncHelper(const Model::GetDimensionValuesRequest& request, const GetDimensionValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReservationCoverageAsyncHelper(const Model::GetReservationCoverageRequest& request, const GetReservationCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReservationPurchaseRecommendationAsyncHelper(const Model::GetReservationPurchaseRecommendationRequest& request, const GetReservationPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReservationUtilizationAsyncHelper(const Model::GetReservationUtilizationRequest& request, const GetReservationUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRightsizingRecommendationAsyncHelper(const Model::GetRightsizingRecommendationRequest& request, const GetRightsizingRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSavingsPlansCoverageAsyncHelper(const Model::GetSavingsPlansCoverageRequest& request, const GetSavingsPlansCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSavingsPlansPurchaseRecommendationAsyncHelper(const Model::GetSavingsPlansPurchaseRecommendationRequest& request, const GetSavingsPlansPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSavingsPlansUtilizationAsyncHelper(const Model::GetSavingsPlansUtilizationRequest& request, const GetSavingsPlansUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSavingsPlansUtilizationDetailsAsyncHelper(const Model::GetSavingsPlansUtilizationDetailsRequest& request, const GetSavingsPlansUtilizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTagsAsyncHelper(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUsageForecastAsyncHelper(const Model::GetUsageForecastRequest& request, const GetUsageForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CostExplorer
} // namespace Aws
