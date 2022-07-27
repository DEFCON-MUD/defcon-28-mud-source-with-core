inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 8, 1 }));
  set_short( "Corridor - x57y8z1" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y9z1.c",
  "south" : DIR+"/rooms/x57y7z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
