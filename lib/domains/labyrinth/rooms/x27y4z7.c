inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 4, 7 }));
  set_short( "Passage - x27y4z7" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y4z7.c",
  "south" : DIR+"/rooms/x27y3z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
