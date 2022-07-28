inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 64, 0 }));
  set_short( "Hallway - x35y64z0" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y64z0.c",
  "east" : DIR+"/rooms/x36y64z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
