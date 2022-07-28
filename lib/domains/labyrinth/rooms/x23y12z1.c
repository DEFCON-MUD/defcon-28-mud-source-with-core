inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 12, 1 }));
  set_short( "Hallway - x23y12z1" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y12z1.c",
  "north" : DIR+"/rooms/x23y13z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
