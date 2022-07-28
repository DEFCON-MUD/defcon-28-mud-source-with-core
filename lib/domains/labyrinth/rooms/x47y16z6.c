inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 16, 6 }));
  set_short( "Passage - x47y16z6" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y17z6.c",
  "south" : DIR+"/rooms/x47y15z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
