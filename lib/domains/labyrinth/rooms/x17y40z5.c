inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 40, 5 }));
  set_short( "Corridor - x17y40z5" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y40z5.c",
  "south" : DIR+"/rooms/x17y39z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
