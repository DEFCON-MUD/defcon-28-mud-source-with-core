inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 0, 5 }));
  set_short( "Passage - x45y0z5" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y0z5.c",
  "east" : DIR+"/rooms/x46y0z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
