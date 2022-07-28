inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 14, 6 }));
  set_short( "Corridor - x40y14z6" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y14z6.c",
  "east" : DIR+"/rooms/x41y14z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
