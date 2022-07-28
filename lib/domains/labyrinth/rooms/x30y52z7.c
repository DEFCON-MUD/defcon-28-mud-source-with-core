inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 52, 7 }));
  set_short( "Passage - x30y52z7" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y52z7.c",
  "east" : DIR+"/rooms/x31y52z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
