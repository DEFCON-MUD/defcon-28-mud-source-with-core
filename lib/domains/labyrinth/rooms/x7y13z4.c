inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 13, 4 }));
  set_short( "Passage - x7y13z4" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y14z4.c",
  "south" : DIR+"/rooms/x7y12z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
