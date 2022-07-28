inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 36, 3 }));
  set_short( "Corridor - x13y36z3" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y36z3.c",
  "north" : DIR+"/rooms/x13y37z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
