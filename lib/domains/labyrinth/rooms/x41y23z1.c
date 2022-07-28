inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 23, 1 }));
  set_short( "Hallway - x41y23z1" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y24z1.c",
  "south" : DIR+"/rooms/x41y22z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
