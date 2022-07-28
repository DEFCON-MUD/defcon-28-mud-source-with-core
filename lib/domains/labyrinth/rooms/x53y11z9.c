inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 11, 9 }));
  set_short( "Passage - x53y11z9" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y12z9.c",
  "south" : DIR+"/rooms/x53y10z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
