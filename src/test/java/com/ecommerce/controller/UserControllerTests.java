```java
package com.ecommerce.controller;

import com.ecommerce.model.User;
import com.ecommerce.service.UserService;
import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.autoconfigure.web.servlet.AutoConfigureMockMvc;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.test.web.servlet.MockMvc;

import static org.springframework.test.web.servlet.request.MockMvcRequestBuilders.get;
import static org.springframework.test.web.servlet.result.MockMvcResultMatchers.status;

@SpringBootTest
@AutoConfigureMockMvc
public class UserControllerTests {

    @Autowired
    private MockMvc mockMvc;

    @Autowired
    private UserService userService;

    @Test
    public void testGetUser() throws Exception {
        User user = new User();
        user.setId(1);
        user.setName("Test User");
        user.setEmail("testuser@gmail.com");
        userService.saveUser(user);

        mockMvc.perform(get("/user/" + user.getId()))
                .andExpect(status().isOk());
    }

    @Test
    public void testGetNonExistingUser() throws Exception {
        mockMvc.perform(get("/user/999"))
                .andExpect(status().isNotFound());
    }
}
```