inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 42, 0 }));
  set_short( "Hallway - x55y42z0" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y42z0.c",
  "north" : DIR+"/rooms/x55y43z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
