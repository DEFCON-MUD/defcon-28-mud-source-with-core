inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 59, 0 }));
  set_short( "Hallway - x11y59z0" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y60z0.c",
  "south" : DIR+"/rooms/x11y58z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
