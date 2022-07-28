inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 36, 7 }));
  set_short( "Passage - x39y36z7" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y36z7.c",
  "north" : DIR+"/rooms/x39y37z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
