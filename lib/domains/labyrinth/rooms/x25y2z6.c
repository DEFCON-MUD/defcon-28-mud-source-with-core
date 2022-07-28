inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 2, 6 }));
  set_short( "Corridor - x25y2z6" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y2z6.c",
  "east" : DIR+"/rooms/x26y2z6.c",
  "north" : DIR+"/rooms/x25y3z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
