inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 41, 9 }));
  set_short( "Hallway - x57y41z9" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y42z9.c",
  "south" : DIR+"/rooms/x57y40z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
