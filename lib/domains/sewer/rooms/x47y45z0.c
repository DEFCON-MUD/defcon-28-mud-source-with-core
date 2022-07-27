inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 45, 0 }));
  set_short( "Hallway - x47y45z0" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y46z0.c",
  "south" : DIR+"/rooms/x47y44z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
