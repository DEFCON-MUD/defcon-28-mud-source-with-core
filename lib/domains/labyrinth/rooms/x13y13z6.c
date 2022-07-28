inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 13, 6 }));
  set_short( "Corridor - x13y13z6" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y14z6.c",
  "south" : DIR+"/rooms/x13y12z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
