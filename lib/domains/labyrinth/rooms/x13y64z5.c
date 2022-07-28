inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 64, 5 }));
  set_short( "Hallway - x13y64z5" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y64z5.c",
  "east" : DIR+"/rooms/x14y64z5.c",
  "south" : DIR+"/rooms/x13y63z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
