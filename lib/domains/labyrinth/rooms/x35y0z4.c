inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 0, 4 }));
  set_short( "Passage - x35y0z4" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y0z4.c",
  "east" : DIR+"/rooms/x36y0z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
