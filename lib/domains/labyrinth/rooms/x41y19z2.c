inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 19, 2 }));
  set_short( "Passage - x41y19z2" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y20z2.c",
  "south" : DIR+"/rooms/x41y18z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
