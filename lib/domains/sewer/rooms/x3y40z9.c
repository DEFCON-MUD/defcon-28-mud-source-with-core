inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 40, 9 }));
  set_short( "Passage - x3y40z9" );
set_objects( DIR+"/monsters/maintainer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y40z9.c",
  "south" : DIR+"/rooms/x3y39z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
