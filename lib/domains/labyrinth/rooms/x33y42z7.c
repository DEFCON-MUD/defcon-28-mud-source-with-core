inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 42, 7 }));
  set_short( "Corridor - x33y42z7" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y43z7.c",
  "south" : DIR+"/rooms/x33y41z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
