inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 7, 2 }));
  set_short( "Passage - x41y7z2" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y8z2.c",
  "south" : DIR+"/rooms/x41y6z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
