inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 11, 2 }));
  set_short( "Passage - x3y11z2" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y12z2.c",
  "south" : DIR+"/rooms/x3y10z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
