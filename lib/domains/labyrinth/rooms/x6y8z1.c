inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 8, 1 }));
  set_short( "Passage - x6y8z1" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y8z1.c",
  "east" : DIR+"/rooms/x7y8z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
