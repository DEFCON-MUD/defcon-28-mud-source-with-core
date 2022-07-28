inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 14, 9 }));
  set_short( "Hallway - x59y14z9" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y14z9.c",
  "north" : DIR+"/rooms/x59y15z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
