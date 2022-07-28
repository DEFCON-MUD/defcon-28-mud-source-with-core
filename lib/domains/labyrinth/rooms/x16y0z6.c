inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 0, 6 }));
  set_short( "Corridor - x16y0z6" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y0z6.c",
  "east" : DIR+"/rooms/x17y0z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
