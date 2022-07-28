inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 28, 5 }));
  set_short( "Passage - x29y28z5" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y28z5.c",
  "south" : DIR+"/rooms/x29y27z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
