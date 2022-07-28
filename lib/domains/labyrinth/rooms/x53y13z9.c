inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 13, 9 }));
  set_short( "Hallway - x53y13z9" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y14z9.c",
  "south" : DIR+"/rooms/x53y12z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
