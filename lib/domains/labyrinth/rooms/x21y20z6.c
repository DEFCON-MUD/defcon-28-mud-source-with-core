inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 20, 6 }));
  set_short( "Hallway - x21y20z6" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y20z6.c",
  "north" : DIR+"/rooms/x21y21z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
