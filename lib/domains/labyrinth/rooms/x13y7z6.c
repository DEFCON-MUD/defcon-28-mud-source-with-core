inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 7, 6 }));
  set_short( "Hallway - x13y7z6" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y8z6.c",
  "south" : DIR+"/rooms/x13y6z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
