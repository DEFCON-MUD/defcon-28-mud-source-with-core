inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 64, 5 }));
  set_short( "Hallway - x8y64z5" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y64z5.c",
  "east" : DIR+"/rooms/x9y64z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
