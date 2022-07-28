inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 44, 5 }));
  set_short( "Hallway - x22y44z5" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y44z5.c",
  "east" : DIR+"/rooms/x23y44z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
