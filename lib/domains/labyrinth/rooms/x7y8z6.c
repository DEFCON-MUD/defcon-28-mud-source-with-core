inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 8, 6 }));
  set_short( "Corridor - x7y8z6" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y9z6.c",
  "south" : DIR+"/rooms/x7y7z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
