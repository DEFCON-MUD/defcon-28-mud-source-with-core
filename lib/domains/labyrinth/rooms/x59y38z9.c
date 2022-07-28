inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 38, 9 }));
  set_short( "Passage - x59y38z9" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y39z9.c",
  "south" : DIR+"/rooms/x59y37z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
