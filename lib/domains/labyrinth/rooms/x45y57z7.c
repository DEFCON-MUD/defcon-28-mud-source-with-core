inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 57, 7 }));
  set_short( "Corridor - x45y57z7" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y58z7.c",
  "south" : DIR+"/rooms/x45y56z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
