inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 36, 5 }));
  set_short( "Hallway - x1y36z5" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y37z5.c",
  "south" : DIR+"/rooms/x1y35z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
