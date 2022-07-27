inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 20, 7 }));
  set_short( "Corridor - x53y20z7" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y20z7.c",
  "south" : DIR+"/rooms/x53y19z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
