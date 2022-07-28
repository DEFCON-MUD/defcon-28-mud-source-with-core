inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 62, 0 }));
  set_short( "Corridor - x39y62z0" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y62z0.c",
  "south" : DIR+"/rooms/x39y61z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
