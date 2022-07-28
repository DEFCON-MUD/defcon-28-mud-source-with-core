inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 25, 8 }));
  set_short( "Passage - x27y25z8" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y26z8.c",
  "south" : DIR+"/rooms/x27y24z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
