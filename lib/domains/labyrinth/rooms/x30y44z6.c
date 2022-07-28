inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 44, 6 }));
  set_short( "Passage - x30y44z6" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y44z6.c",
  "east" : DIR+"/rooms/x31y44z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
