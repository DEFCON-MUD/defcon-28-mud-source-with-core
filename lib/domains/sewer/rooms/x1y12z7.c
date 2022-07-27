inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 12, 7 }));
  set_short( "Passage - x1y12z7" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y12z7.c",
  "south" : DIR+"/rooms/x1y11z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
