inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 56, 4 }));
  set_short( "Hallway - x56y56z4" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y56z4.c",
  "east" : DIR+"/rooms/x57y56z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
