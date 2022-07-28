inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 41, 6 }));
  set_short( "Passage - x29y41z6" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y42z6.c",
  "south" : DIR+"/rooms/x29y40z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
