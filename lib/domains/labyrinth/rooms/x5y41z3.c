inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 41, 3 }));
  set_short( "Corridor - x5y41z3" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y42z3.c",
  "south" : DIR+"/rooms/x5y40z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
