inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 62, 3 }));
  set_short( "Hallway - x14y62z3" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y62z3.c",
  "east" : DIR+"/rooms/x15y62z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
