inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 49, 7 }));
  set_short( "Hallway - x5y49z7" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y50z7.c",
  "south" : DIR+"/rooms/x5y48z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
