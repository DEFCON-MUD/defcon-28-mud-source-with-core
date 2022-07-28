inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 4, 5 }));
  set_short( "Corridor - x7y4z5" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y4z5.c",
  "east" : DIR+"/rooms/x8y4z5.c",
  "north" : DIR+"/rooms/x7y5z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
