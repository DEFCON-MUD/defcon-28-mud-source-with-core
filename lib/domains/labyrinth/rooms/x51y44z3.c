inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 44, 3 }));
  set_short( "Passage - x51y44z3" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y44z3.c",
  "east" : DIR+"/rooms/x52y44z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
