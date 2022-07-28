inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 22, 4 }));
  set_short( "Corridor - x33y22z4" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y22z4.c",
  "north" : DIR+"/rooms/x33y23z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
