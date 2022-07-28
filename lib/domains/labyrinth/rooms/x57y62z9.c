inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 62, 9 }));
  set_short( "Corridor - x57y62z9" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y62z9.c",
  "east" : DIR+"/rooms/x58y62z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
