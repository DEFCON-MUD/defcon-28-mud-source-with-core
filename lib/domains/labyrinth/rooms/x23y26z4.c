inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 26, 4 }));
  set_short( "Corridor - x23y26z4" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y26z4.c",
  "south" : DIR+"/rooms/x23y25z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
