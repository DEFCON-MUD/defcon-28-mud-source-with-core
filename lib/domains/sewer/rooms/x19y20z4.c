inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 20, 4 }));
  set_short( "Corridor - x19y20z4" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y20z4.c",
  "east" : DIR+"/rooms/x20y20z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
