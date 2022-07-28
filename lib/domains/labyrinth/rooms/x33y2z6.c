inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 2, 6 }));
  set_short( "Passage - x33y2z6" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y2z6.c",
  "north" : DIR+"/rooms/x33y3z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
