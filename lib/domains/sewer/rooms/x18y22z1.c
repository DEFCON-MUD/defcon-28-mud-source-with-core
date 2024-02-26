inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 22, 1 }));
  set_short( "Corridor - x18y22z1" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y22z1.c",
  "east" : DIR+"/rooms/x19y22z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
