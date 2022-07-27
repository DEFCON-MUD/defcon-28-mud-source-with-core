inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 28, 9 }));
  set_short( "Hallway - x12y28z9" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y28z9.c",
  "east" : DIR+"/rooms/x13y28z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
