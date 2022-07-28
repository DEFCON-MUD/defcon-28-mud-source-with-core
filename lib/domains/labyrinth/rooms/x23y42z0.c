inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 42, 0 }));
  set_short( "Hallway - x23y42z0" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y43z0.c",
  "south" : DIR+"/rooms/x23y41z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
