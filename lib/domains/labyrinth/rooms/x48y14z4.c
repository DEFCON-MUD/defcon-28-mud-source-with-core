inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 14, 4 }));
  set_short( "Corridor - x48y14z4" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y14z4.c",
  "east" : DIR+"/rooms/x49y14z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
