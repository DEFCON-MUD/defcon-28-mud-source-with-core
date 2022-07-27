inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 28, 0 }));
  set_short( "Corridor - x7y28z0" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y28z0.c",
  "east" : DIR+"/rooms/x8y28z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
