inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 52, 8 }));
  set_short( "Corridor - x5y52z8" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y52z8.c",
  "north" : DIR+"/rooms/x5y53z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
