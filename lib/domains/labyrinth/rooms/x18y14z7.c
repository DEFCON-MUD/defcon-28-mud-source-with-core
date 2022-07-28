inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 14, 7 }));
  set_short( "Corridor - x18y14z7" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y14z7.c",
  "east" : DIR+"/rooms/x19y14z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
