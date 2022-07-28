inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 36, 5 }));
  set_short( "Passage - x16y36z5" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y36z5.c",
  "east" : DIR+"/rooms/x17y36z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
