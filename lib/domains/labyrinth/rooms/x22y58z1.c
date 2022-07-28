inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 58, 1 }));
  set_short( "Corridor - x22y58z1" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y58z1.c",
  "east" : DIR+"/rooms/x23y58z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
