inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 57, 5 }));
  set_short( "Passage - x39y57z5" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y58z5.c",
  "south" : DIR+"/rooms/x39y56z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
