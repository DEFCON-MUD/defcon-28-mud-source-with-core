inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 24, 7 }));
  set_short( "Hallway - x15y24z7" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y24z7.c",
  "east" : DIR+"/rooms/x16y24z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
