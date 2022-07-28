inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 16, 0 }));
  set_short( "Passage - x13y16z0" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y16z0.c",
  "north" : DIR+"/rooms/x13y17z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
