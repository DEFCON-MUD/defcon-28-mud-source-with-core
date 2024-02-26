inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 8, 1 }));
  set_short( "Corridor - x45y8z1" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y8z1.c",
  "south" : DIR+"/rooms/x45y7z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
