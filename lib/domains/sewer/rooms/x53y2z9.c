inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 2, 9 }));
  set_short( "Passage - x53y2z9" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y2z9.c",
  "north" : DIR+"/rooms/x53y3z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
