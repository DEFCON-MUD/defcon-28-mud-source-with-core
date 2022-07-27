inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 64, 8 }));
  set_short( "Corridor - x54y64z8" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y64z8.c",
  "east" : DIR+"/rooms/x55y64z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
