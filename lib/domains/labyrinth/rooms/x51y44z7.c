inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 44, 7 }));
  set_short( "Hallway - x51y44z7" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y44z7.c",
  "east" : DIR+"/rooms/x52y44z7.c",
  "north" : DIR+"/rooms/x51y45z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
