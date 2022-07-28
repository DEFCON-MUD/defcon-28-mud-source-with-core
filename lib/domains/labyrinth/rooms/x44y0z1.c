inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 0, 1 }));
  set_short( "Corridor - x44y0z1" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y0z1.c",
  "east" : DIR+"/rooms/x45y0z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
