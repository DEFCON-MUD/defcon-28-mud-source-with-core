inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 8, 3 }));
  set_short( "Passage - x38y8z3" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y8z3.c",
  "east" : DIR+"/rooms/x39y8z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
