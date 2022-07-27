inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 54, 4 }));
  set_short( "Hallway - x35y54z4" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y54z4.c",
  "east" : DIR+"/rooms/x36y54z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
