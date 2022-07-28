inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 52, 0 }));
  set_short( "Passage - x13y52z0" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y53z0.c",
  "south" : DIR+"/rooms/x13y51z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
