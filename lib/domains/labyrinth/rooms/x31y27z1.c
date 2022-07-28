inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 27, 1 }));
  set_short( "Hallway - x31y27z1" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y28z1.c",
  "south" : DIR+"/rooms/x31y26z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
