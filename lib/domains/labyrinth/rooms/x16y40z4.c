inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 40, 4 }));
  set_short( "Hallway - x16y40z4" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y40z4.c",
  "east" : DIR+"/rooms/x17y40z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
