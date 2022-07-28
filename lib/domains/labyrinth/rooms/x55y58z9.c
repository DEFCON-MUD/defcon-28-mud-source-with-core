inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 58, 9 }));
  set_short( "Corridor - x55y58z9" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y58z9.c",
  "north" : DIR+"/rooms/x55y59z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
