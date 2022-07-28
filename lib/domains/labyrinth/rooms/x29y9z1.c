inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 9, 1 }));
  set_short( "Passage - x29y9z1" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y10z1.c",
  "south" : DIR+"/rooms/x29y8z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
