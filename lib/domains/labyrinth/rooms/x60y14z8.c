inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 14, 8 }));
  set_short( "Passage - x60y14z8" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y14z8.c",
  "east" : DIR+"/rooms/x61y14z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
