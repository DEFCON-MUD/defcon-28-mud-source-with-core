inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 20, 1 }));
  set_short( "Corridor - x5y20z1" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y20z1.c",
  "north" : DIR+"/rooms/x5y21z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
