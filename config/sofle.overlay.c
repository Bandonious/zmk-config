/* Force-enable I2C + SSD1306 OLED and select it as the display */

&i2c0 {
    status = "okay";

    oled: ssd1306@3c {
        compatible = "solomon,ssd1306fb";
        reg = <0x3c>;
        label = "OLED";
        width = <128>;
        height = <32>;
    };
};

&{/chosen} {
    zmk,display = &oled;
};
