inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 18, 5 }));
  set_short( "Hallway - x19y18z5" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y18z5.c",
  "north" : DIR+"/rooms/x19y19z5.c",
  "south" : DIR+"/rooms/x19y17z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
