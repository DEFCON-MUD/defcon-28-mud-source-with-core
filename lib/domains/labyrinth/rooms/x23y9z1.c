inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 9, 1 }));
  set_short( "Passage - x23y9z1" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y10z1.c",
  "south" : DIR+"/rooms/x23y8z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
