inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 45, 5 }));
  set_short( "Hallway - x29y45z5" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y46z5.c",
  "south" : DIR+"/rooms/x29y44z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
