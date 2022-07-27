inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 23, 5 }));
  set_short( "Hallway - x11y23z5" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y24z5.c",
  "south" : DIR+"/rooms/x11y22z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
