inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 22, 9 }));
  set_short( "Corridor - x56y22z9" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y22z9.c",
  "east" : DIR+"/rooms/x57y22z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
