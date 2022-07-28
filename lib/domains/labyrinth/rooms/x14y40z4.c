inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 40, 4 }));
  set_short( "Hallway - x14y40z4" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y40z4.c",
  "east" : DIR+"/rooms/x15y40z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
