inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 55, 4 }));
  set_short( "Corridor - x59y55z4" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y56z4.c",
  "south" : DIR+"/rooms/x59y54z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
