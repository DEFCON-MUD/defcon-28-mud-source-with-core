inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 20, 1 }));
  set_short( "Corridor - x21y20z1" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y20z1.c",
  "south" : DIR+"/rooms/x21y19z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
