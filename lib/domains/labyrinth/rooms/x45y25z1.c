inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 25, 1 }));
  set_short( "Passage - x45y25z1" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y26z1.c",
  "south" : DIR+"/rooms/x45y24z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
