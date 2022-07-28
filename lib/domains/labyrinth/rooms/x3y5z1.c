inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 5, 1 }));
  set_short( "Corridor - x3y5z1" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y6z1.c",
  "south" : DIR+"/rooms/x3y4z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
