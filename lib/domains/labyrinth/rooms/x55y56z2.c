inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 56, 2 }));
  set_short( "Corridor - x55y56z2" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y56z2.c",
  "south" : DIR+"/rooms/x55y55z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
