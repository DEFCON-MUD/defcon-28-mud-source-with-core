inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 30, 8 }));
  set_short( "Corridor - x23y30z8" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y30z8.c",
  "south" : DIR+"/rooms/x23y29z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
