inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 53, 1 }));
  set_short( "Passage - x41y53z1" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y54z1.c",
  "south" : DIR+"/rooms/x41y52z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
