inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 62, 3 }));
  set_short( "Passage - x44y62z3" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y62z3.c",
  "east" : DIR+"/rooms/x45y62z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
