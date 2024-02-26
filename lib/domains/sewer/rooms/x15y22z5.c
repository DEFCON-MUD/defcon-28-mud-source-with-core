inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 22, 5 }));
  set_short( "Hallway - x15y22z5" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y22z5.c",
  "south" : DIR+"/rooms/x15y21z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
