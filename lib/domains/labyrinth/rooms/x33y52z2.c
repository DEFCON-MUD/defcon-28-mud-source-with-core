inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 52, 2 }));
  set_short( "Hallway - x33y52z2" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y52z2.c",
  "north" : DIR+"/rooms/x33y53z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
