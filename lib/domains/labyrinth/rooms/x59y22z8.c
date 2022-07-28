inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 22, 8 }));
  set_short( "Passage - x59y22z8" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y22z8.c",
  "south" : DIR+"/rooms/x59y21z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
