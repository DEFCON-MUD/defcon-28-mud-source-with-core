inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 58, 6 }));
  set_short( "Passage - x45y58z6" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y58z6.c",
  "east" : DIR+"/rooms/x46y58z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
