inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 54, 8 }));
  set_short( "Passage - x26y54z8" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y54z8.c",
  "east" : DIR+"/rooms/x27y54z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
