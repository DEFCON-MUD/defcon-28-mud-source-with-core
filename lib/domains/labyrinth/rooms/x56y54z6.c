inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 54, 6 }));
  set_short( "Passage - x56y54z6" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y54z6.c",
  "east" : DIR+"/rooms/x57y54z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
