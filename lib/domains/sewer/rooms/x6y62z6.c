inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 62, 6 }));
  set_short( "Hallway - x6y62z6" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y62z6.c",
  "east" : DIR+"/rooms/x7y62z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
