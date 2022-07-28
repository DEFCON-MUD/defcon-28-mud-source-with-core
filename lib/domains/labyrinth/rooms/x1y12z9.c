inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 12, 9 }));
  set_short( "Passage - x1y12z9" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y13z9.c",
  "south" : DIR+"/rooms/x1y11z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
