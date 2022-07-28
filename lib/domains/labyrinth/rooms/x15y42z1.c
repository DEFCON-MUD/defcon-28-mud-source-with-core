inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 42, 1 }));
  set_short( "Hallway - x15y42z1" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y42z1.c",
  "east" : DIR+"/rooms/x16y42z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
