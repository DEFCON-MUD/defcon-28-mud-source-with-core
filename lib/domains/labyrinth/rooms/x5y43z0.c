inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 43, 0 }));
  set_short( "Passage - x5y43z0" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y44z0.c",
  "south" : DIR+"/rooms/x5y42z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
