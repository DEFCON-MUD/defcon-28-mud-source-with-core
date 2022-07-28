inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 42, 8 }));
  set_short( "Hallway - x29y42z8" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y42z8.c",
  "south" : DIR+"/rooms/x29y41z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
