inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 62, 7 }));
  set_short( "Hallway - x1y62z7" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y62z7.c",
  "south" : DIR+"/rooms/x1y61z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
