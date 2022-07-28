inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 14, 6 }));
  set_short( "Hallway - x52y14z6" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y14z6.c",
  "east" : DIR+"/rooms/x53y14z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
