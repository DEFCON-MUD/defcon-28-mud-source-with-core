inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 36, 2 }));
  set_short( "Passage - x5y36z2" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y37z2.c",
  "south" : DIR+"/rooms/x5y35z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
