inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 17, 0 }));
  set_short( "Passage - x3y17z0" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y18z0.c",
  "south" : DIR+"/rooms/x3y16z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
