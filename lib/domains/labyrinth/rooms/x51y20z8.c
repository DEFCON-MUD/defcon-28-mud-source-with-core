inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 20, 8 }));
  set_short( "Passage - x51y20z8" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y20z8.c",
  "east" : DIR+"/rooms/x52y20z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
