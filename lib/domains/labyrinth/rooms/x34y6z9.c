inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 6, 9 }));
  set_short( "Corridor - x34y6z9" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y6z9.c",
  "east" : DIR+"/rooms/x35y6z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
