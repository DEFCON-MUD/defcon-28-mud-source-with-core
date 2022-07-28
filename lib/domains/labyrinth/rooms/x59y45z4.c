inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 45, 4 }));
  set_short( "Hallway - x59y45z4" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y46z4.c",
  "south" : DIR+"/rooms/x59y44z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
