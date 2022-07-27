inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 53, 5 }));
  set_short( "Hallway - x55y53z5" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y54z5.c",
  "south" : DIR+"/rooms/x55y52z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
