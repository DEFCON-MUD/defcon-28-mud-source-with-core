inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 26, 3 }));
  set_short( "Corridor - x20y26z3" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y26z3.c",
  "east" : DIR+"/rooms/x21y26z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
