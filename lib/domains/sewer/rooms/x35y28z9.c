inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 28, 9 }));
  set_short( "Corridor - x35y28z9" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y28z9.c",
  "south" : DIR+"/rooms/x35y27z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
