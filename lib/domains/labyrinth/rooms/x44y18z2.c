inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 18, 2 }));
  set_short( "Passage - x44y18z2" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y18z2.c",
  "east" : DIR+"/rooms/x45y18z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
