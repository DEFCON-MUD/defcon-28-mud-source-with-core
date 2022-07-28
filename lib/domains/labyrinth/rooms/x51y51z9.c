inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 51, 9 }));
  set_short( "Corridor - x51y51z9" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y52z9.c",
  "south" : DIR+"/rooms/x51y50z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
