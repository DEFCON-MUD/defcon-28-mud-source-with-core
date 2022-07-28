inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 28, 2 }));
  set_short( "Hallway - x33y28z2" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y28z2.c",
  "south" : DIR+"/rooms/x33y27z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
