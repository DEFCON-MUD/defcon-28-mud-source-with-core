inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 56, 0 }));
  set_short( "Corridor - x58y56z0" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y56z0.c",
  "east" : DIR+"/rooms/x59y56z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
