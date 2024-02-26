inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 52, 8 }));
  set_short( "Hallway - x51y52z8" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y52z8.c",
  "south" : DIR+"/rooms/x51y51z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
