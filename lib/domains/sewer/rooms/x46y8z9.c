inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 8, 9 }));
  set_short( "Passage - x46y8z9" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y8z9.c",
  "east" : DIR+"/rooms/x47y8z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
