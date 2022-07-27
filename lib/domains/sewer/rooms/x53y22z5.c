inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 22, 5 }));
  set_short( "Corridor - x53y22z5" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y22z5.c",
  "south" : DIR+"/rooms/x53y21z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
