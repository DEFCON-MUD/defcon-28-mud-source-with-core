inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 62, 8 }));
  set_short( "Hallway - x39y62z8" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y62z8.c",
  "east" : DIR+"/rooms/x40y62z8.c",
  "south" : DIR+"/rooms/x39y61z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
