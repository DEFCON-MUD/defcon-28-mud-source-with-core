inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 14, 1 }));
  set_short( "Hallway - x7y14z1" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y14z1.c",
  "south" : DIR+"/rooms/x7y13z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
