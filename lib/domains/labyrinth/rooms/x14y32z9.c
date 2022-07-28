inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 32, 9 }));
  set_short( "Passage - x14y32z9" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y32z9.c",
  "east" : DIR+"/rooms/x15y32z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
