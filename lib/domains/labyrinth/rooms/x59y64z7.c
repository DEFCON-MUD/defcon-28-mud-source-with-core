inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 64, 7 }));
  set_short( "Hallway - x59y64z7" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y64z7.c",
  "east" : DIR+"/rooms/x60y64z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
