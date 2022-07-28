inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 45, 6 }));
  set_short( "Hallway - x1y45z6" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y46z6.c",
  "south" : DIR+"/rooms/x1y44z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
