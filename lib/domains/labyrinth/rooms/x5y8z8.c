inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 8, 8 }));
  set_short( "Corridor - x5y8z8" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y8z8.c",
  "south" : DIR+"/rooms/x5y7z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
