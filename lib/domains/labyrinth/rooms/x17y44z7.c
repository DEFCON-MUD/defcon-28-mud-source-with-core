inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 44, 7 }));
  set_short( "Hallway - x17y44z7" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y44z7.c",
  "east" : DIR+"/rooms/x18y44z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
