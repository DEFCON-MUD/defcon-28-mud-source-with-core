inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 20, 5 }));
  set_short( "Passage - x40y20z5" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y20z5.c",
  "east" : DIR+"/rooms/x41y20z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
