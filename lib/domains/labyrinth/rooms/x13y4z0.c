inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 4, 0 }));
  set_short( "Hallway - x13y4z0" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y5z0.c",
  "south" : DIR+"/rooms/x13y3z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
