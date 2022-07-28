inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 56, 7 }));
  set_short( "Corridor - x51y56z7" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y56z7.c",
  "north" : DIR+"/rooms/x51y57z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
