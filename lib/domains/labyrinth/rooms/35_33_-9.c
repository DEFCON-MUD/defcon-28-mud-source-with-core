inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 35, 33, -9 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the random junk evilmog thought up in this pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^" );

  set_objects(
    DIR+"/npc/monkey.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/35_34_-9.c",
  "north" : DIR+"/rooms/35_32_-9.c"
  ]) );

}

