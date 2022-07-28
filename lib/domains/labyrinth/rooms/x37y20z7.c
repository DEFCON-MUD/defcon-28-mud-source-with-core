inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 20, 7 }));
  set_short( "Hallway - x37y20z7" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y20z7.c",
  "north" : DIR+"/rooms/x37y21z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
