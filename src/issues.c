#include "issues.h"

Issues_t IssuesInit(IssueTypes_t social, IssueTypes_t economic)
{
    Issues_t issues;

    issues = (Issues_t){
        .socialIssues = social,
        .economicIssues = economic
    };

    return issues;
}