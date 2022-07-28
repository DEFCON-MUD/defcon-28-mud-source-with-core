inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 32, 3 }));
  set_short( "Passage - x45y32z3" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y33z3.c",
  "south" : DIR+"/rooms/x45y31z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
