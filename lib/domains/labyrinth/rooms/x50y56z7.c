inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 56, 7 }));
  set_short( "Corridor - x50y56z7" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y56z7.c",
  "east" : DIR+"/rooms/x51y56z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
