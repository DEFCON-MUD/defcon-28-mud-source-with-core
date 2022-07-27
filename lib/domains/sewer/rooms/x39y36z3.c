inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 36, 3 }));
  set_short( "Corridor - x39y36z3" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y36z3.c",
  "south" : DIR+"/rooms/x39y35z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
