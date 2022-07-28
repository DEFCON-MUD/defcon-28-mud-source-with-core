inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 16, 7 }));
  set_short( "Corridor - x43y16z7" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y16z7.c",
  "north" : DIR+"/rooms/x43y17z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
