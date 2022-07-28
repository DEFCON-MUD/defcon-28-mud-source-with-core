inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 30, 7 }));
  set_short( "Hallway - x57y30z7" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y30z7.c",
  "south" : DIR+"/rooms/x57y29z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
