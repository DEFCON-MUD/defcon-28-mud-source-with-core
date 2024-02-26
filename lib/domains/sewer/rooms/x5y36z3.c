inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 36, 3 }));
  set_short( "Hallway - x5y36z3" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y36z3.c",
  "south" : DIR+"/rooms/x5y35z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
