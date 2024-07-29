int do_order(string arg) {
  object player, obj;
  int lvl, plvl, pcredits, cost, pcost, mxp;
  string type;

  player = this_player();
  plvl = player->query_level();
  pcredits = player->query_total_money();
  pcost = 4000;
  mxp = player->query_mxp();

  if (plvl > 20) {
    plvl = 20;
  }
  if (plvl < 1) {
    plvl = 1;
  }
  if (!arg || arg == "") {
    write("%^ORANGE%^Welcome to the sketchy shop.%^RESET%^");
/*    if (mxp == 1) {
      write("%^MXP_LSM%^<!EL Shop \'<send \"order &text; " + plvl + "\" prompt>\'>");
      write("%^CYAN%^orderable weapon types:\n%^RESET%^<Shop>sword</Shop>\n\n");
      write("%^CYAN%^orderable armour types:\n%^RESET%^<Shop>armour</Shop>\n<Shop>boots</Shop>\n<Shop>bracers</Shop>\n<Shop>faulds</Shop>\n<Shop>gloves</Shop>\n<Shop>gorget</Shop>\n<Shop>guantlets</Shop>\n<Shop>helmet</Shop>\n<Shop>plate</Shop>\n<Shop>ring</Shop>\n\n");
      write("%^HWHITE%^Syntax:%^MAGENTA%^ order %^GREEN%^type%^ORANGE%^ level%^RESET%^\n");
    } else { */
      write("%^CYAN%^orderable weapon types:%^RESET%^ sword");
      write("%^CYAN%^orderable armour types:%^RESET%^ armour boots bracers faulds gloves gorget guantlets helmet plate ring");
      write("%^HWHITE%^Syntax:%^MAGENTA%^ order %^GREEN%^type%^RESET%^\n");
/*    } */
    return 1;
  }
  type = arg;


  if (plvl > 20) {
    plvl = 20;
  }
  cost = plvl * pcost;

  if (file_exists("/domains/core/objects/shop/armour/" + type + plvl + ".c")) {
    if (player->query_race() == "fed") {
      if (plvl > 2) {
        plvl = 2;
      }
    }
    /* player->add_money("credit", -cost); */
    obj = clone_object("/domains/core/objects/shop/armour/" + type + plvl + ".c");
    obj->setup();
    obj->move(player);
    write("You purchase a level " + plvl + " " + type + " for " + cost);
    return 1;
  } else if (file_exists("/domains/core/objects/shop/weapon/" + type + plvl + ".c")) {
    if (player->query_race() == "fed") {
      if (plvl > 2) {
        plvl = 2;
      }
    }
    /* player->add_money("credit", -cost); */
    obj = clone_object("/domains/core/objects/shop/weapon/" + type + plvl + ".c");
    obj->setup();
    obj->move(player);
    write("You purchase a level " + plvl + " " + type);
    return 1;
  } else {
    return 0;
  }
}
