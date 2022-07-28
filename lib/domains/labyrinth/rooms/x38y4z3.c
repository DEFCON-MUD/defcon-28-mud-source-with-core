inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 4, 3 }));
  set_short( "Corridor - x38y4z3" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y4z3.c",
  "east" : DIR+"/rooms/x39y4z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
