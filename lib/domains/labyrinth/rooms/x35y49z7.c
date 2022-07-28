inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 49, 7 }));
  set_short( "Hallway - x35y49z7" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y50z7.c",
  "south" : DIR+"/rooms/x35y48z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
