inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 43, 7 }));
  set_short( "Passage - x47y43z7" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y44z7.c",
  "south" : DIR+"/rooms/x47y42z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
