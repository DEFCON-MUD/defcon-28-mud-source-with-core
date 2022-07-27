inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 5, 0 }));
  set_short( "Corridor - x1y5z0" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y6z0.c",
  "south" : DIR+"/rooms/x1y4z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
