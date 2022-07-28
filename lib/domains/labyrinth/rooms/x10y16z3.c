inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 16, 3 }));
  set_short( "Hallway - x10y16z3" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y16z3.c",
  "east" : DIR+"/rooms/x11y16z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
