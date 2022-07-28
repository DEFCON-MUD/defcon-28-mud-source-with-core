inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 17, 7 }));
  set_short( "Passage - x33y17z7" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y18z7.c",
  "south" : DIR+"/rooms/x33y16z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
