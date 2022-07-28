inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 48, 1 }));
  set_short( "Corridor - x32y48z1" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y48z1.c",
  "east" : DIR+"/rooms/x33y48z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
