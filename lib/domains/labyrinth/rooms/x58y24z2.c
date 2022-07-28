inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 24, 2 }));
  set_short( "Corridor - x58y24z2" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y24z2.c",
  "east" : DIR+"/rooms/x59y24z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
