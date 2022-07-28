inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 50, 4 }));
  set_short( "Passage - x52y50z4" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y50z4.c",
  "east" : DIR+"/rooms/x53y50z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
