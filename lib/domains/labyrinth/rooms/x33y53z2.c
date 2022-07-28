inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 53, 2 }));
  set_short( "Hallway - x33y53z2" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y54z2.c",
  "south" : DIR+"/rooms/x33y52z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
