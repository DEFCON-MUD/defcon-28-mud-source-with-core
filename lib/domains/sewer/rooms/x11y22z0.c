inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 22, 0 }));
  set_short( "Passage - x11y22z0" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y22z0.c",
  "north" : DIR+"/rooms/x11y23z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
