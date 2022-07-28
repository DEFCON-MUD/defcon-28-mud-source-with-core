inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 62, 64, 5 }));
  set_short( "Hallway - x62y64z5" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x61y64z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
