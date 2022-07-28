inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 54, 2 }));
  set_short( "Passage - x11y54z2" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y54z2.c",
  "south" : DIR+"/rooms/x11y53z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
