inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 20, 8 }));
  set_short( "Corridor - x3y20z8" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y20z8.c",
  "north" : DIR+"/rooms/x3y21z8.c",
  "south" : DIR+"/rooms/x3y19z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
