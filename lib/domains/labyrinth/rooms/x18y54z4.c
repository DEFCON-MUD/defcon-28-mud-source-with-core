inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 54, 4 }));
  set_short( "Hallway - x18y54z4" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y54z4.c",
  "east" : DIR+"/rooms/x19y54z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
