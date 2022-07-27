inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 54, 4 }));
  set_short( "Passage - x17y54z4" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y54z4.c",
  "south" : DIR+"/rooms/x17y53z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
