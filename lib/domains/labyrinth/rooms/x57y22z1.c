inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 22, 1 }));
  set_short( "Hallway - x57y22z1" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y23z1.c",
  "south" : DIR+"/rooms/x57y21z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
