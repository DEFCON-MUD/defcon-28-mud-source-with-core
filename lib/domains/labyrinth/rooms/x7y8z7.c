inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 8, 7 }));
  set_short( "Passage - x7y8z7" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y8z7.c",
  "south" : DIR+"/rooms/x7y7z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
