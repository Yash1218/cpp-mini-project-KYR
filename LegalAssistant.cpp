#include "LegalAssistant.h"

// Show common legal queries
// Show common legal queries
void showLegalQueries() {
    int queryOption;
    cout << "Select a Common Legal Query:" << endl;
    cout << "1. What are my rights as a citizen?" << endl;
    cout << "2. How can I file a complaint?" << endl;
    cout << "3. How can I access legal aid services?" << endl;
    cout << "4. How can I obtain legal documents?" << endl;
    cout << "5. What are the legal implications of a particular action?" << endl;
    cout << "Select an option (1-5) or 0 to exit: ";
    cin >> queryOption;

    if (queryOption == 0) return; // Exit option

    switch (queryOption) {
    case 1:
        cout << "\nAs a citizen of India, you have several fundamental rights enshrined in the Constitution. These include:\n\n"
            << "• Right to Equality (Articles 14 - 18): Everyone is equal before the law and has the right to equal protection of the laws.\n"
            << "• Right to Freedom (Articles 19 - 22): Includes freedom of speech and expression, assembly, association, movement, residence, and profession.\n"
            << "• Right against Exploitation (Articles 23 - 24): Prohibits human trafficking and forced labor.\n"
            << "• Right to Freedom of Religion (Articles 25 - 28): Guarantees freedom of conscience and free profession, practice, and propagation of religion.\n"
            << "• Cultural and Educational Rights (Articles 29 - 30): Protects the rights of minorities to conserve their culture and establish educational institutions.\n"
            << "• Right to Constitutional Remedies (Article 32): Allows individuals to approach the Supreme Court for enforcement of their rights." << endl;
        break;
    case 2:
        cout << "\nFiling a complaint in India can be done through various channels depending on the nature of the complaint:\n\n"
            << "• Police Complaint: You can file a First Information Report (FIR) at your local police station for cognizable offenses. "
            << "For non-cognizable offenses, you may need to file a complaint in writing.\n"
            << "• Consumer Complaints: If your complaint is against a service or product, you can approach the Consumer Forum or file a complaint online through the National Consumer Helpline.\n"
            << "• Online Platforms: Many states have online portals for filing complaints against police, corruption, etc.\n"
            << "• Public Grievance Redressal: You can file complaints related to government services through the Centralized Public Grievance Redress and Monitoring System (CPGRAMS)." << endl;
        break;
    case 3:
        cout << "\nLegal aid services in India are available to ensure that justice is accessible to all. You can access these services by:\n\n"
            << "• National Legal Services Authority (NALSA): Visit the NALSA website or your state’s legal services authority for information on free legal aid.\n"
            << "• Legal Aid Clinics: Many universities and NGOs run legal aid clinics that provide free legal advice and assistance.\n"
            << "• District Legal Services Authorities (DLSA): You can approach your local DLSA for help in accessing legal aid." << endl;
        break;
    case 4:
        cout << "\nObtaining legal documents in India typically involves the following steps:\n\n"
            << "• Birth/Death Certificates: Contact your local municipal authority or state government office responsible for civil registration.\n"
            << "• Property Documents: Obtain copies from the local sub-registrar’s office where the property is registered.\n"
            << "• Court Documents: You can access court records by visiting the respective court’s registry or through their online portals.\n"
            << "• Legal Agreements: If you need copies of agreements, you should contact the parties involved or their legal representatives." << endl;
        break;
    case 5:
        cout << "\nThe legal implications of any action depend on various factors such as:\n\n"
            << "• Nature of Action: Different actions have different legal consequences. For example, signing a contract creates binding obligations, while committing a crime may lead to criminal charges.\n"
            << "• Applicable Laws: The laws governing the action will determine its legality and consequences. This could include civil law, criminal law, labor law, etc.\n"
            << "• Intent and Circumstances: The intent behind an action and the specific circumstances can also influence its legal implications.\n"
            << "• For specific queries regarding legal implications, it is advisable to consult with a legal professional who can provide tailored advice based on the situation." << endl;
        break;
    default:
        cout << "\nPlease select a valid option from 1 to 5." << endl;
    }
}

