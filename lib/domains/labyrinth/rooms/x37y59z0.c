inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 59, 0 }));
  set_short( "Corridor - x37y59z0" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y60z0.c",
  "south" : DIR+"/rooms/x37y58z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
