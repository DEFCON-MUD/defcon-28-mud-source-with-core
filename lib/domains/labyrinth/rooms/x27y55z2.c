inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 55, 2 }));
  set_short( "Corridor - x27y55z2" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y56z2.c",
  "south" : DIR+"/rooms/x27y54z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
