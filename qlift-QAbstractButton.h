#ifndef QLIFT_C_API_QLIFT_QABSTRACTBUTTON_H
#define QLIFT_C_API_QLIFT_QABSTRACTBUTTON_H

#ifdef __cplusplus
extern "C" {
#endif

const char* QAbstractButton_text(void *abstractButton);
void QAbstractButton_setText(void *abstractButton, const char *text);
void QAbstractButton_clicked_connect(void *abstractButton, void *receiver, void *context, void (*slot_ptr)(void*, bool));

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QABSTRACTBUTTON_H

