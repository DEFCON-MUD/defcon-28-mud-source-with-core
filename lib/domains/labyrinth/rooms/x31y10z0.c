inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 10, 0 }));
  set_short( "Passage - x31y10z0" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y11z0.c",
  "south" : DIR+"/rooms/x31y9z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
