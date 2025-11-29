#include <stdio.h>
void getInput(int *moisture, int *temp, int *days, int *crop);
void giveSuggestion(int moisture, int temp, int days, int crop);
void fertilizerSuggestion(int day);
int main()
{
    int soilMoisture, temperature, daysSinceWater, cropType;
    char again;
    printf("🌾 Welcome to SMART CROP CARE ADVISOR 👨‍🔬🌾\n\n");
    do
    {
        getInput(&soilMoisture, &temperature, &daysSinceWater, &cropType);
        giveSuggestion(soilMoisture, temperature, daysSinceWater, cropType);
        printf("\nDo you want to check another crop? (y/n): ");
        scanf(" %c", &again);
        printf("\n-----------------------------------------\n");
    } while (again == 'y' || again == 'Y');
    printf("\nThank you for using Smart Crop Care Advisor 🌱\n");
    return 0;
}
void getInput(int *moisture, int *temp, int *days, int *crop)
{
    printf("Select crop type:\n");
    printf("1. Rice 🌾\n");
    printf("2. Wheat 🌾\n");
    printf("3. Maize 🌽\n");
    printf("Enter your choice (1-3):\n");
    scanf("%d", crop);
    printf("Enter current soil moisture (%%): ");
    scanf("%d", moisture);
    printf("Enter current temperature (°C): ");
    scanf("%d", temp);
    printf("Days since last irrigation: ");
    scanf("%d", days);
}
void giveSuggestion(int moisture, int temp, int days, int crop)
{
    printf("\n🌿 Suggestions for your crop 🌿\n");
    if (moisture < 30)
    {
        printf("💧 Soil is too dry! Water your plants immediately.\n");
    }
    else if (moisture >= 30 && moisture <= 60)
    {
        printf("✅ Soil moisture is good. No watering needed now.\n");
    }
    else
    {
        printf("⚠️ Soil is too wet! Avoid watering for now.\n");
    }
    if (temp > 35)
    {
        printf("☀️ High temperature detected! Light irrigation advised.\n");
    }
    else if (temp < 20)
    {
        printf("❄️ Temperature is low, avoid overwatering.\n");
    }
    else
    {
        printf("🌤️ Temperature is ideal for growth.\n");
    }
    if (days > 3 && moisture < 50)
    {
        printf("🚰 It's been %d days since last irrigation. Water recommended.\n", days);
    }
    if (crop == 1)
    {
        if (moisture < 50)
            printf("🌾 Rice needs more frequent watering.\n");
    }
    else if (crop == 2)
    {
        if (moisture < 40)
            printf("🌾 Wheat prefers moderate watering.\n");
    }
    else if (crop == 3)
    {
        if (temp > 33)
            printf("🌽 Maize might face heat stress. Light irrigation suggested.\n");
    }
    else
    {
        printf("⚠️ Invalid crop type selected.\n");
    }
    fertilizerSuggestion(days);
}
void fertilizerSuggestion(int day)
{
    if (day % 7 == 0)
    {
        printf("💊 It's a good time to add fertilizer or vitamins.\n");
    }
    else
    {
        printf("🌱 No fertilizer needed today.\n");
    }
}