inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 0, 7 }));
  set_short( "Corridor - x51y0z7" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y0z7.c",
  "east" : DIR+"/rooms/x52y0z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
