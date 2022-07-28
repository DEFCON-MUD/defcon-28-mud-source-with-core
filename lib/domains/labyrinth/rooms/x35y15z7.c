inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 15, 7 }));
  set_short( "Hallway - x35y15z7" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y16z7.c",
  "south" : DIR+"/rooms/x35y14z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
