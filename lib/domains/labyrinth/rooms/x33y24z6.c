inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 24, 6 }));
  set_short( "Corridor - x33y24z6" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y24z6.c",
  "east" : DIR+"/rooms/x34y24z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
