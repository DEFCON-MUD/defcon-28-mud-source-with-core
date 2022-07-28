inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 22, 3 }));
  set_short( "Passage - x18y22z3" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y22z3.c",
  "east" : DIR+"/rooms/x19y22z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
