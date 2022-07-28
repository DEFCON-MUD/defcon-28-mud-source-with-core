inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 13, 4 }));
  set_short( "Hallway - x23y13z4" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y14z4.c",
  "south" : DIR+"/rooms/x23y12z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
