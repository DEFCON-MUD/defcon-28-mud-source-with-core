inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 24, 9 }));
  set_short( "Passage - x11y24z9" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y24z9.c",
  "north" : DIR+"/rooms/x11y25z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
