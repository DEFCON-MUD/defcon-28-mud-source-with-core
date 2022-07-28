inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 18, 0 }));
  set_short( "Corridor - x43y18z0" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y18z0.c",
  "north" : DIR+"/rooms/x43y19z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
