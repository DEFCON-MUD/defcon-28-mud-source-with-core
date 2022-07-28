inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 4, 6 }));
  set_short( "Corridor - x52y4z6" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y4z6.c",
  "east" : DIR+"/rooms/x53y4z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
