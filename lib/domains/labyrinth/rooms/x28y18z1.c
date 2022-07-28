inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 18, 1 }));
  set_short( "Corridor - x28y18z1" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y18z1.c",
  "east" : DIR+"/rooms/x29y18z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
