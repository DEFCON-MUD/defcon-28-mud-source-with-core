inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 13, 7 }));
  set_short( "Passage - x51y13z7" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y14z7.c",
  "south" : DIR+"/rooms/x51y12z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
