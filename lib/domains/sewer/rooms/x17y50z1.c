inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 50, 1 }));
  set_short( "Passage - x17y50z1" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y50z1.c",
  "north" : DIR+"/rooms/x17y51z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
