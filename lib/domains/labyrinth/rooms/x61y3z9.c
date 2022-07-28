inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 3, 9 }));
  set_short( "Corridor - x61y3z9" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y4z9.c",
  "south" : DIR+"/rooms/x61y2z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
