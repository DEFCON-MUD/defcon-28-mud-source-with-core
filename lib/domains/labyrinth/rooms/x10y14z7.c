inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 14, 7 }));
  set_short( "Passage - x10y14z7" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y14z7.c",
  "east" : DIR+"/rooms/x11y14z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
