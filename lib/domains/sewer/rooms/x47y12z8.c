inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 12, 8 }));
  set_short( "Corridor - x47y12z8" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y12z8.c",
  "south" : DIR+"/rooms/x47y11z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
