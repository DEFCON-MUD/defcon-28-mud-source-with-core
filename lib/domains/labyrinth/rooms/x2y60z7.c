inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 60, 7 }));
  set_short( "Corridor - x2y60z7" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y60z7.c",
  "east" : DIR+"/rooms/x3y60z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
