inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 6, 5 }));
  set_short( "Hallway - x38y6z5" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y6z5.c",
  "east" : DIR+"/rooms/x39y6z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
