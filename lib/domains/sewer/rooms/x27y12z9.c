inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 12, 9 }));
  set_short( "Hallway - x27y12z9" );
set_objects( DIR+"/monsters/maintainer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y12z9.c",
  "south" : DIR+"/rooms/x27y11z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