// Show legal laws and topics
void showLegalLaws() {
    int lawOption;
    cout << "Select a Legal Law/Topic:" << endl;
    cout << "1. Family Law" << endl;
    cout << "2. Property Law" << endl;
    cout << "3. Labour Law" << endl;
    cout << "4. Criminal Law" << endl;
    cout << "Select an option (1-4) or 0 to exit: ";
    cin >> lawOption;

    if (lawOption == 0) return; // Exit option

    switch (lawOption) {
    case 1:
        cout << "\nIn India, family laws intersect with the KYC (Know Your Customer) framework in certain scenarios, particularly when verifying individuals' identity and background for various legal, financial, or administrative services. "
            << "Here are some key points where family laws may be relevant in a KYC framework:\n"
            << "1. Verification of Legal Heirs and Succession:\n"
            << "\tRelevant Law: The Hindu Succession Act (1956), Indian Succession Act (1925), and personal laws for Muslims and Christians guide inheritance rights and who qualifies as legal heirs.\n"
            << "2. Joint Accounts and Family Arrangements:\n"
            << "\tRelevant Law: Family laws related to joint property, joint accounts, and guardianship.\n"
            << "3. Marital Status Verification:\n"
            << "\tRelevant Law: Hindu Marriage Act (1955), Special Marriage Act (1954), Muslim Personal Law (Shariat) Application Act (1937), etc.\n"
            << "4. Minor's Accounts and Guardianship:\n"
            << "\tRelevant Law: Guardians and Wards Act (1890), Hindu Minority and Guardianship Act (1956).\n"
            << "5. Nomination and Beneficiary Verification:\n"
            << "\tRelevant Law: Rules related to nomination under various personal laws.\n"
            << "6. Divorce and Financial Settlements:\n"
            << "\tRelevant Law: Hindu Marriage Act (1955), Muslim Personal Law (Shariat) Application Act (1937), and others.\n"
            << "\nIn essence, family laws influence the KYC process by establishing the relationships and legal rights of individuals, especially in scenarios like inheritance, marital status, and guardianship." << endl;
        break;
    case 2:
        cout << "\nWhen considering the integration of Property Law into a KYC (Know Your Customer) framework in India, it's essential to understand both areas' legal principles and regulatory requirements. "
            << "Here's a brief overview of how property law intersects with KYC in India:\n"
            << "1. The Registration Act, 1908:\n"
            << "\tThis act governs the registration of property documents in India. For KYC, it is essential to verify the ownership of the property and ensure that the property is not encumbered.\n"
            << "2. The Transfer of Property Act, 1882:\n"
            << "\tThis act provides the framework for the transfer of property in India. It is important for KYC processes to ensure that the parties involved in a property transaction have the legal right to sell or transfer the property.\n"
            << "3. The Indian Stamp Act, 1899:\n"
            << "\tThis act mandates the payment of stamp duty on property transactions, which is a critical aspect of KYC as it confirms the value of the property being transferred." << endl;
        break;
    case 3:
        cout << "\nIn India, labor laws related to the Know Your Customer (KYC) framework primarily focus on the protection of workers' rights and ensuring compliance with regulations in financial institutions, especially those dealing with sensitive personal data. Key aspects include:\n"
            << "1. Personal Data Protection Bill, 2019:\n"
            << "\tData Privacy: Employees' personal information, including KYC documents (e.g., Aadhaar, PAN, address proof), falls under the protection of data privacy regulations. Employers must handle this data responsibly.\n"
            << "\tConsent and Purpose: Employers collecting KYC data from employees must obtain consent and ensure the data is used solely for the intended purpose (e.g., onboarding, payroll, or background verification).\n"
            << "2. Prevention of Money Laundering Act (PMLA), 2002:\n"
            << "\tCompliance Officers: Under the PMLA, financial institutions must appoint compliance officers, who may be responsible for ensuring employees adhere to proper KYC norms. Employees are trained to perform KYC checks correctly as part of anti-money laundering measures.\n"
            << "\tTraining Requirements: Institutions must ensure that their staff, particularly those involved in KYC procedures, are adequately trained in compliance and legal requirements.\n"
            << "3. Information Technology Act, 2000:\n"
            << "\tDigital Signatures and KYC: The IT Act supports the use of digital signatures, which can be part of the KYC process. Employees handling digital KYC verifications must comply with this act when processing information electronically.\n"
            << "\tCybersecurity: Employers are required to implement secure systems for the storage and processing of KYC data to prevent unauthorized access or breaches.\n"
            << "4. Payment of Wages Act, 1936 & Labour Welfare Fund Act:\n"
            << "\tFor payroll and compliance purposes, KYC data may be required to ensure accurate payment processing and adherence to labor welfare funds and wage laws. Employers must verify employees’ bank details and identification to comply with wage payment regulations." << endl;
        break;
    case 4:
        cout << "\nIntegrating criminal law into the KYC (Know Your Customer) framework in India is crucial for preventing financial crimes, including money laundering, fraud, and terrorist financing. Here's how criminal law interacts with KYC requirements:\n"
            << "1. The Prevention of Money Laundering Act (PMLA), 2002:\n"
            << "\tMandates KYC compliance for banks, financial institutions, and intermediaries.\n"
            << "\tRequires reporting of suspicious transactions and maintenance of records for a specific period.\n"
            << "\tEstablishes the Financial Intelligence Unit (FIU) to monitor and investigate suspicious activities.\n"
            << "\n2. The Unlawful Activities (Prevention) Act (UAPA), 1967:\n"
            << "\tAddresses terrorism-related activities, with KYC processes helping to prevent financing of terrorism.\n"
            << "\tFinancial institutions must ensure they do not facilitate transactions for individuals or entities listed under UAPA.\n"
            << "\n3. The Indian Penal Code (IPC), 1860:\n"
            << "\tSection 420 (cheating) and Section 467 (forgery) are relevant as they deal with fraudulent activities that KYC processes aim to mitigate.\n"
            << "\tFinancial institutions may face legal consequences for failing to implement adequate KYC measures." << endl;
        break;
    default:
        cout << "\nPlease select a valid option from 1 to 4." << endl;
    }
}