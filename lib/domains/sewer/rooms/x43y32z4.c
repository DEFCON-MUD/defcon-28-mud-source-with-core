inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 32, 4 }));
  set_short( "Hallway - x43y32z4" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y32z4.c",
  "east" : DIR+"/rooms/x44y32z4.c",
  "north" : DIR+"/rooms/x43y33z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
