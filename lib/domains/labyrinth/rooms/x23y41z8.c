inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 41, 8 }));
  set_short( "Hallway - x23y41z8" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y42z8.c",
  "south" : DIR+"/rooms/x23y40z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
