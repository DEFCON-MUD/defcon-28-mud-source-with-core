inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 41, 6 }));
  set_short( "Corridor - x39y41z6" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y42z6.c",
  "south" : DIR+"/rooms/x39y40z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
