inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 24, 0 }));
  set_short( "Corridor - x61y24z0" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y24z0.c",
  "south" : DIR+"/rooms/x61y23z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
