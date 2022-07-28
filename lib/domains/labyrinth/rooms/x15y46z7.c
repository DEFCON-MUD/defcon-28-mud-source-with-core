inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 46, 7 }));
  set_short( "Corridor - x15y46z7" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y46z7.c",
  "south" : DIR+"/rooms/x15y45z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
