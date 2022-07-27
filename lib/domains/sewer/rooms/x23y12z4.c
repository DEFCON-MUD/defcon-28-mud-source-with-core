inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 12, 4 }));
  set_short( "Corridor - x23y12z4" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y12z4.c",
  "north" : DIR+"/rooms/x23y13z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
