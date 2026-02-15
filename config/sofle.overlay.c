/* Make the encoder fire once per detent (typical EC11: 20 detents, 2 pulses per detent) */

&left_encoder {
  steps = <40>;
};

&right_encoder {
  steps = <40>;
};

&sensors {
  left_cfg {
    triggers-per-rotation = <20>;
  };
  right_cfg {
    triggers-per-rotation = <20>;
  };
};
