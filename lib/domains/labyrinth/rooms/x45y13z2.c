inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 13, 2 }));
  set_short( "Passage - x45y13z2" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y14z2.c",
  "south" : DIR+"/rooms/x45y12z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
