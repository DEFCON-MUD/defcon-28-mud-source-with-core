inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 44, 3 }));
  set_short( "Corridor - x13y44z3" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y44z3.c",
  "north" : DIR+"/rooms/x13y45z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
