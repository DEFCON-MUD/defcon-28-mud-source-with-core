inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 29, 7 }));
  set_short( "Hallway - x23y29z7" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y30z7.c",
  "south" : DIR+"/rooms/x23y28z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
