inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 43, 6 }));
  set_short( "Hallway - x53y43z6" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y44z6.c",
  "south" : DIR+"/rooms/x53y42z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
