inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 36, 5 }));
  set_short( "Hallway - x40y36z5" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y36z5.c",
  "east" : DIR+"/rooms/x41y36z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
