inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 20, 7 }));
  set_short( "Hallway - x36y20z7" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y20z7.c",
  "east" : DIR+"/rooms/x37y20z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
