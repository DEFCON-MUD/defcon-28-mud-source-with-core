inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 13, 6 }));
  set_short( "Passage - x61y13z6" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y14z6.c",
  "south" : DIR+"/rooms/x61y12z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
