inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 11, 3 }));
  set_short( "Passage - x61y11z3" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y12z3.c",
  "south" : DIR+"/rooms/x61y10z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
