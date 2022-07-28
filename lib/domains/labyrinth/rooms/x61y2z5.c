inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 2, 5 }));
  set_short( "Passage - x61y2z5" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y2z5.c",
  "north" : DIR+"/rooms/x61y3z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
