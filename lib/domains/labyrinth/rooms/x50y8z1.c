inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 8, 1 }));
  set_short( "Passage - x50y8z1" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y8z1.c",
  "east" : DIR+"/rooms/x51y8z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
