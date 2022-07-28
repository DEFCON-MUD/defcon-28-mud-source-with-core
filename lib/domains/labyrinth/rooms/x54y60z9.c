inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 60, 9 }));
  set_short( "Hallway - x54y60z9" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y60z9.c",
  "east" : DIR+"/rooms/x55y60z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
