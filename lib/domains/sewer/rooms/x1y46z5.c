inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 46, 5 }));
  set_short( "Hallway - x1y46z5" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y47z5.c",
  "south" : DIR+"/rooms/x1y45z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
