inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 4, 0 }));
  set_short( "Hallway - x50y4z0" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y4z0.c",
  "east" : DIR+"/rooms/x51y4z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
