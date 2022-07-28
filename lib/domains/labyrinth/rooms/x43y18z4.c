inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 18, 4 }));
  set_short( "Passage - x43y18z4" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y18z4.c",
  "east" : DIR+"/rooms/x44y18z4.c",
  "north" : DIR+"/rooms/x43y19z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
