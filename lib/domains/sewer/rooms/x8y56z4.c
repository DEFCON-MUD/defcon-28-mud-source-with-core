inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 56, 4 }));
  set_short( "Corridor - x8y56z4" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y56z4.c",
  "east" : DIR+"/rooms/x9y56z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
