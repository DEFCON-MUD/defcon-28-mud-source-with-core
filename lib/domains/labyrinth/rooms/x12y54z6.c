inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 54, 6 }));
  set_short( "Hallway - x12y54z6" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y54z6.c",
  "east" : DIR+"/rooms/x13y54z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
