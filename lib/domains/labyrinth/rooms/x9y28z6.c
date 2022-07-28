inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 28, 6 }));
  set_short( "Corridor - x9y28z6" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y28z6.c",
  "north" : DIR+"/rooms/x9y29z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
