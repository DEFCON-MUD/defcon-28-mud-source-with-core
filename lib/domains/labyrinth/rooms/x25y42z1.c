inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 42, 1 }));
  set_short( "Corridor - x25y42z1" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y42z1.c",
  "south" : DIR+"/rooms/x25y41z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
