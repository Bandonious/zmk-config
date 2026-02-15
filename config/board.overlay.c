/ {
    chosen {
        zmk,battery = &battery;
    };
};

&battery {
    voltage-divider = <2>;
};
