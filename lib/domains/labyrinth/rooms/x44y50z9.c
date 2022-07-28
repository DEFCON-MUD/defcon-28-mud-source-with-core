inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 50, 9 }));
  set_short( "Passage - x44y50z9" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y50z9.c",
  "east" : DIR+"/rooms/x45y50z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
