inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 50, 2 }));
  set_short( "Corridor - x17y50z2" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y50z2.c",
  "south" : DIR+"/rooms/x17y49z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
