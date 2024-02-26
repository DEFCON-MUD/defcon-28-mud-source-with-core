inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 37, 4 }));
  set_short( "Passage - x49y37z4" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y38z4.c",
  "south" : DIR+"/rooms/x49y36z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
