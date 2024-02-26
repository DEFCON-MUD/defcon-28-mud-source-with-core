inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 30, 4 }));
  set_short( "Hallway - x29y30z4" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y30z4.c",
  "east" : DIR+"/rooms/x30y30z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
