inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 52, 1 }));
  set_short( "Hallway - x1y52z1" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y53z1.c",
  "south" : DIR+"/rooms/x1y51z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
