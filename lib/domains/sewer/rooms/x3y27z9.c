inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 27, 9 }));
  set_short( "Corridor - x3y27z9" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y28z9.c",
  "south" : DIR+"/rooms/x3y26z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
