inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 55, 0 }));
  set_short( "Corridor - x55y55z0" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y56z0.c",
  "south" : DIR+"/rooms/x55y54z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
