inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 62, 7 }));
  set_short( "Passage - x47y62z7" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y62z7.c",
  "south" : DIR+"/rooms/x47y61z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
