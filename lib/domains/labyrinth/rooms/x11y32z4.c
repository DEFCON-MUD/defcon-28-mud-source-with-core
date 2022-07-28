inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 32, 4 }));
  set_short( "Corridor - x11y32z4" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y32z4.c",
  "north" : DIR+"/rooms/x11y33z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
