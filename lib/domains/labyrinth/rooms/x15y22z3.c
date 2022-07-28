inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 22, 3 }));
  set_short( "Corridor - x15y22z3" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y22z3.c",
  "north" : DIR+"/rooms/x15y23z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
