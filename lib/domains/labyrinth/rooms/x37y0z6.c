inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 0, 6 }));
  set_short( "Passage - x37y0z6" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y0z6.c",
  "east" : DIR+"/rooms/x38y0z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
