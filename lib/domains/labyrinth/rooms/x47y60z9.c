inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 60, 9 }));
  set_short( "Corridor - x47y60z9" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y60z9.c",
  "east" : DIR+"/rooms/x48y60z9.c",
  "north" : DIR+"/rooms/x47y61z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
