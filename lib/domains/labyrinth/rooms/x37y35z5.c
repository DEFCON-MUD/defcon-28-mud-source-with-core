inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 35, 5 }));
  set_short( "Hallway - x37y35z5" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y36z5.c",
  "south" : DIR+"/rooms/x37y34z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
