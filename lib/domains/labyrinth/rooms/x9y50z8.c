inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 50, 8 }));
  set_short( "Corridor - x9y50z8" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y50z8.c",
  "east" : DIR+"/rooms/x10y50z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
