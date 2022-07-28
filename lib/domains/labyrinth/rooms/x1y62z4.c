inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 62, 4 }));
  set_short( "Corridor - x1y62z4" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y62z4.c",
  "south" : DIR+"/rooms/x1y61z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
