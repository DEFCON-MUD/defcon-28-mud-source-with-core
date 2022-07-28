inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 32, 3 }));
  set_short( "Hallway - x61y32z3" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y32z3.c",
  "south" : DIR+"/rooms/x61y31z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
