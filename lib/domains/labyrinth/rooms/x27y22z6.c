inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 22, 6 }));
  set_short( "Hallway - x27y22z6" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y22z6.c",
  "north" : DIR+"/rooms/x27y23z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
