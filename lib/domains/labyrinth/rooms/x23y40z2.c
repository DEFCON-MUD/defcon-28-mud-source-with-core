inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 40, 2 }));
  set_short( "Passage - x23y40z2" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y41z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north.%^RESET%^");
}
