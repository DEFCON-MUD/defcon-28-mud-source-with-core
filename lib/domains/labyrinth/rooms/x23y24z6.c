inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 24, 6 }));
  set_short( "Corridor - x23y24z6" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y24z6.c",
  "south" : DIR+"/rooms/x23y23z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
