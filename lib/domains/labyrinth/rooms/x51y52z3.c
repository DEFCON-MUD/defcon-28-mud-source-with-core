inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 52, 3 }));
  set_short( "Hallway - x51y52z3" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y52z3.c",
  "south" : DIR+"/rooms/x51y51z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
