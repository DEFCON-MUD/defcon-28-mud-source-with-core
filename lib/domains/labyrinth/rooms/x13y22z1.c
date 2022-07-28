inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 22, 1 }));
  set_short( "Hallway - x13y22z1" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y22z1.c",
  "east" : DIR+"/rooms/x14y22z1.c",
  "north" : DIR+"/rooms/x13y23z1.c",
  "south" : DIR+"/rooms/x13y21z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
