inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 46, 6 }));
  set_short( "Hallway - x35y46z6" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y46z6.c",
  "north" : DIR+"/rooms/x35y47z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
