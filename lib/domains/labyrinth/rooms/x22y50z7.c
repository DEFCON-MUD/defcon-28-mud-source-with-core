inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 50, 7 }));
  set_short( "Corridor - x22y50z7" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y50z7.c",
  "east" : DIR+"/rooms/x23y50z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
