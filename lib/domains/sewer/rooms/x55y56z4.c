inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 56, 4 }));
  set_short( "Passage - x55y56z4" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y56z4.c",
  "north" : DIR+"/rooms/x55y57z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
