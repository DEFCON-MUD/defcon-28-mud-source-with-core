inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 6, 8 }));
  set_short( "Corridor - x25y6z8" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y6z8.c",
  "north" : DIR+"/rooms/x25y7z8.c",
  "south" : DIR+"/rooms/x25y5z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
