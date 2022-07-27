inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 60, 0 }));
  set_short( "Hallway - x23y60z0" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y61z0.c",
  "south" : DIR+"/rooms/x23y59z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
