inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 14, 0 }));
  set_short( "Corridor - x7y14z0" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y15z0.c",
  "south" : DIR+"/rooms/x7y13z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
