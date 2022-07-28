inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 50, 6 }));
  set_short( "Corridor - x41y50z6" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y51z6.c",
  "south" : DIR+"/rooms/x41y49z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
