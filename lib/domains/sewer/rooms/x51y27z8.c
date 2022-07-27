inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 27, 8 }));
  set_short( "Corridor - x51y27z8" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y28z8.c",
  "south" : DIR+"/rooms/x51y26z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
