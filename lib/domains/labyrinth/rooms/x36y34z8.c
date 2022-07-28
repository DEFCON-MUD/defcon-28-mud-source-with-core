inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 34, 8 }));
  set_short( "Corridor - x36y34z8" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y34z8.c",
  "east" : DIR+"/rooms/x37y34z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
