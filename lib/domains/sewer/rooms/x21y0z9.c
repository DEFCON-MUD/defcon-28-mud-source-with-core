inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 0, 9 }));
  set_short( "Passage - x21y0z9" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y0z9.c",
  "east" : DIR+"/rooms/x22y0z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
