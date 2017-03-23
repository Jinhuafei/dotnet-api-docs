        // Connect to a queue on the local computer.
        MessageQueue^ queue = gcnew MessageQueue(".\\exampleQueue");

        // Create a new instance of MessageQueuePermissionEntry.
        MessageQueuePermissionEntry^ entry = gcnew MessageQueuePermissionEntry(
            MessageQueuePermissionAccess::Receive,
            queue->MachineName,
            queue->Label,
            queue->Category.ToString());

        // Display the value of the entry's Category property.
        Console::WriteLine("Category: {0}", entry->Category->ToString());

        queue->Close();