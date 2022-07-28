inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 22, 6 }));
  set_short( "Corridor - x41y22z6" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y23z6.c",
  "south" : DIR+"/rooms/x41y21z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
