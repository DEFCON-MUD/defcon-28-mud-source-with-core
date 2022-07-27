inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 34, 2 }));
  set_short( "Passage - x43y34z2" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y34z2.c",
  "south" : DIR+"/rooms/x43y33z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
