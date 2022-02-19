#pragma once

typedef enum IssueTypes{
    ISSUE_FAR_LEFT,
    ISSUE_LEFT,
    ISSUE_CENTER,
    ISSUE_RIGHT,
    ISSUE_FAR_RIGHT,
    ISSUE_MAX_CNT
} IssueTypes_t;

typedef struct Issues
{
    IssueTypes_t socialIssues;
    IssueTypes_t economicIssues;
} Issues_t;

Issues_t IssuesInit(IssueTypes_t social, IssueTypes_t economic);
