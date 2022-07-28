inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 52, 6 }));
  set_short( "Corridor - x21y52z6" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y52z6.c",
  "south" : DIR+"/rooms/x21y51z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
