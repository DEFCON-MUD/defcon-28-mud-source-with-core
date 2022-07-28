inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 45, 5 }));
  set_short( "Hallway - x33y45z5" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y46z5.c",
  "south" : DIR+"/rooms/x33y44z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
