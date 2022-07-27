inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 8, 8 }));
  set_short( "Corridor - x35y8z8" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y8z8.c",
  "east" : DIR+"/rooms/x36y8z8.c",
  "south" : DIR+"/rooms/x35y7z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
