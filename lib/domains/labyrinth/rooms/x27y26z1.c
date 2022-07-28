inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 26, 1 }));
  set_short( "Corridor - x27y26z1" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y26z1.c",
  "north" : DIR+"/rooms/x27y27z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
