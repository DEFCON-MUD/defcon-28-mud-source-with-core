inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 32, 6 }));
  set_short( "Hallway - x51y32z6" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y32z6.c",
  "south" : DIR+"/rooms/x51y31z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
