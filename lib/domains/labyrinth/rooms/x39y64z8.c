inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 64, 8 }));
  set_short( "Hallway - x39y64z8" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y64z8.c",
  "east" : DIR+"/rooms/x40y64z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
