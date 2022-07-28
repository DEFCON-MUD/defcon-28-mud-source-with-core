inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 56, 7 }));
  set_short( "Hallway - x5y56z7" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y57z7.c",
  "south" : DIR+"/rooms/x5y55z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
