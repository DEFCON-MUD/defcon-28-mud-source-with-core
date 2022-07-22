inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 49, 48, -4 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of GPU's that burned so bright they went radioactive in this pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^" );

  set_objects(
    DIR+"/npc/coder.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/48_48_-4.c",
  "south" : DIR+"/rooms/49_49_-4.c",
  "east" : DIR+"/rooms/50_48_-4.c"
  ]) );

}

