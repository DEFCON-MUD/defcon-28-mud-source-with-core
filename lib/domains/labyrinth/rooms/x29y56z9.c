inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 56, 9 }));
  set_short( "Corridor - x29y56z9" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y56z9.c",
  "east" : DIR+"/rooms/x30y56z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
