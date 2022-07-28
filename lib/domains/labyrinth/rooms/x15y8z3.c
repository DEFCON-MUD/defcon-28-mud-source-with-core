inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 8, 3 }));
  set_short( "Passage - x15y8z3" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y8z3.c",
  "south" : DIR+"/rooms/x15y7z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
