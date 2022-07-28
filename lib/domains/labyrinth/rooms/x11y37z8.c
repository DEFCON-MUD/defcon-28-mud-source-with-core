inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 37, 8 }));
  set_short( "Passage - x11y37z8" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y38z8.c",
  "south" : DIR+"/rooms/x11y36z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
