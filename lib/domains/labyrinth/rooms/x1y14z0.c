inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 14, 0 }));
  set_short( "Corridor - x1y14z0" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y15z0.c",
  "south" : DIR+"/rooms/x1y13z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
