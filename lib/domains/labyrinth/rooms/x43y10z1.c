inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 10, 1 }));
  set_short( "Passage - x43y10z1" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y10z1.c",
  "south" : DIR+"/rooms/x43y9z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
