inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 58, 6 }));
  set_short( "Hallway - x46y58z6" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y58z6.c",
  "east" : DIR+"/rooms/x47y58z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
