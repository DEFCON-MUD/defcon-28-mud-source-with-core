inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 11, 6, -4 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^" );

  set_objects(
    DIR+"/npc/stoner.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/11_7_-4.c",
  "north" : DIR+"/rooms/11_5_-4.c"
  ]) );

}

