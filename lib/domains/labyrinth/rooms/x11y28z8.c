inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 28, 8 }));
  set_short( "Corridor - x11y28z8" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y28z8.c",
  "north" : DIR+"/rooms/x11y29z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
