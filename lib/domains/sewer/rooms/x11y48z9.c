inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 48, 9 }));
  set_short( "Passage - x11y48z9" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y49z9.c",
  "south" : DIR+"/rooms/x11y47z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
