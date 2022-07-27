inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 30, 9 }));
  set_short( "Corridor - x60y30z9" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y30z9.c",
  "east" : DIR+"/rooms/x61y30z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
