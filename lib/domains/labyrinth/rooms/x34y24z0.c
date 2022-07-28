inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 24, 0 }));
  set_short( "Hallway - x34y24z0" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y24z0.c",
  "east" : DIR+"/rooms/x35y24z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
