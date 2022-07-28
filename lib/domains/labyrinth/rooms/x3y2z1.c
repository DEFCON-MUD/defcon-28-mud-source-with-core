inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 2, 1 }));
  set_short( "Hallway - x3y2z1" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y2z1.c",
  "east" : DIR+"/rooms/x4y2z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
