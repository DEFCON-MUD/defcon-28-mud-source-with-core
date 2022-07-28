inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 23, 5 }));
  set_short( "Hallway - x41y23z5" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y24z5.c",
  "south" : DIR+"/rooms/x41y22z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
