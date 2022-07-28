inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 26, 1 }));
  set_short( "Hallway - x49y26z1" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y26z1.c",
  "north" : DIR+"/rooms/x49y27z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
