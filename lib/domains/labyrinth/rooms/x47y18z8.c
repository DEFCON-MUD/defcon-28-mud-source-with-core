inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 18, 8 }));
  set_short( "Hallway - x47y18z8" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y18z8.c",
  "north" : DIR+"/rooms/x47y19z8.c",
  "south" : DIR+"/rooms/x47y17z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
