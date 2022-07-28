inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 36, 4 }));
  set_short( "Passage - x43y36z4" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y36z4.c",
  "south" : DIR+"/rooms/x43y35z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
