inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 51, 0 }));
  set_short( "Corridor - x11y51z0" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y52z0.c",
  "south" : DIR+"/rooms/x11y50z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
