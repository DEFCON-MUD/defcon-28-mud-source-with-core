inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 23, 2 }));
  set_short( "Hallway - x47y23z2" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y24z2.c",
  "south" : DIR+"/rooms/x47y22z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
