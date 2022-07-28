inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 62, 4 }));
  set_short( "Corridor - x2y62z4" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y62z4.c",
  "east" : DIR+"/rooms/x3y62z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
