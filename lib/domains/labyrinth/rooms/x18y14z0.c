inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 14, 0 }));
  set_short( "Corridor - x18y14z0" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y14z0.c",
  "east" : DIR+"/rooms/x19y14z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
