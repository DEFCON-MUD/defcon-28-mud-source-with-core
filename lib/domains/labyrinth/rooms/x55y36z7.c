inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 36, 7 }));
  set_short( "Hallway - x55y36z7" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y36z7.c",
  "north" : DIR+"/rooms/x55y37z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
