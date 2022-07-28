inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 8, 3 }));
  set_short( "Hallway - x43y8z3" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y9z3.c",
  "south" : DIR+"/rooms/x43y7z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
