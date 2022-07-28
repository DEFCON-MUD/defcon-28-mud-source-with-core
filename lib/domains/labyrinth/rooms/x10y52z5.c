inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 52, 5 }));
  set_short( "Hallway - x10y52z5" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y52z5.c",
  "east" : DIR+"/rooms/x11y52z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
