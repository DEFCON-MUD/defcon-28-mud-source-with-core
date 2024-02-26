inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 48, 1 }));
  set_short( "Hallway - x47y48z1" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y48z1.c",
  "east" : DIR+"/rooms/x48y48z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
