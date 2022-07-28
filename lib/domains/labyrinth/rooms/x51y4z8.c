inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 4, 8 }));
  set_short( "Corridor - x51y4z8" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y4z8.c",
  "north" : DIR+"/rooms/x51y5z8.c",
  "south" : DIR+"/rooms/x51y3z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
