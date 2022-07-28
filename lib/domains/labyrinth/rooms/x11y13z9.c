inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 13, 9 }));
  set_short( "Passage - x11y13z9" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y14z9.c",
  "south" : DIR+"/rooms/x11y12z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
