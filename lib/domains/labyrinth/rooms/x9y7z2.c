inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 7, 2 }));
  set_short( "Corridor - x9y7z2" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y8z2.c",
  "south" : DIR+"/rooms/x9y6z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
