static void vTaskDelay();
static void vTaskSuspend();
static void vTaskPrioritySet();
static void vTaskResume();
static void vTaskDelete(void *param);
#define  NULL 0

/*Type 1: Infinite Loop */
void YourTask1(void *pvParameters) {
    for (;;) {
        /* USER CODE is here */
        /*
         * Call one of FreeRTOS's sevices"
         */
        vTaskDelay();
        vTaskSuspend();
        vTaskPrioritySet();
        vTaskResume();
        /* USER CODE is here */
    }
}

/*Type 2: Running and removing by itself */
void YourTask2(void *pvParameters) {
    /* USER CODE is here */
    vTaskDelete(NULL);
    /* USER CODE is here */
}

/*
 * 1) It is available with two types of functionalities.
 * 2) Task should not be returned. It should be void like 'void usertask(void *pvParameters)'
 * 3) xTaskCreate(Task1, "Task1", 1024, NULL, TASK_1_PRIO, ...);
 *
 */