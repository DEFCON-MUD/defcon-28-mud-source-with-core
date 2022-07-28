inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 39, 1 }));
  set_short( "Hallway - x3y39z1" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y40z1.c",
  "south" : DIR+"/rooms/x3y38z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
