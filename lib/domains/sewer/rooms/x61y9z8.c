inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 9, 8 }));
  set_short( "Passage - x61y9z8" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y10z8.c",
  "south" : DIR+"/rooms/x61y8z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
