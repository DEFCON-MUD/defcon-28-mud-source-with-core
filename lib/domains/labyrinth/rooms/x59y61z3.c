inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 61, 3 }));
  set_short( "Passage - x59y61z3" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y62z3.c",
  "south" : DIR+"/rooms/x59y60z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
