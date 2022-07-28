inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 57, 6 }));
  set_short( "Corridor - x35y57z6" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y58z6.c",
  "south" : DIR+"/rooms/x35y56z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
