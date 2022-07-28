inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 8, 1 }));
  set_short( "Hallway - x11y8z1" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y8z1.c",
  "north" : DIR+"/rooms/x11y9z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
