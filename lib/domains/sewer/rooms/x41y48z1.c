inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 48, 1 }));
  set_short( "Passage - x41y48z1" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y48z1.c",
  "north" : DIR+"/rooms/x41y49z1.c",
  "south" : DIR+"/rooms/x41y47z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
