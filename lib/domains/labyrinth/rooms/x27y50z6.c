inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 50, 6 }));
  set_short( "Passage - x27y50z6" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y50z6.c",
  "south" : DIR+"/rooms/x27y49z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
