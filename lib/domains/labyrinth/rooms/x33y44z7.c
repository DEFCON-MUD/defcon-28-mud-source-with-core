inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 44, 7 }));
  set_short( "Corridor - x33y44z7" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y44z7.c",
  "south" : DIR+"/rooms/x33y43z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
