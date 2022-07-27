inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 14, 1 }));
  set_short( "Corridor - x41y14z1" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y14z1.c",
  "north" : DIR+"/rooms/x41y15z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
