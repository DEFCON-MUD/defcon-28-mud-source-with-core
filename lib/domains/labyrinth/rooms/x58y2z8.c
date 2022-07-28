inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 2, 8 }));
  set_short( "Corridor - x58y2z8" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y2z8.c",
  "east" : DIR+"/rooms/x59y2z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
