inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 9, 9 }));
  set_short( "Corridor - x29y9z9" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y10z9.c",
  "south" : DIR+"/rooms/x29y8z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
