inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 27, 2 }));
  set_short( "Corridor - x49y27z2" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y28z2.c",
  "south" : DIR+"/rooms/x49y26z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
