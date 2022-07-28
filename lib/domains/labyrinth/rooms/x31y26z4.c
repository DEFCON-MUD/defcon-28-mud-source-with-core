inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 26, 4 }));
  set_short( "Corridor - x31y26z4" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y26z4.c",
  "north" : DIR+"/rooms/x31y27z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
